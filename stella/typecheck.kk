module stella/typecheck

import stella/syntax/ast
import std/core/undiv
import stella/utils

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

pub fun stellaIdent/show(i : stellaIdent) : string
  i.string

pub fun type_/show(t : type_) : _ string
  match t
    TypeAuto -> "auto"
    TypeFun(args, return-type) -> "(" ++ args.show ++ ") -> " ++ return-type.show
    // TypeForAll (stellaIdentList : list<stellaIdent>, type_ : type_)
    // TypeRec (stellaIdent : stellaIdent, type_ : type_)
    // TypeSum (type__1 : type_, type__2 : type_)
    // TypeTuple (type_List : list<type_>)
    // TypeRecord (recordFieldTypeList : list<recordFieldType>)
    // TypeVariant (variantFieldTypeList : list<variantFieldType>)
    // TypeList (type_ : type_)
    TypeBool -> "Bool"
    TypeNat -> "Nat"
    TypeUnit -> "Unit"
    // TypeTop
    // TypeBottom
    // TypeRef (type_ : type_)
    TypeVar(ident) -> "var " ++ ident.show
    _ -> "UnexpectedType"

pub fun list/show(?a/show : (a) -> string, l : list<a>) : string
  val ss = l.map(a/show)
  "[" ++ ss.join(", ") ++ "]"

pub fun collect-param-decls(param-decls : list<paramDecl>) : list<(stellaIdent, type_)>
  param-decls.map(fn (AParamDecl(name, typ)) -> (name, typ))

pub fun varify(l : list<(stellaIdent, type_)>) : list<env-item>
  l.map(fn ((n,t)) Var(n, t, Identity))

pub fun list/all(bs : list<bool>) : bool
  bs.foldl(True,(&&))

/* CONTEXT AND ESSENTIALS */

pub effect error<a>
  final ctl error(a : a) : ()

pub effect log<a>
  fun log(a : a) : ()

alias typechecker = <error<stella-error>, log<string>>

pub type presence
  Operation(from : type_, to : type_) // A ->> B
  Absent

/*
// A naive implementation of effect contexts, masks and extensions.
// A better implementation uses maps (dictionaries) instead of lists:
// since contexts are identified up to reordering of distinct labels,
// it is better modeled as a map from each distinct label to a list
// of presences with the given label.

// l : P1, l : P2, l' : P3   ===   { l -> [P1, P2], l' -> [P3] }

// P.s. in my implementation, `dict` uses lists under the hood :|

alias effect-mask = list<string>
alias effect-extension = list<(string, presence)>
alias effect-context = list<(string, presence)>

pub fun extract(a : string, l : list<(string, b)>) : (maybe<b>, list<(string, b)>)
  match l
    [] -> (Nothing, [])
    Cons((x, b), xs) ->
      if a == x
      then (Just(b), xs)
      else
        val (res, ys) = extract(a, xs)
        (res, Cons((x, b), ys))

pub fun drop-first(a : string, l : list<string>) : maybe<list<string>>
  match l
    [] -> Nothing
    Cons(x, xs) ->
      if a == x
      then Just(xs)
      else match drop-first(a, xs)
        Nothing -> Nothing
        Just(ys) -> Just(Cons(x, ys))

pub fun extend(c1 : effect-extension, c2 : effect-context) : effect-context
  c1.append(c2)
pub fun remove(c : effect-context, l : effect-mask) : effect-context
  match c
    [] -> []
    Cons((label, p), rest) ->
      match drop-first(label, l)
        Nothing -> Cons((label, p), remove(rest, l))
        Just(l') -> remove(rest, l')
pub fun difference(l : effect-mask, d : effect-extension) : (effect-mask, effect-extension)
  match d
    [] -> (l, [])
    Cons((label, p), rest) ->
      match drop-first(label, l)
        Nothing ->
          val (l', d') = difference(l, rest)
          (l', Cons((label, p), d'))
        Just(l') -> difference(l', rest)
*/

