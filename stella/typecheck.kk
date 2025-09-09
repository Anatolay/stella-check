module stella/typecheck

import stella/syntax/ast
import std/core/undiv


/* UTILITY FUNCTIONS */

fun stellaIdent/(==)(a : stellaIdent, b : stellaIdent) : bool
  a.string == b.string

fun type_/(==)(a : type_, b : type_) : bool
  fun eq-lst(l1 : list<type_>, l2 : list<type_>) : bool
    l1 == l2
  match (a, b)
    (TypeAuto, TypeAuto) -> True
    (TypeFun(lst_1, type_1), TypeFun(lst_2, type_2)) -> lst_1 == lst_2 && pretend-decreasing(type_1) == pretend-decreasing(type_2)
    (TypeForAll (idents_1, type_1), TypeForAll (idents_2, type_2)) -> idents_1 == idents_2 && pretend-decreasing(type_1) == pretend-decreasing(type_2)
    (TypeRec (ident_1, type_1), TypeRec (ident_2, type_2)) -> ident_1 == ident_2 && pretend-decreasing(type_1) == pretend-decreasing(type_2)
    (TypeSum (type_l1, type_l2), TypeSum (type_r1, type_r2)) -> pretend-decreasing(type_l1) == pretend-decreasing(type_l2) && pretend-decreasing(type_r1) == pretend-decreasing(type_r2)
    // Maaaaaaaan, Koka's divergence checker is going crazy on this one
    (TypeTuple(lst_1), TypeTuple(lst_2)) -> eq-lst(lst_1, lst_2)
    // TypeRecord (recordFieldTypeList : list<recordFieldType>)
    // TypeVariant (variantFieldTypeList : list<variantFieldType>)
    (TypeList(type_1), TypeList(type_2)) -> pretend-decreasing(type_1) == pretend-decreasing(type_2)
    (TypeBool, TypeBool) -> True
    (TypeNat, TypeNat) -> True
    (TypeUnit, TypeUnit) -> True
    (TypeTop, TypeTop) -> True
    (TypeBottom, TypeBottom) -> True
    (TypeRef(type_1), TypeRef(type_2)) -> pretend-decreasing(type_1) == pretend-decreasing(type_2)
    (TypeVar(ident_1), TypeVar(ident_2)) -> ident_1 == ident_2
    _ -> False

pub fun collect-param-decls(param-decls : list<paramDecl>) : list<(stellaIdent, type_)>
  param-decls.map(fn (AParamDecl(name, typ)) -> (name, typ))

pub fun list/all(bs : list<bool>) : bool
  bs.foldl(True,(&&))

/* CONTEXT AND ESSENTIALS */

pub effect error<a>
  final ctl error(a : a) : ()

pub alias functions = list<(stellaIdent, type_)>

pub fun has-key(c : functions, k : stellaIdent) : bool
  match c.lookup(fn (key) key == k)
    Nothing -> False
    Just(_) -> True

pub type stella-error
  NoMain
  UnsupportedNode(str : string)
  FunAlreadyDefined(fname : string)
  NoReturn // TODO: support declarations without return type
  UnhandledExpression
  UndefinedVariable(vname : string)
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


/* TYPECHECKING */

pub fun collect-decls(declarations : list<decl>) : error<stella-error> functions
  fun helper(decls, acc)
    match decls
      Nil -> acc.reverse
      Cons(DeclFun(_, _, _, NoReturnType)) ->
        // TODO: Properly support omitted return types
        error(NoReturn)
        []
      Cons(DeclFun(_, ident, params, SomeReturnType(return-type)), ds) ->
        if acc.has-key(ident) then error(FunAlreadyDefined(ident.string))
        val input-types = params.map(fn (AParamDecl(_, t)) t)
        val fun-type = TypeFun(input-types, return-type)
        helper(ds, Cons((ident, fun-type), acc))
      // TODO: Handle other declarations
      Cons(_, ds) -> helper(ds, acc)
  helper(declarations, [])

pub fun unit(_ : a) : ()
  ()

pub fun typecheck(AProgram(LanguageCore, _extensions, declarations) : program) : error<stella-error> ()
  val functions = collect-decls(declarations)
  if not(functions.has-key(StellaIdent("main"))) then error(NoMain)
  declarations.foreach(fn (d) unit(typecheck-decl(functions, d)))

