module stella/validate

import stella/syntax/ast
import std/core/undiv
import stella/utils

pub effect validate-error
  final ctl validate-error(msg : string) : ()

effect validate
  fun check(extensions : string) : ()
  fun check-any(extensions : list<string>) : ()
  fun fail(msg : string) : ()

/*
Stella supports a variety of extensions, some of which
conflict with each other. However, the generated AST
contains all possible nodes for all the extensions available.

`validate` checks that for each AST node present,
the corresponding extension is declared in the begginning
of a stella program.
*/
pub fun validate(program : program) : <validate-error> ()
  val AProgram(_, _, declarations) = program
  with handler
    fun check(extension : string)
      if program.has-extension(extension)
      then ()
      else validate-error("Expected extension " ++ extension ++ " to be enabled")
    fun check-any(extensions : list<string>)
      if extensions.any(fn (e) program.has-extension(e))
      then ()
      else validate-error("Expected at least one of the extensions to be enabled: " ++ extensions.show)
    fun fail(msg : string) validate-error(msg)
  declarations.map(validate-declaration)
  ()

fun validate-declaration(decl : decl) : <validate> ()
  match decl
    DeclFun(_, _, paramDeclList, returnType, throwType, declList, expr) ->
      if paramDeclList.length == 0 then check("#nullary-functions") else ()
      if paramDeclList.length > 1  then check("#multiparameter-functions") else ()
      paramDeclList.map(validate-paramDecl)
      match returnType
        NoReturnType -> ()
        SomeReturnType(type_) -> validate-type(type_)
      match throwType
        NoThrowType -> ()
        SomeThrowType(types) ->
          check("#exceptions")
          types.map(validate-type)
          ()
      declList.map(fn (d) validate-declaration(pretend-decreasing(d)))
      validate-expr(expr)
    DeclFunGeneric(annotationList, stellaIdent, _, paramDeclList, returnType, throwType, declList, expr) ->
      check("#universal-types")
      validate-declaration(pretend-decreasing(DeclFun(annotationList, stellaIdent, paramDeclList, returnType, throwType, declList, expr)))
    DeclFunMod ->
      // TODO
      check-any(["#modal-lock"])
    DeclTypeAlias(_, type_) ->
      check("#type-aliases")
      validate-type(type_)
    DeclExceptionType(type_) ->
      check("#exception-type-declaration")
      validate-type(type_)
    DeclExceptionVariant(_, type_) ->
      check("#open-variant-exceptions")
      validate-type(type_)

fun validate-paramDecl(AParamDecl(_, type_) : paramDecl) : <validate> ()
  validate-type(type_)

fun validate-type(type_ : type_) : <validate> ()
  match type_
    TypeAuto -> check("#type-reconstruction")
    TypeFun(type_List, type_) ->
      validate-type(type_)
      if type_List.length == 0 then check("#nullary-functions") else ()
      if type_List.length > 1  then check("#multiparameter-functions") else ()
      type_List.map(fn (t) validate-type(pretend-decreasing(t)))
      ()
    TypeForAll(_, type_) ->
      check("#universal-types")
      validate-type(type_)
    TypeRec(_, _type_) -> fail("Undocumented: TypeRec")
    TypeSum(type__1 : type_, type__2 : type_) ->
      check("#sum-types")
      validate-type(type__1)
      validate-type(type__2)
    TypeTuple (type_List) ->
      if type_List.length == 2
      then check-any(["#pairs", "#tuples"])
      else check("#tuples")
      type_List.map(fn (t) validate-type(pretend-decreasing(t)))
      ()
    TypeRecord(recordFieldTypeList) ->
      check("#records")
      recordFieldTypeList.map(fn (ARecordFieldType(_, typ)) validate-type(pretend-decreasing(typ)))
      ()
    TypeVariant (variantFieldTypeList) ->
      check("#variants")
      fun from-optional(op : optionalTyping) : maybe<type_>
        match op
          NoTyping -> Nothing
          SomeTyping(typ) -> Just(typ)
      val types = variantFieldTypeList.filter-map(fn (AVariantFieldType(_, op)) from-optional(op))
      types.map(fn (t) validate-type(pretend-decreasing(t)))
      ()
    TypeList(type_) ->
      check("#lists")
      validate-type(type_)
    TypeBool -> ()
    TypeNat -> ()
    TypeUnit -> check("#unit-type")
    TypeTop -> check("#top-type")
    TypeBottom -> check("#bottom-type")
    TypeRef(type_) ->
      check("#references")
      validate-type(type_)
    TypeVar -> check("#universal-types")

fun validate-recordFieldType(ARecordFieldType(_, type_)) : <validate> ()
  validate-type(pretend-decreasing(type_))

