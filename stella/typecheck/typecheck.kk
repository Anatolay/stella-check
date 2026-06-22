module stella/typecheck/typecheck

import std/core/undiv

import stella/syntax/ast
import stella/prelude

import stella/typecheck/environment
import stella/typecheck/modal-effects
import stella/typecheck/modalities
import stella/typecheck/mode

import utils/dict
import utils/multiset

/* UTILITY FUNCTIONS */

pub fun collect-param-decls(param-decls : list<paramDecl>) : list<(stellaIdent, type_)>
  param-decls.map(fn (AParamDecl(name, typ)) -> (name, typ))

fun environment/add-param-decls(environment : environment, param-decls : list<paramDecl>) : environment
  environment.add-many-vars(param-decls.map(fn (AParamDecl(ident, type_)) (ident, type_)))

pub fun list/all(bs : list<bool>) : bool
  bs.foldl(True,(&&))

pub fun expr/show-name(e : expr) : string
  match e
    Sequence -> "Sequence"
    Assign -> "Assign"
    If -> "If"
    Let -> "Let"
    LetRec -> "LetRec"
    ModLet -> "ModLet"
    TypeAbstraction -> "TypeAbstraction"
    LessThan -> "LessThan"
    LessThanOrEqual -> "LessThanOrEqual"
    GreaterThan -> "GreaterThan"
    GreaterThanOrEqual -> "GreaterThanOrEqual"
    Equal -> "Equal"
    NotEqual -> "NotEqual"
    TypeAsc -> "TypeAsc"
    TypeCast -> "TypeCast"
    Abstraction -> "Abstraction"
    ModBox -> "ModBox"
    Variant -> "Variant"
    Match -> "Match"
    List -> "List"
    Add -> "Add"
    Subtract -> "Subtract"
    LogicOr -> "LogicOr"
    Multiply -> "Multiply"
    Divide -> "Divide"
    LogicAnd -> "LogicAnd"
    Ref -> "Ref"
    Deref -> "Deref"
    Application -> "Application"
    TypeApplication -> "TypeApplication"
    DotRecord -> "DotRecord"
    DotTuple -> "DotTuple"
    Tuple -> "Tuple"
    Record -> "Record"
    ConsList -> "ConsList"
    Head -> "Head"
    IsEmpty -> "IsEmpty"
    Tail -> "Tail"
    Panic -> "Panic"
    Throw -> "Throw"
    TryCatch -> "TryCatch"
    TryWith -> "TryWith"
    TryCastAs -> "TryCastAs"
    Inl -> "Inl"
    Inr -> "Inr"
    Succ -> "Succ"
    LogicNot -> "LogicNot"
    Pred -> "Pred"
    IsZero -> "IsZero"
    ModDo -> "ModDo"
    ModHandle -> "ModHandle"
    Fix -> "Fix"
    NatRec -> "NatRec"
    Fold -> "Fold"
    Unfold -> "Unfold"
    ConstTrue -> "ConstTrue"
    ConstFalse -> "ConstFalse"
    ConstUnit -> "ConstUnit"
    ConstInt -> "ConstInt"
    ConstMemory -> "ConstMemory"
    Var -> "Var"

/* CONTEXT AND ESSENTIALS */

alias typechecker = <prelude/error<stella-error>, log<string>>

pub type stella-error
  NoMain
  UnsupportedNode(str : string)
  FunAlreadyDefined(fname : string)
  NoReturn // TODO: support declarations without return type
  UnhandledExpression(s : string)
  UndefinedVariable(vname : string)
  LockedVariable(vname : string)
  UnexpectedTypeForExpressions
  UnexpectedLambda
  UnexpectedNumberOfParametersInLambda
  UnexpectedTypeForParameter
  NotAFunction
  IncorrectNumberOfArguments
  UnexpectedTuple
  NotATuple
  UnexpectedTupleLength
  TupleIndexOutOfBounds
  UnexpectedList
  AmbiguousListType
  // Modal effects
  UnknownEffect(ident : stellaIdent)
  NonFunctionEffect(ident : stellaIdent, type_ : type_)
  NoReturnInHandler
  SeveralReturnsInHandler
  MultipleHandlersForOneLabel
  ModalityMismatch(expected-modality : modality, actual-modality : modality)
  ExpectedNonModalType(expected-type : type_)
  NonValueBox



/* TYPECHECKING */