/*
Since contexts are identified up to reordering of distinct labels,
it is better modeled as a map from each distinct label to a list
of presences with the given label.
*/
alias effect-mask = multiset<string>
alias effect-extension = dict<string, list<presence>>
alias effect-context = dict<string, list<presence>>

fun remove-first-label(ec : effect-extension, label : string) : effect-extension
  match ec.lookup(label)
    Nothing -> ec
    Just([]) -> ec.remove(label)
    Just(Cons(_, [])) -> ec.remove(label)
    Just(Cons(_, rest)) -> ec.insert(label, rest)

pub fun extend(c1 : effect-extension, c2 : effect-context) : effect-context
  c1.merge(c2)
pub fun remove(c : effect-context, l : effect-mask) : effect-context
  val lbls = c.keys()
  fun diff(labels : list<string>, effect-context : effect-context, effect-mask : effect-mask) : effect-context
    match labels
      [] -> effect-context
      Cons(label, rest) ->
        match effect-mask.lookup(label)
          Nothing -> diff(rest, effect-context, effect-mask)
          Just -> diff(rest, effect-context.remove-first-label(label), effect-mask.remove-one(label))
  diff(lbls, c, l)
pub fun difference(l : effect-mask, d : effect-extension) : (effect-mask, effect-extension)
  val lbls = d.keys()
  fun diff(labels : list<string>, effect-mask : effect-mask, effect-extension : effect-extension) : (effect-mask, effect-extension)
    match labels
      [] -> (effect-mask, effect-extension)
      Cons(label, rest) ->
        match effect-mask.lookup(label)
          Nothing -> diff(rest, effect-mask, effect-extension)
          Just -> diff(rest, effect-mask.remove-one(label), effect-extension.remove-first-label(label))
  diff(lbls, l, d)

pub type modality
  Identity
  Absolute(ec : effect-context)
  Relative(em : effect-mask, ee : effect-extension)

pub fun apply-modality(m : modality, ec : effect-context) : effect-context
  match m
    Identity -> ec
    Absolute(c) -> c // [E](F)  =  E
    Relative(l, d) -> extend(d, remove(ec, l)) // <L|D>(F)  =  D + (F - L)

pub fun compose-modalities(m1 : modality, m2 : modality) : modality
  match (m1, m2)
    (_, Absolute(e)) -> Absolute(e)
    (Absolute(e), Relative(l, d)) -> Absolute(extend(d, remove(e, l)))
    (Relative(l1, d1), Relative(l2, d2)) ->
      val (l, d) = difference(l2, d1)
      Relative(l1.merge(l), d2.merge(d))
    (m, Identity) -> m
    (Identity, m) -> m
    _ -> m2 // Not needed, but for some reason Koka fails to understand that all paths are covered

pub type env-item
  Var (name : stellaIdent, type_ : type_, mod : modality)
  Lock (mod : mod)

pub alias environment = list<env-item>

pub fun has-key(c : environment, k : stellaIdent) : bool
  match c
    Nil -> False
    Cons(Var(name), rest) -> if name == k then True else rest.has-key(k)
    Cons(_, rest) -> rest.has-key(k)

pub fun get-item(c : environment, k : stellaIdent) : maybe<type_>
  c.get-item-with([], k)

pub fun get-item-with(c : environment, mods : list<mod>, k : stellaIdent) : maybe<type_>
  match c
    Nil -> Nothing
    Cons(Lock(ModLock), _) -> Nothing
    Cons(Var(name, typ, modality), rest) -> if name == k && modality.unlocks(mods) then Just(typ) else rest.get-item-with(mods, k)

pub fun unlocks(m : modality, locks : list<mod>) : bool
  // TODO: add more modes and modalities
  True

pub type stella-error
  NoMain
  UnsupportedNode(str : string)
  FunAlreadyDefined(fname : string)
  NoReturn // TODO: support declarations without return type
  UnhandledExpression
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


/* TYPECHECKING */