pub fun typecheck-decl(functions : functions, declaration : decl) : error<stella-error> maybe<(stellaIdent, type_)>
  pretend-no-div(fn () -> typecheck-decl-div(functions, declaration))

pub fun typecheck-decl-div(functions : functions, declaration : decl) : <error<stella-error>, div> maybe<(stellaIdent, type_)>
  match declaration
    DeclFun(_, fname, param-decls, SomeReturnType(return-type), _throw, decls, expression) ->
      val params = collect-param-decls(param-decls)
      val new-functions = params.append(functions)
      val new-new-functions = typecheck-decls-div(new-functions, decls)
      typecheck-expr(new-new-functions, expression, return-type)
      Just((fname, TypeFun(params.map(snd), return-type)))
    _ -> Nothing

pub fun typecheck-decls-div(functions : functions, declarations : list<decl>) : <error<stella-error>, div> functions
  match declarations
    Cons(d, ds) ->
      val mb-ident = typecheck-decl-div(functions, d)
      val new-functions = match mb-ident
        Nothing -> functions
        Just(f) -> Cons(f, functions)
      typecheck-decls-div(new-functions, ds)
    Nil -> functions

fun typecheck-expr(functions : functions, expression : expr, expected-type : type_) : error<stella-error> ()
  pretend-no-div(fn () -> typecheck-expr-div(functions,expression,expected-type))

fun typecheck-expr-div(functions : functions, expression : expr, expected-type : type_) : <error<stella-error>, div> ()
  match expression
    // FUNCTIONS AND VARIABLES (lambda-calculi)
    Var(ident) -> match functions.lookup(fn (i) -> i == ident)
      Nothing -> error(UndefinedVariable(ident.string))
      Just(typ) -> if typ == expected-type then () else error(UnexpectedTypeForExpressions)
    Abstraction(param-decls, body) -> match expected-type
      TypeFun(expected-arg-types, expected-return-type) ->
        val params = collect-param-decls(param-decls)
        if expected-arg-types.length != params.length then error(UnexpectedNumberOfParametersInLambda)
        val are-equal = expected-arg-types.zipwith(params, fn (e-type, (_, a-type)) -> e-type == a-type)
        if not(all(are-equal)) then error(UnexpectedTypeForParameter)
        typecheck-expr-div(params.append(functions), body, expected-return-type)
      _ -> error(UnexpectedLambda)
    Application(callee, args) ->
      val fun-type = infer-expr-div(functions, callee)
      match fun-type
        TypeFun(params, return-type) ->
          if params.length != args.length then error(IncorrectNumberOfArguments)
          if return-type == expected-type then () else error(UnexpectedTypeForExpressions)
        _ -> error(NotAFunction)
    
    // BOOLEANS
    ConstTrue -> if expected-type == TypeBool then () else error(UnexpectedTypeForExpressions)
    ConstFalse -> if expected-type == TypeBool then () else error(UnexpectedTypeForExpressions)
    If(b, t, f) ->
      typecheck-expr-div(functions, b, TypeBool)
      typecheck-expr-div(functions, t, expected-type)
      typecheck-expr-div(functions, f, expected-type)

    // NATURALS
    ConstInt -> if expected-type == TypeNat then () else error(UnexpectedTypeForExpressions)
    Succ(expr) ->
      if expected-type != TypeNat then error(UnexpectedTypeForExpressions)
      typecheck-expr-div(functions, expr, TypeNat)
    IsZero(expr) ->
      if expected-type != TypeBool then error(UnexpectedTypeForExpressions)
      typecheck-expr-div(functions, expr, TypeNat)
    NatRec(n, z, s) ->
      typecheck-expr-div(functions, n, TypeNat)
      typecheck-expr-div(functions, z, expected-type)
      typecheck-expr-div(functions, s, TypeFun([TypeNat], TypeFun([expected-type], expected-type)))

    // UNIT
    ConstUnit -> if expected-type == TypeUnit then () else error(UnexpectedTypeForExpressions)

    // TUPLES
    Tuple(elems) -> match expected-type
      TypeTuple(expected-types) ->
        if elems.length != expected-types.length then error(UnexpectedTupleLength)
        elems.zip(expected-types).foreach(fn ((el, et)) -> typecheck-expr-div(functions, el, et))
      _ -> error(UnexpectedTuple)
    DotTuple(tuple, ind) ->
      match infer-expr-div(functions, tuple)
        TypeTuple(elem-types) ->
          match elem-types[ind]
            Nothing -> error(TupleIndexOutOfBounds)
            Just(elem-type) -> if elem-type == expected-type then () else error(UnexpectedTypeForExpressions)
        _ -> error(NotATuple)
    
    // LET-BINDING
    Let(patterns, expr) ->
      // TODO: support more patterns than just variables
      val extra-functions = infer-pattern-bindings-div(functions, patterns)
      typecheck-expr-div(extra-functions.append(functions), expr, expected-type)

    // OTHERWISE
    _ -> error(UnhandledExpression)
  ()