pub fun collect-decls(declarations : list<decl>) : typechecker environment
  fun handle-decl(environment : environment, decl : decl) : typechecker environment
    match decl
      DeclFun(_, _, _, NoReturnType) ->
        // TODO: Properly support omitted return types
        prelude/error(NoReturn)
      DeclFun(_, ident, params, SomeReturnType(return-type)) ->
        if environment.has-ident(ident) then error(FunAlreadyDefined(ident.string))
        val input-types = params.map(fn (AParamDecl(_, t)) t)
        val fun-type = TypeFun(input-types, return-type)
        environment.add-var(ident, fun-type)
      DeclFunMod(_, raw-modalities, ident, params, SomeReturnType(return-type)) ->
        if environment.has-ident(ident) then error(FunAlreadyDefined(ident.string))
        val input-types = params.map(fn (AParamDecl(_, t)) t)
        val fun-type = TypeFun(input-types, return-type)
        val converted = raw-modalities.map(modalities/singleton)
        val modalities = match converted
          Nil -> modalities/identity
          Cons(head, tail) -> tail.foldl(head, fn (ms, m) ms.compose(m))
        environment.add(ident, modalities, fun-type)
      // TODO: Handle other declarations
      _ -> environment
  declarations.foldl(empty, handle-decl)

pub fun unit(_ : a) : ()
  ()

pub fun typecheck(AProgram(LanguageCore, _extensions, declarations) : program) : typechecker ()
  val environment = collect-decls(declarations)
  if not(environment.has-ident(StellaIdent("main"))) then error(NoMain)
  declarations.foreach(fn (d) unit(typecheck-decl(environment, d, min)))

pub fun typecheck-decl(environment : environment, declaration : decl, mode : mode) : typechecker maybe<(stellaIdent, type_)>
  pretend-no-div(fn () -> typecheck-decl-div(environment, declaration, mode))

pub fun typecheck-decl-div(environment : environment, declaration : decl, mode : mode) : <typechecker, div> maybe<(stellaIdent, type_)>
  // TODO: support other declarations
  match declaration
    DeclFunMod(_, modalities, fname, param-decls, SomeReturnType(return-type), _throw, decls, expression) ->
      log("")
      log("Checking function " ++ fname.show)
      // TODO: throw errors on repeated/conflicting modalities
      fun apply-modality(effects : dict<stellaIdent, type_>, modality : modality) : dict<stellaIdent, type_>
        match modality
          ModalityAbs(efs) -> from-list(efs.map(fn (ALabelledEffect(ident, type_)) (ident, type_)))
          ModalityRel(masks, additions) ->
            val new-effects = masks.foldl(effects, fn(es, ident) es.remove(ident))
            additions.foldl(new-effects, fn(es, (ALabelledEffect(i, t))) es.insert(i, t))
          _ -> effects
      val effects = mode.effects()
      // TODO:
      val new-effects = effects // modalities.foldl(effects, apply-modality)
      val new-mode = mode.update-effects(new-effects)
      val new-environment = environment.add-param-decls(param-decls)
      val new-new-environment = typecheck-decls-div(new-environment, decls, new-mode)
      typecheck-expr(new-new-environment, expression, return-type, new-mode)
      Just((fname, TypeFun(param-decls.map(fn (AParamDecl(_,t)) t), return-type)))
    // Treat function declaration as a case of modal declaration without modalities
    DeclFun(annotations, fname, param-decls, SomeReturnType(return-type), throw, decls, expression) ->
      typecheck-decl-div(
        environment,
        DeclFunMod(annotations, [], fname, param-decls, SomeReturnType(return-type), throw, decls, expression),
        mode
      )
    _ -> Nothing

pub fun typecheck-decls-div(environment : environment, declarations : list<decl>, mode : mode) : <typechecker, div> environment
  match declarations
    Cons(d, ds) ->
      val mb-ident = typecheck-decl-div(environment, d, mode)
      val new-environment = match mb-ident
        Nothing -> environment
        Just((ident,type_)) -> environment.add-var(ident, type_)
      typecheck-decls-div(new-environment, ds, mode)
    Nil -> environment

fun typecheck-expr(environment : environment, expression : expr, expected-type : type_, mode : mode) : typechecker type_
  pretend-no-div(fn () -> typecheck-expr-div(environment, expression, Expect(expected-type), mode))

type expectation
  Infer
  Expect(type_ : type_)