pub fun collect-decls(declarations : list<decl>) : typechecker environment
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
        helper(ds, Cons(Var(ident, fun-type, Identity), acc))
      // TODO: Handle other declarations
      Cons(_, ds) -> helper(ds, acc)
  helper(declarations, [])

pub fun unit(_ : a) : ()
  ()

pub fun typecheck(AProgram(LanguageCore, _extensions, declarations) : program) : typechecker ()
  val environment = collect-decls(declarations)
  if not(environment.has-key(StellaIdent("main"))) then error(NoMain)
  declarations.foreach(fn (d) unit(typecheck-decl(environment, d)))

pub fun typecheck-decl(environment : environment, declaration : decl) : typechecker maybe<(stellaIdent, type_)>
  pretend-no-div(fn () -> typecheck-decl-div(environment, declaration))

pub fun typecheck-decl-div(environment : environment, declaration : decl) : <typechecker, div> maybe<(stellaIdent, type_)>
  match declaration
    DeclFun(_, fname, param-decls, SomeReturnType(return-type), _throw, decls, expression) ->
      val params = collect-param-decls(param-decls)
      val new-environment = params.varify.append(environment)
      val new-new-environment = typecheck-decls-div(new-environment, decls)
      typecheck-expr(new-new-environment, expression, return-type)
      Just((fname, TypeFun(params.map(snd), return-type)))
    _ -> Nothing

pub fun typecheck-decls-div(environment : environment, declarations : list<decl>) : <typechecker, div> environment
  match declarations
    Cons(d, ds) ->
      val mb-ident = typecheck-decl-div(environment, d)
      val new-environment = match mb-ident
        Nothing -> environment
        Just((n,t)) -> Cons(Var(n,t,Identity), environment)
      typecheck-decls-div(new-environment, ds)
    Nil -> environment

fun typecheck-expr(environment : environment, expression : expr, expected-type : type_) : typechecker ()
  pretend-no-div(fn () -> typecheck-expr-div(environment,expression,expected-type))

fun typecheck-expr-div(environment : environment, expression : expr, expected-type : type_) : <typechecker, div> ()
  match expression
    // FUNCTIONS AND VARIABLES (lambda-calculi)
    // TODO: vars
    Var(ident) -> match environment.get-item(ident)
      Nothing ->
        log("Why?")
        if environment.has-key(ident) then error(LockedVariable(ident.string)) else error(UndefinedVariable(ident.string))
      Just(typ) ->
        log("Why?")
        if typ == expected-type then () else error(UnexpectedTypeForExpressions)
    Abstraction(param-decls, body) -> match expected-type
      TypeFun(expected-arg-types, expected-return-type) ->
        val params = collect-param-decls(param-decls)
        if expected-arg-types.length != params.length then error(UnexpectedNumberOfParametersInLambda)
        val are-equal = expected-arg-types.zipwith(params, fn (e-type, (_, a-type)) -> e-type == a-type)
        if not(all(are-equal)) then error(UnexpectedTypeForParameter)
        typecheck-expr-div(params.varify.append(environment), body, expected-return-type)
      _ -> error(UnexpectedLambda)
    Application(callee, args) ->
      val fun-type = infer-expr-div(environment, callee)
      match fun-type
        TypeFun(params, return-type) ->
          if params.length != args.length then error(IncorrectNumberOfArguments)
          if return-type == expected-type then () else error(UnexpectedTypeForExpressions)
        _ -> error(NotAFunction)

    // BOOLEANS
    ConstTrue ->
      log("Why?")
      if expected-type == TypeBool then () else error(UnexpectedTypeForExpressions)
    ConstFalse ->
      log("Why?")
      if expected-type == TypeBool then () else error(UnexpectedTypeForExpressions)
    If(b, t, f) ->
      typecheck-expr-div(environment, b, TypeBool)
      typecheck-expr-div(environment, t, expected-type)
      typecheck-expr-div(environment, f, expected-type)

    // NATURALS
    ConstInt ->
      log("Why?")
      if expected-type == TypeNat then () else error(UnexpectedTypeForExpressions)
    Succ(expr) ->
      if expected-type != TypeNat then error(UnexpectedTypeForExpressions)
      typecheck-expr-div(environment, expr, TypeNat)
    IsZero(expr) ->
      if expected-type != TypeBool then error(UnexpectedTypeForExpressions)
      typecheck-expr-div(environment, expr, TypeNat)
    NatRec(n, z, s) ->
      typecheck-expr-div(environment, n, TypeNat)
      typecheck-expr-div(environment, z, expected-type)
      val operator-type = TypeFun([TypeNat], TypeFun([expected-type], expected-type))
      typecheck-expr-div(environment, s, operator-type)

    // UNIT
    ConstUnit -> if expected-type == TypeUnit then () else error(UnexpectedTypeForExpressions)

    // TUPLES
    Tuple(elems) -> match expected-type
      TypeTuple(expected-types) ->
        if elems.length != expected-types.length then error(UnexpectedTupleLength)
        elems.zip(expected-types).foreach(fn ((el, et)) -> typecheck-expr-div(environment, el, et))
      _ -> error(UnexpectedTuple)
    DotTuple(tuple, ind) ->
      match infer-expr-div(environment, tuple)
        TypeTuple(elem-types) ->
          match elem-types[ind]
            Nothing -> error(TupleIndexOutOfBounds)
            Just(elem-type) -> if elem-type == expected-type then () else error(UnexpectedTypeForExpressions)
        _ -> error(NotATuple)
    
    // LET-BINDING
    Let(patterns, expr) ->
      // TODO: support more patterns than just variables
      val extra-environment = infer-pattern-bindings-div(environment, patterns)
      typecheck-expr-div(extra-environment.append(environment), expr, expected-type)

    // Modalities
    Mod(ModLock, expr) -> typecheck-expr-div(Cons(Lock(ModLock), environment), expr, expected-type)

    // OTHERWISE
    _ -> error(UnhandledExpression)
  ()