fun validate-expr(expr : expr) : <validate> ()
  match expr
    Sequence(expr_1, expr_2) ->
      check("#sequencing")
      validate-expr(expr_1)
      validate-expr(expr_2)
    Assign(expr_1, expr_2) ->
      check("#references")
      validate-expr(expr_1)
      validate-expr(expr_2)
    If(expr_1, expr_2, expr_3) ->
      validate-expr(expr_1)
      validate-expr(expr_2)
      validate-expr(expr_3)
    Let (patternBindingList, expr) ->
      check("#let-bindings")
      patternBindingList.map(
        fn (APatternBinding(pattern, expr_1))
          validate-pattern(pattern)
          validate-expr(pretend-decreasing(expr_1))
      )
      validate-expr(expr)
    LetRec (patternBindingList : list<patternBinding>, expr : expr) ->
      check("#letrec-bindings")
      patternBindingList.map(
        fn (APatternBinding(pattern, expr_1))
          validate-pattern(pattern)
          validate-expr(pretend-decreasing(expr_1))
      )
      validate-expr(expr)
    TypeAbstraction (_, expr) ->
      check("#universal-types")
      validate-expr(expr)
    LessThan (expr_1, expr_2) ->
      check("#comparison-operators")
      validate-expr(expr_1)
      validate-expr(expr_2)
    LessThanOrEqual (expr_1, expr_2) ->
      check("#comparison-operators")
      validate-expr(expr_1)
      validate-expr(expr_2)
    GreaterThan (expr_1, expr_2) ->
      check("#comparison-operators")
      validate-expr(expr_1)
      validate-expr(expr_2)
    GreaterThanOrEqual (expr_1, expr_2) ->
      check("#comparison-operators")
      validate-expr(expr_1)
      validate-expr(expr_2)
    Equal (expr_1, expr_2) ->
      check("#comparison-operators")
      validate-expr(expr_1)
      validate-expr(expr_2)
    NotEqual (expr_1, expr_2) ->
      check("#comparison-operators")
      validate-expr(expr_1)
      validate-expr(expr_2)
    TypeAsc(expr, type_) ->
      check("#type-ascriptions")
      validate-expr(expr)
      validate-type(type_)
    TypeCast(expr, type_) ->
      check("#type-cast")
      validate-expr(expr)
      validate-type(type_)
    Abstraction(paramDeclList, expr) ->
      if paramDeclList.length == 0 then check("#nullary-functions") else ()
      if paramDeclList.length > 1  then check("#multiparameter-functions") else ()
      paramDeclList.map(validate-paramDecl)
      validate-expr(expr)
    Mod(_mod, expr) ->
      // TODO: check different modes
      check-any(["#modal-lock"])
      validate-expr(expr)
    Variant(_, exprData) ->
      check("#variants")
      match exprData
        NoExprData -> ()
        SomeExprData(expr_1) ->
          validate-expr(expr_1)
    Match(expr, matchCaseList) ->
      check("#structural-patterns")
      validate-expr(expr)
      matchCaseList.map(
        fn (AMatchCase(pattern, expr_1))
          validate-pattern(pattern)
          validate-expr(pretend-decreasing(expr_1))
      )
      ()
    List(exprList) ->
      check("#lists")
      exprList.map(fn (e) validate-expr(pretend-decreasing(e)))
      ()
    Add (expr_1, expr_2) ->
      check("#arithmetic-operators")
      validate-expr(expr_1)
      validate-expr(expr_2)
    Subtract (expr_1, expr_2) ->
      check("#arithmetic-operators")
      validate-expr(expr_1)
      validate-expr(expr_2)
    LogicOr (expr_1, expr_2) ->
      validate-expr(expr_1)
      validate-expr(expr_2)
    Multiply (expr_1, expr_2) ->
      check("#arithmetic-operators")
      validate-expr(expr_1)
      validate-expr(expr_2)
    Divide (expr_1, expr_2) ->
      check("#arithmetic-operators")
      validate-expr(expr_1)
      validate-expr(expr_2)
    LogicAnd (expr_1, expr_2) ->
      validate-expr(expr_1)
      validate-expr(expr_2)
    Ref(expr) ->
      check("#references")
      validate-expr(expr)
    Deref(expr) ->
      check("#references")
      validate-expr(expr)
    Application (expr, exprList) ->
      validate-expr(expr)
      if exprList.length == 0 then check("#nullary-functions") else ()
      if exprList.length > 1  then check("#multiparameter-functions") else ()
      exprList.map(fn (e) validate-expr(pretend-decreasing(e)))
      ()
    TypeApplication(expr, type_List) ->
      check("#universal-types")
      validate-expr(expr)
      type_List.map(validate-type)
      ()
    DotRecord(expr) ->
      check("#records")
      validate-expr(expr)
    DotTuple(expr, int) ->
      if int <= 2
      then check-any(["#pairs", "#tuples"])
      else check("#tuples")
      validate-expr(expr)
    Tuple(exprList) ->
      if exprList.length == 2
      then check-any(["#pairs", "#tuples"])
      else check("#tuples")
      exprList.map(fn (e) validate-expr(pretend-decreasing(e)))
      ()
    Record(bindingList) ->
      check("#records")
      bindingList.map(fn (ABinding(_, expr_1)) validate-expr(pretend-decreasing(expr_1)))
      ()
    ConsList(expr_1, expr_2) ->
      check("#lists")
      validate-expr(expr_1)
      validate-expr(expr_2)
    Head (expr) ->
      check("#lists")
      validate-expr(expr)
    IsEmpty (expr) ->
      check("#lists")
      validate-expr(expr)
    Tail(expr) ->
      check("#lists")
      validate-expr(expr)
    Panic ->
      check("#panic")
    Throw(expr) ->
      check("#exceptions")
      validate-expr(expr)
    TryCatch(expr_1, pattern, expr_2) ->
      check("#exceptions")
      validate-expr(expr_1)
      validate-pattern(pattern)
      validate-expr(expr_2)
    TryWith(expr_1, expr_2) ->
      check("#exceptions")
      validate-expr(expr_1)
      validate-expr(expr_2)
    TryCastAs (_expr_1, _type_, _pattern, _expr_2, _expr_3) ->
      fail("Undocumented: TryCastAs")
    Inl(expr) ->
      check("#sum-types")
      validate-expr(expr)
    Inr(expr) ->
      check("#sum-types")
      validate-expr(expr)
    Succ(expr) ->
      validate-expr(expr)
    LogicNot(expr) ->
      validate-expr(expr)
    Pred(expr) ->
      validate-expr(expr)
    IsZero(expr) ->
      validate-expr(expr)
    Fix(expr) ->
      check("#fixpoint-combinator")
      validate-expr(expr)
    NatRec(expr_1, expr_2, expr_3) ->
      validate-expr(expr_1)
      validate-expr(expr_2)
      validate-expr(expr_3)
    Fold(_type_, _expr) ->
      fail("Undocumented: Fold")
    Unfold(_type_, _expr) ->
      fail("Undocumented: Unfold")
    ConstTrue -> ()
    ConstFalse -> ()
    ConstUnit ->
      check("#unit-type")
    ConstInt(int) ->
      if int == 0 then () else check("#natural-literals")
    ConstMemory ->
      check("#references")
    Var -> ()