fun typecheck-expr-div(environment : environment, expression : expr, expectation : expectation, mode : mode) : <typechecker, div> type_
  match (expression, expectation)
    // FUNCTIONS AND VARIABLES
    // TODO: do not ignore locks
    (Var(ident), Infer) -> match environment.lookup(ident)
      NotFound ->
        log("Why?")
        // TODO: rework errors for locked variables
        if environment.has-ident(ident) then error(LockedVariable(ident.string)) else error(UndefinedVariable(ident.string))
      Found(locks, _, type_) ->
        // log("FOUND VAR " ++ ident.show)
        // log("With locks " ++ locks.show)
        // match across(type_, locks, apply-modality(locks, mode.effects))
        match across(type_, locks, mode.effects)
          Nothing -> error(LockedVariable(ident.string)) // TODO: rework
          Just(ty) -> ty
      // Found(locks, modalities, type_) ->
      //   log("Found variable " ++ ident.show)
      //   if can-transform-type(modalities.effects, type_, locks, mode.effects)
      //   then
      //     log(type_.show)
      //     log(across(type_, locks, mode.effects).show)
      //     type_
      //   else error(LockedVariable(ident.string)) // TODO: maybe another error?

    (Abstraction(param-decls, body), Infer) ->
      val extended-environment = environment.add-param-decls(param-decls)
      val return-type = typecheck-expr-div(extended-environment, body, Infer, mode)
      TypeFun(
        param-decls.map(fn (AParamDecl(_, t)) t),
        return-type
      )
    (Abstraction(param-decls, body), Expect(expected-type)) -> match expected-type
      TypeFun(expected-arg-types, expected-return-type) ->
        if expected-arg-types.length != param-decls.length then error(UnexpectedNumberOfParametersInLambda)
        val are-equal = expected-arg-types.zipwith(param-decls, fn (e-type, AParamDecl(_, a-type)) -> e-type == a-type)
        if not(all(are-equal)) then error(UnexpectedTypeForParameter)
        typecheck-expr-div(environment.add-param-decls(param-decls), body, Expect(expected-return-type), mode)
      _ -> error(UnexpectedLambda)
    (Application(callee, args), Infer) ->
      log("APPLICATION")
      val callee-type = typecheck-expr-div(environment, callee, Infer, mode)
      val (mu, fun-type) = callee-type.unpeel-effect-modalities
      // log(show(callee-type))
      // log(show(mu))
      // log(show(fun-type))
      // log(mode.effects.to-list.show)
      if can-transform(mu, identity, mode.effects)
      then
        match fun-type
          TypeFun(params, return-type) ->
            if params.length != args.length then error(IncorrectNumberOfArguments)
            log("CHECKING ARGUMENTS")
            log("Function type: " ++ fun-type.show)
            // log(params.show)
            args.zip(params).foreach(fn ((arg, param)) unit(typecheck-expr-div(environment, arg, Expect(param), mode)))
            return-type
          _ -> error(NotAFunction)
      else
        error(ModalityMismatch(identity.to-raw, mu.to-raw))

    // BOOLEANS
    (ConstTrue, Infer) ->
      TypeBool
    (ConstFalse, Infer) ->
      TypeBool
    (If(b, t, f), _) ->
      typecheck-expr-div(environment, b, Expect(TypeBool), mode)
      val inferred-type = typecheck-expr-div(environment, t, expectation, mode)
      typecheck-expr-div(environment, f, Expect(inferred-type), mode)
    
    // NATURALS
    (ConstInt, Infer) ->
      TypeNat
    (Succ(expr), Infer) ->
      typecheck-expr-div(environment, expr, Expect(TypeNat), mode)
      TypeNat
    (IsZero(expr), Infer) ->
      typecheck-expr-div(environment, expr, Expect(TypeNat), mode)
      TypeBool
    (NatRec(n, z, s), _) ->
      typecheck-expr-div(environment, n, Expect(TypeNat), mode)
      val expected-type = typecheck-expr-div(environment, z, expectation, mode)
      val operator-type = TypeFun([TypeNat], TypeFun([expected-type], expected-type))
      typecheck-expr-div(environment, s, Expect(operator-type), mode)
    // (Add)

    // UNIT
    (ConstUnit, Infer) ->
      TypeUnit

    // TUPLES
    (Tuple(elems), Infer) ->
      val elem-types = elems.map(fn (e) typecheck-expr-div(environment, e, Infer, mode))
      TypeTuple(elem-types)
    (Tuple(elems), Expect(expected-type)) -> match expected-type
      TypeTuple(expected-types) ->
        if elems.length != expected-types.length then error(UnexpectedTupleLength)
        elems.zip(expected-types).foreach(fn ((el, et)) -> unit(typecheck-expr-div(environment, el, Expect(et), mode)))
        expected-type
      _ -> error(UnexpectedTuple)
    (DotTuple(tuple, ind), Infer) ->
      match typecheck-expr-div(environment, tuple, Infer, mode)
        TypeTuple(elem-types) ->
          // Tuple indices start with 1 in Stella
          match elem-types[ind - 1]
            Nothing -> error(TupleIndexOutOfBounds)
            Just(elem-type) -> elem-type
        _ -> error(NotATuple)

    // SUM TYPES
    (Inl(expr), Expect(TypeSum(expected-type, _))) ->
      typecheck-expr-div(environment, expr, Expect(expected-type), mode)
    (Inr(expr), Expect(TypeSum(_, expected-type))) ->
      typecheck-expr-div(environment, expr, Expect(expected-type), mode)
    (Match(expr, case-list), Expect(expected-type)) ->
      val expr-type = typecheck-expr-div(environment, expr, Infer, mode)
      log(expr-type.show)
      fun handle-match-case(AMatchCase(pat, body) : matchCase) : _ ()
        val new-vars = typecheck-pattern-div(environment, pat, expr-type, mode)
        val new-environment = environment.add-many-vars(new-vars)
        val ex-type = typecheck-expr-div(new-environment, body, Expect(expected-type), mode)
        ()
      case-list.map(handle-match-case)
      expected-type


    // LISTS
    // List(exprs) ->
    //   match expected-type
    //     TypeList(elem-type) ->
    //       exprs.foreach(fn (e) typecheck-expr-div(environment, e, elem-type, mode))
    //     _ -> error(UnexpectedList)
    // ConsList(expr-head, expr-tail) -> match expected-type
    //   TypeList(elem-type) ->
    //     typecheck-expr-div(environment, expr-head, elem-type, mode)
    //     typecheck-expr-div(environment, expr-tail, TypeList(elem-type), mode)
    //   _ -> error(UnexpectedList)

    // // LET-BINDING
    // Let(patterns, expr) ->
    //   // TODO: support more patterns than just variables
    //   val extra-environment = infer-pattern-bindings-div(environment, patterns)
    //   typecheck-expr-div(extra-environment.append(environment), expr, expected-type)

    // MODAL
    (ModDo(eff-ident, expr), Infer)->
      match mode.effects.lookup(eff-ident)
        Just(Cons(TypeFun([arg-type], return-type), _)) ->
          typecheck-expr-div(environment, expr, Expect(arg-type), mode)
          return-type
        Just(Cons(eff-type, _)) -> error(NonFunctionEffect(eff-ident, eff-type))
        _ -> error(UnknownEffect(eff-ident))

    // TODO
    (ModHandle(expr, handlers), Infer) -> error(UnhandledExpression("inference of handlers"))
    (ModHandle(expr, handlers), Expect(expected-type)) ->
      log("HANDLERS")
      typecheck-handle-expr-div(environment, expr, handlers, expected-type, mode)
      expected-type

    // DEFAULT. For all expressions that can be directly inferred and then checked
    (_, Expect(expected-type)) ->
      val inferred-type = typecheck-expr-div(environment, expression, Infer, mode)
      val (mu, a) = unpeel-effect-modalities(inferred-type)
      val (nu, b) = unpeel-effect-modalities(expected-type)
      if a != b then error(UnexpectedTypeForExpressions)
      // log(show(a))
      // log(show(mu))
      // log(show(nu))
      if can-transform-type(mu, a, nu, mode.effects) then expected-type else error(ModalityMismatch(mu.to-raw, nu.to-raw))
    _ -> error(UnhandledExpression(expression.show-name))