pub fun infer-pattern-bindings-div(environment : environment, patterns : list<patternBinding>) : <typechecker, div> environment
  fun get-ident(APatternBinding(pat))
    match pat
      PatternVar(ident) -> ident
      _ ->
        // TODO: support more patterns than just variables
        error(UnhandledExpression)
        StellaIdent("")
  val idents = patterns.map(get-ident)
  val exprs = patterns.map(fn (APatternBinding(_, e)) e)
  val types = exprs.map(fn (e) infer-expr-div(environment, e))
  // If there are several variables of the same name,
  // the latter should (probably) take the precedence,
  // hence we reverse the list
  idents.zip(types).varify.reverse


pub fun infer-expr(environment : environment, expression : expr) : typechecker type_
  pretend-no-div(fn () infer-expr-div(environment, expression))

fun infer-expr-div(environment : environment, expression : expr) : <typechecker, div> type_
  // Koka is not smart enough to understand that `final ctl` is not
  // meant to ever be continued. Thus, the return type of `error`
  // is not the expected `type_`
  fun err(e : stella-error) : error<stella-error> type_
    error(e)
    // TypeBottom never returns
    TypeBottom

  match expression
    // FUNCTIONS AND VARIABLES (lambda-calculi)
    Var(ident) -> match environment.get-item(ident)
      Nothing ->
        log("Why?")
        if environment.has-key(ident) then err(LockedVariable(ident.string)) else err(UndefinedVariable(ident.string))
      Just(typ) -> typ
    Abstraction(param-decls, body) ->
      val params = collect-param-decls(param-decls)
      val return-type = infer-expr-div(params.map(fn ((n, t)) Var(n,t,Identity)).append(environment), body)
      TypeFun(params.map(snd), return-type)
    Application(callee, args) ->
      val fun-type = infer-expr-div(environment, callee)
      match fun-type
        TypeFun(params, return-type) ->
          if params.length != args.length then error(IncorrectNumberOfArguments)
          return-type
        _ -> err(NotAFunction)

    // BOOLEANS
    ConstTrue -> TypeBool
    ConstFalse -> TypeBool
    If(b, t, f) ->
      typecheck-expr-div(environment, b, TypeBool)
      val expected-type = infer-expr-div(environment, t)
      typecheck-expr-div(environment, f, expected-type)
      expected-type

    // NATURALS
    ConstInt -> TypeNat
    Succ(expr) ->
      typecheck-expr-div(environment, expr, TypeNat)
      TypeNat
    IsZero(expr) ->
      typecheck-expr-div(environment, expr, TypeNat)
      TypeBool
    NatRec(n, z, s) ->
      typecheck-expr-div(environment, n, TypeNat)
      val expected-type = infer-expr-div(environment, z)
      typecheck-expr-div(environment, s, TypeFun([TypeNat], TypeFun([expected-type], expected-type)))
      expected-type

    // UNIT
    ConstUnit -> TypeUnit

    // TUPLES
    Tuple(elems) ->
      val elem-types = elems.map(fn (e) infer-expr-div(environment, e))
      TypeTuple(elem-types)
    DotTuple(tuple, ind) ->
      match infer-expr-div(environment, tuple)
        TypeTuple(elem-types) ->
          match elem-types[ind]
            Nothing -> err(TupleIndexOutOfBounds)
            Just(elem-type) -> elem-type
        _ -> err(NotATuple)

    // LET-BINDING
    Let(patterns, expr) ->
      // TODO: support more patterns than just variables
      val extra-environment = infer-pattern-bindings-div(environment, patterns)
      infer-expr-div(extra-environment.append(environment), expr)
    
    // Modalities
    Mod(ModLock, expr) -> infer-expr-div(Cons(Lock(ModLock), environment), expr)

    // OTHERWISE
    _ -> err(UnhandledExpression)