pub fun infer-pattern-bindings-div(functions : functions, patterns : list<patternBinding>) : <error<stella-error>, div> functions
  fun get-ident(APatternBinding(pat))
    match pat
      PatternVar(ident) -> ident
      _ ->
        // TODO: support more patterns than just variables
        error(UnhandledExpression)
        StellaIdent("")
  val idents = patterns.map(get-ident)
  val exprs = patterns.map(fn (APatternBinding(_, e)) e)
  val types = exprs.map(fn (e) infer-expr-div(functions, e))
  // If there are several variables of the same name,
  // the latter should (probably) take the precedence,
  // hence we reverse the list
  idents.zip(types).reverse


pub fun infer-expr(functions : functions, expression : expr) : error<stella-error> type_
  pretend-no-div(fn () infer-expr-div(functions, expression))

fun infer-expr-div(functions : functions, expression : expr) : <error<stella-error>, div> type_
  // Koka is not smart enough to understand that `final ctl` is not
  // meant to ever be continued. Thus, the return type of `error`
  // is not the expected `type_`
  fun err(e : stella-error) : error<stella-error> type_
    error(e)
    // TypeBottom never returns
    TypeBottom

  match expression
    // FUNCTIONS AND VARIABLES (lambda-calculi)
    Var(ident) -> match functions.lookup(fn (i) -> i == ident)
      Nothing ->
        err(UndefinedVariable(ident.string))
      Just(typ) -> typ
    Abstraction(param-decls, body) ->
      val params = collect-param-decls(param-decls)
      val return-type = infer-expr-div(params.append(functions), body)
      TypeFun(params.map(snd), return-type)
    Application(callee, args) ->
      val fun-type = infer-expr-div(functions, callee)
      match fun-type
        TypeFun(params, return-type) ->
          if params.length != args.length then error(IncorrectNumberOfArguments)
          return-type
        _ -> err(NotAFunction)

    // BOOLEANS
    ConstTrue -> TypeBool
    ConstFalse -> TypeBool
    If(b, t, f) ->
      typecheck-expr-div(functions, b, TypeBool)
      val expected-type = infer-expr-div(functions, t)
      typecheck-expr-div(functions, f, expected-type)
      expected-type

    // NATURALS
    ConstInt -> TypeNat
    Succ(expr) ->
      typecheck-expr-div(functions, expr, TypeNat)
      TypeNat
    IsZero(expr) ->
      typecheck-expr-div(functions, expr, TypeNat)
      TypeBool
    NatRec(n, z, s) ->
      typecheck-expr-div(functions, n, TypeNat)
      val expected-type = infer-expr-div(functions, z)
      typecheck-expr-div(functions, s, TypeFun([TypeNat], TypeFun([expected-type], expected-type)))
      expected-type

    // UNIT
    ConstUnit -> TypeUnit

    // TUPLES
    Tuple(elems) ->
      val elem-types = elems.map(fn (e) infer-expr-div(functions, e))
      TypeTuple(elem-types)
    DotTuple(tuple, ind) ->
      match infer-expr-div(functions, tuple)
        TypeTuple(elem-types) ->
          match elem-types[ind]
            Nothing -> err(TupleIndexOutOfBounds)
            Just(elem-type) -> elem-type
        _ -> err(NotATuple)

    // LET-BINDING
    Let(patterns, expr) ->
      // TODO: support more patterns than just variables
      val extra-functions = infer-pattern-bindings-div(functions, patterns)
      infer-expr-div(extra-functions.append(functions), expr)

    // OTHERWISE
    _ -> err(UnhandledExpression)