/*
Beast of a function

1. Collecect handled effects
2. Use (1) to typecheck (infer type of) expression wrapped in handle
3. Use (1) and (2) to typecheck the return handler
(also check that there is exactly one return handler)
4. Typecheck each handler
*/
fun typecheck-handle-expr-div(environment : environment, expr : expr, handlers : list<handler_>, expected-type : type_, mode : mode) : <div, typechecker> ()
  // Separate return handlers from effect handlers as they are typechecked differently 
  fun split-handlers(h)
    match h
      HandlerReturn(p, e) -> Left((p, e))
      HandlerLabel(le, p, i, e) -> Right((le, p, i, e))
  val (returns, label-handlers) = handlers.span-map(split-handlers)
  // (1)
  fun collect-labels(labels, acc) : <typechecker> effect-extension
    match labels
      [] -> acc
      Cons(ALabelledEffect(ident, effect-type), labels-tail) -> match acc.dict/lookup(ident)
        Just -> error(MultipleHandlersForOneLabel)
        Nothing -> match effect-type
          TypeFun -> collect-labels(labels-tail, acc.insert(ident, [effect-type]))
          _ -> error(NonFunctionEffect(ident, effect-type))
  val effect-extension // D
    = collect-labels(label-handlers.map(fst), empty)
  val effect-extension-modality : effect-modality // <|D>
    = Relative(multiset/empty, effect-extension)
  // (2)
  // log("COLLECTED HANDLERS:")
  // log(effect-extension-modality.show)
  val expr-type = typecheck-expr-div(
    environment.add-lock(effect-extension-modality.to-raw),
    expr,
    Infer,
    mode.update-effects(effect-extension.extend(mode.effects))
  )
  // (3)
  match returns
    [] -> error(NoReturnInHandler)
    [(PatternVar(ident), return-expr)] -> typecheck-expr-div(
      environment.add-var(ident, TypeMod(effect-extension-modality.to-raw, expr-type)),
      return-expr,
      Expect(expected-type),
      mode
    )
    [(_, _)] -> error(UnsupportedNode("non-var pattern in return handler"))
    _ -> error(SeveralReturnsInHandler)
  // (4)
  /*
  // One day I will issue it.......
  fun typecheck-handler(ALabelledEffect(ident, effect-type) : labelledEffect, pattern : pattern, continuation-ident : stellaIdent, handler-expr : expr) : _ ()
    val (arg-type, return-type) = match effect-type
      TypeFun([a], b) -> (a, b)
      _ -> error(NonFunctionEffect(ident, effect-type))
    // TODO: support more patterns
    val pattern-ident = match pattern
      PatternVar(i) -> i
      _ -> error(UnsupportedNode("non-var pattern"))
    typecheck-expr-div(
      environment.add-var(pattern-ident, arg-type).add-var(continuation-ident, TypeFun([return-type], expected-type)),
      handler-expr,
      expected-type,
      mode
    )

  label-handlers.foreach(fn ((le, p, i, e)) -> typecheck-handler(le, p, i, e))
  // ^
  // here it generates incorrect C code
  */
  fun go(lst)
    match lst
      [] -> ()
      Cons((ALabelledEffect(ident, effect-type) : labelledEffect, pattern : pattern, continuation-ident : stellaIdent, handler-expr : expr), tail) ->
        val (arg-type, return-type) = match effect-type
          TypeFun([a], b) -> (a, b)
          _ -> error(NonFunctionEffect(ident, effect-type))
        // TODO: support more patterns
        val pattern-ident = match pattern
          PatternVar(i) -> i
          _ -> error(UnsupportedNode("non-var pattern"))
        typecheck-expr-div(
          environment.add-var(pattern-ident, arg-type).add-var(continuation-ident, TypeFun([return-type], expected-type)),
          handler-expr,
          Expect(expected-type),
          mode
        )
        go(tail)
  go(label-handlers)