/* MAIN */

pub fun typecheck-modal(prog : program) : <console, div> ()
  with final ctl error(e : stella-error)
    match e
      NoMain -> println("FAILURE!!! Function `main` not found! ERROR_MISSING_MAIN")
      UnsupportedNode(str) -> println("FAILURE!!! Currently we do not support " ++ str)
      FunAlreadyDefined(str) -> println("FAILURE!!! Multiple definitions of " ++ str)
      NoReturn -> println("FAILURE!!! Currently we do not support missing return types")
      UnhandledExpression -> println("FAILURE!!! Unhandled expression!")
      UndefinedVariable(vname) -> println("FAILURE!!! ERROR_UNDEFINED_VARIABLE " ++ vname ++ "!")
      LockedVariable(vname) -> println("FAILURE!!! Trying to use variable " ++ vname ++ " in a locked term!")
      UnexpectedTypeForExpressions -> println("FAILURE!!! ERROR_UNEXPECTED_TYPE_FOR_EXPRESSION")
      UnexpectedLambda -> println("FAILURE!!! ERROR_UNEXPECTED_LAMBDA")
      UnexpectedNumberOfParametersInLambda -> println("FAILURE!!! ERROR_UNEXPECTED_NUMBER_OF_PARAMETERS_IN_LAMBDA")
      UnexpectedTypeForParameter -> println("FAILURE!!! ERROR_UNEXPECTED_TYPE_FOR_PARAMETER")
      NotAFunction -> println("FAILURE!!! ERROR_NOT_A_FUNCTION")
      IncorrectNumberOfArguments -> println("FAILURE!!! ERROR_INCORRECT_NUMBER_OF_ARGUMENTS")
      UnexpectedTuple -> println("FAILURE!!! ERROR_UNEXPECTED_TUPLE")
      NotATuple -> println("FAILURE!!! ERROR_NOT_A_TUPLE")
      UnexpectedTupleLength -> println("FAILURE!!! ERROR_UNEXPECTED_TUPLE_LENGTH")
      TupleIndexOutOfBounds -> println("FAILURE!!! ERROR_TUPLE_INDEX_OUT_OF_BOUNDS")
  with fun log(s)
    println(s)
    ()
  typecheck(prog)
  println("Success!!!")