fun validate-pattern(pattern : pattern) : <validate> ()
  match pattern
    PatternCastAs(_pattern, _type_) ->
      fail("Undocumented: Type cast")
    PatternAsc(pattern, type_) ->
      check("#type-ascriptions")
      validate-pattern(pattern)
      validate-type(type_)
    PatternVariant (_, patternData) ->
      check("#structural-patterns")
      check("#variants")
      match patternData
        NoPatternData -> ()
        SomePatternData(p) -> validate-pattern(p)
    PatternInl(pattern) ->
      check("#structural-patterns")
      check("#sum-types")
      validate-pattern(pattern)
    PatternInr(pattern) ->
      check("#structural-patterns")
      check("#sum-types")
      validate-pattern(pattern)
    PatternTuple(patternList) ->
      check("#structural-patterns")
      if patternList.length == 2
      then check-any(["#pairs", "#tuples"])
      else check("#tuples")
      patternList.map(fn (p) validate-pattern(pretend-decreasing(p)))
      ()
    PatternRecord (labelledPatternList) ->
      check("#structural-patterns")
      check("#records")
      labelledPatternList.map(fn (ALabelledPattern(_, p)) validate-pattern(pretend-decreasing(p)))
      ()
    PatternList(patternList) ->
      check("#structural-patterns")
      check("#lists")
      patternList.map(fn (p) validate-pattern(pretend-decreasing(p)))
      ()
    PatternCons(pattern_1, pattern_2) ->
      check("#structural-patterns")
      check("#lists")
      validate-pattern(pattern_1)
      validate-pattern(pattern_2)
    PatternFalse -> ()
    PatternTrue -> ()
    PatternUnit -> check("#unit-type")
    PatternInt(int : int) ->
      if int == 0 then () else check("#natural-literals")
    PatternSucc(pattern : pattern) ->
      check("#structural-patterns")
      validate-pattern(pattern)
    PatternVar -> ()