// TODO: pattern bindings appear in let expresisons. Probably there could be
// issues related to modalities/effects/anything appearing in the process,
// right now this might be incorrect.
//
// Moreover, at the moment it only supports variable patterns.
pub fun infer-pattern-bindings-div(environment : environment, patterns : list<patternBinding>, mode : mode) : <typechecker, div> list<(stellaIdent, type_)>
  fun get-ident(APatternBinding(pat))
    match pat
      PatternVar(ident) -> ident
      _ ->
        // TODO: support more patterns than just variables
        error(UnhandledExpression("non variable pattern binding"))
        StellaIdent("")
  val idents = patterns.map(get-ident)
  val exprs = patterns.map(fn (APatternBinding(_, e)) e)
  val types = exprs.map(fn (e) typecheck-expr-div(environment, e, Infer, mode))
  // If there are several variables of the same name,
  // the latter should (probably) take the precedence,
  // hence we reverse the list
  idents.zip(types).reverse

pub fun typecheck-pattern-div(environment : environment, pattern : pattern, expected-type : type_, mode : mode) : <typechecker, div> list<(stellaIdent, type_)>
  val (_, type_) = expected-type.unpeel-effect-modalities()
  match (pattern, type_)
    (PatternVar(ident), _) -> [(ident, expected-type)]
    (PatternInl(pat), TypeSum(type_, _)) ->
      log("Here")
      typecheck-pattern-div(environment, pat, type_, mode)
    (PatternInr(pat), TypeSum(_, type_)) -> typecheck-pattern-div(environment, pat, type_, mode)
    (PatternTuple(patterns), TypeTuple(types)) ->
      log("Why")
      if patterns.length != types.length then error(UnexpectedTupleLength)
      val vars = patterns.zip(types).map(fn ((p, t)) typecheck-pattern-div(environment, p, t, mode)).concat
      vars
    _ -> error(UnhandledExpression("unhandled pattern"))

/* MAIN */

pub fun stella-error-to-string(err : stella-error) : string
  match err
    NoMain -> "FAILURE!!! Function `main` not found! ERROR_MISSING_MAIN"
    UnsupportedNode(str) -> "FAILURE!!! Currently we do not support " ++ str
    FunAlreadyDefined(str) -> "FAILURE!!! Multiple definitions of " ++ str
    NoReturn -> "FAILURE!!! Currently we do not support missing return types"
    UnhandledExpression(s) -> "FAILURE!!! Unhandled expression! " ++ s
    UndefinedVariable(vname) -> "FAILURE!!! ERROR_UNDEFINED_VARIABLE " ++ vname ++ "!"
    LockedVariable(vname) -> "FAILURE!!! Trying to use variable " ++ vname ++ " in a locked term!"
    UnexpectedTypeForExpressions -> "FAILURE!!! ERROR_UNEXPECTED_TYPE_FOR_EXPRESSION"
    UnexpectedLambda -> "FAILURE!!! ERROR_UNEXPECTED_LAMBDA"
    UnexpectedNumberOfParametersInLambda -> "FAILURE!!! ERROR_UNEXPECTED_NUMBER_OF_PARAMETERS_IN_LAMBDA"
    UnexpectedTypeForParameter -> "FAILURE!!! ERROR_UNEXPECTED_TYPE_FOR_PARAMETER"
    NotAFunction -> "FAILURE!!! ERROR_NOT_A_FUNCTION"
    IncorrectNumberOfArguments -> "FAILURE!!! ERROR_INCORRECT_NUMBER_OF_ARGUMENTS"
    UnexpectedTuple -> "FAILURE!!! ERROR_UNEXPECTED_TUPLE"
    NotATuple -> "FAILURE!!! ERROR_NOT_A_TUPLE"
    UnexpectedTupleLength -> "FAILURE!!! ERROR_UNEXPECTED_TUPLE_LENGTH"
    TupleIndexOutOfBounds -> "FAILURE!!! ERROR_TUPLE_INDEX_OUT_OF_BOUNDS"
    UnexpectedList -> "FAILURE!!! UNEXPECTED_LIST"
    AmbiguousListType -> "FAILURE!!! AMBIGUOUS_LIST_TYPE"
    // Modal
    UnknownEffect(ident) -> "FAILURE!!! Unknown effect " ++ ident.string ++ "! UNKNOWN_EFFECT"
    NonFunctionEffect(ident, type_) -> "FAILURE!!! Effect labels should have function types, but " ++ ident.string ++ " has type " ++ type_.show ++ ". NON_FUNCTION_EFFECT"
    NoReturnInHandler -> "FAILURE!!! Handle expressions has to have a `return` case! NO_RETURN_IN_HANDLER"
    SeveralReturnsInHandler -> "FAILURE!!! Handler expression must have exactly one `return` case! SEVERAL_RETURNS_IN_HANDLER"
    MultipleHandlersForOneLabel -> "Failure!!! MULTIPLE_HANDLERS_FOR_ONE_LABEL"
    ModalityMismatch(expected-modality, actual-modality) -> "FAILURE!!! MODALITY_MISMATCH: expected " ++ expected-modality.show ++ " but got " ++ actual-modality.show
    ExpectedNonModalType(type_) -> "FAILURE!!! EXPECTED_NON_MODAL_TYPE: expected " ++ type_.show ++ " but got expression of modal type"
    NonValueBox -> "FAILURE!!! NON_VALUE_BOX: mod [...] can only wrap values"

pub fun typecheck-modal(prog : program) : <console, div> ()
  with final ctl error(e : stella-error)
    println(stella-error-to-string(e))
  with fun log(s)
    println(s)
    ()
  typecheck(prog)
  println("SUCCESS!!!")
