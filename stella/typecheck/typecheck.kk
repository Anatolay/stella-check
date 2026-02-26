module stella/typecheck/typecheck

import std/core/undiv

import stella/syntax/ast
import stella/prelude

import stella/typecheck/environment
import stella/typecheck/modal-effects
import stella/typecheck/modalities
import stella/typecheck/mode

import utils/dict

/* UTILITY FUNCTIONS */

pub fun collect-param-decls(param-decls : list<paramDecl>) : list<(stellaIdent, type_)>
  param-decls.map(fn (AParamDecl(name, typ)) -> (name, typ))

fun environment/add-param-decls(environment : environment, param-decls : list<paramDecl>) : environment
  environment.add-many-vars(param-decls.map(fn (AParamDecl(ident, type_)) (ident, type_)))

pub fun list/all(bs : list<bool>) : bool
  bs.foldl(True,(&&))


/* CONTEXT AND ESSENTIALS */

alias typechecker = <prelude/error<stella-error>, log<string>>

// E <= F if
// 1. Labels in E are subset of labels in F
// and
// 2. For the same label `l`, E has nothing OR the same operation as F
// fun is-sub-effect-context(c1 : effect-context, c2 : effect-context) : bool
//   val lbls = c1.keys()
//   fun check(label : string) : bool
//     match (c1.lookup(label), c2.lookup(label))
//       (Nothing, _) -> False // impossible
//       (Just(_), Nothing) -> False
//       (Just(presences1), Just(presences2)) -> presences1.zip(presences2).map(fn ((p1, p2)) is-sub-presence(p1,p2)).all()
//   lbls.map(check).all()

// D1 <= D2 if
// 1. Labels in D1 and D2 are the same
// and
// 2. For the same label `l`, D1 has nothing OR the same operation as D2
// fun is-sub-effect-extension(c1 : effect-extension, c2 : effect-extension) : bool
//   val lbls1 = c1.keys()
//   val lbls2 = c2.keys()
//   fun check(label : string) : bool
//     match (c1.lookup(label), c2.lookup(label))
//       (Nothing, _) -> False // impossible
//       (Just(_), Nothing) -> False
//       (Just(presences1), Just(presences2)) ->
//         presences1.length() == presences2.length() && presences1.zip(presences2).map(fn ((p1, p2)) is-sub-presence(p1,p2)).all()
//   lbls1.map(check).all() && lbls1.length() == lbls2.length()


// pub fun apply-modality(m : modality, ec : effect-context) : effect-context
//   match m
//     Identity -> ec
//     Absolute(c) -> c // [E](F)  =  E
//     Relative(l, d) -> extend(d, remove(ec, l)) // <L|D>(F)  =  D + (F - L)


// mu_F => nu_F is a safe transform when the action of mu on F
// results in a smaller context then the action of nu on F
// pub fun is-safe-transform(m1 : modality, m2 : modality, ef : effect-context) : bool
//   // I have several questions to the original paper
//   // match (m1, m2)
//   //   (Absolute(e), _) -> e.is-sub-effect-context(apply-modality(m2, ef))
//   //   (Relative(l1, d1), Relative(l2, d2)) -> False
//   //   _ -> False
//   // This does not align with the paper in certain cases, but seems reasonable
//   is-sub-effect-context(apply-modality(m1, ef),apply-modality(m2, ef))



// pub fun has-key(c : environment, k : stellaIdent) : bool
//   match c
//     Nil -> False
//     Cons(Var(name), rest) -> if name == k then True else rest.has-key(k)
//     Cons(_, rest) -> rest.has-key(k)

// pub fun get-item(c : environment, k : stellaIdent) : maybe<type_>
//   c.get-item-with([], k)

// pub fun get-item-with(c : environment, mods : list<mod>, k : stellaIdent) : maybe<type_>
//   match c
//     Nil -> Nothing
//     Cons(Lock(ModLock), _) -> Nothing
//     Cons(Var(name, typ, modality), rest) -> if name == k && modality.unlocks(mods) then Just(typ) else rest.get-item-with(mods, k)

// pub fun unlocks(m : modality, locks : list<mod>) : bool
//   // TODO: add more modes and modalities
//   True

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

// pub fun list/has-key(lst : list<(a,b)>, key : a, @implicit/a/(==) : (a,a) -> bool) : bool
//   match lst
//     [] -> False
//     Cons(Var(name), rest) -> if name == k then True else rest.has-key(k)
//     Cons(_, rest) -> rest.has-key(k)


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
        val converted = raw-modalities.map(singleton)
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
      val new-effects = modalities.foldl(effects, apply-modality)
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

fun typecheck-expr(environment : environment, expression : expr, expected-type : type_, mode : mode) : typechecker ()
  pretend-no-div(fn () -> typecheck-expr-div(environment, expression, expected-type, mode))

fun typecheck-expr-div(environment : environment, expression : expr, expected-type : type_, mode : mode) : <typechecker, div> ()
  match expression
    // FUNCTIONS AND VARIABLES (lambda-calculi)
    // TODO: do not ignore locks
    Var(ident) -> match environment.lookup-ignore-locks(ident)
      Nothing ->
        log("Why?")
        // TODO: rework errors for locked variables
        if environment.has-ident(ident) then error(LockedVariable(ident.string)) else error(UndefinedVariable(ident.string))
      Just((_, typ)) ->
        log("Why?")
        if typ == expected-type then () else error(UnexpectedTypeForExpressions)
    Abstraction(param-decls, body) -> match expected-type
      TypeFun(expected-arg-types, expected-return-type) ->
        if expected-arg-types.length != param-decls.length then error(UnexpectedNumberOfParametersInLambda)
        val are-equal = expected-arg-types.zipwith(param-decls, fn (e-type, AParamDecl(_, a-type)) -> e-type == a-type)
        if not(all(are-equal)) then error(UnexpectedTypeForParameter)
        typecheck-expr-div(environment.add-param-decls(param-decls), body, expected-return-type, mode)
      _ -> error(UnexpectedLambda)
    Application(callee, args) ->
      val fun-type = infer-expr-div(environment, callee, mode)
      match fun-type
        TypeFun(params, return-type) ->
          if params.length != args.length then error(IncorrectNumberOfArguments)
          args.zip(params).foreach(fn ((arg, param)) typecheck-expr-div(environment, arg, param, mode))
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
      typecheck-expr-div(environment, b, TypeBool, mode)
      typecheck-expr-div(environment, t, expected-type, mode)
      typecheck-expr-div(environment, f, expected-type, mode)

    // NATURALS
    ConstInt ->
      log("Why?")
      if expected-type == TypeNat then () else error(UnexpectedTypeForExpressions)
    Succ(expr) ->
      if expected-type != TypeNat then error(UnexpectedTypeForExpressions)
      typecheck-expr-div(environment, expr, TypeNat, mode)
    IsZero(expr) ->
      if expected-type != TypeBool then error(UnexpectedTypeForExpressions)
      typecheck-expr-div(environment, expr, TypeNat, mode)
    NatRec(n, z, s) ->
      typecheck-expr-div(environment, n, TypeNat, mode)
      typecheck-expr-div(environment, z, expected-type, mode)
      val operator-type = TypeFun([TypeNat], TypeFun([expected-type], expected-type))
      typecheck-expr-div(environment, s, operator-type, mode)

    // UNIT
    ConstUnit -> if expected-type == TypeUnit then () else error(UnexpectedTypeForExpressions)

    // TUPLES
    Tuple(elems) -> match expected-type
      TypeTuple(expected-types) ->
        if elems.length != expected-types.length then error(UnexpectedTupleLength)
        elems.zip(expected-types).foreach(fn ((el, et)) -> typecheck-expr-div(environment, el, et, mode))
      _ -> error(UnexpectedTuple)
    DotTuple(tuple, ind) ->
      match infer-expr-div(environment, tuple, mode)
        TypeTuple(elem-types) ->
          // Tuple indices start with 1 in Stella
          match elem-types[ind - 1]
            Nothing -> error(TupleIndexOutOfBounds)
            Just(elem-type) -> if elem-type == expected-type then () else error(UnexpectedTypeForExpressions)
        _ -> error(NotATuple)
    
    // LISTS
    List(exprs) ->
      match expected-type
        TypeList(elem-type) ->
          exprs.foreach(fn (e) typecheck-expr-div(environment, e, elem-type, mode))
        _ -> error(UnexpectedList)
    ConsList(expr-head, expr-tail) -> match expected-type
      TypeList(elem-type) ->
        typecheck-expr-div(environment, expr-head, elem-type, mode)
        typecheck-expr-div(environment, expr-tail, TypeList(elem-type), mode)
      _ -> error(UnexpectedList)

    // // LET-BINDING
    // Let(patterns, expr) ->
    //   // TODO: support more patterns than just variables
    //   val extra-environment = infer-pattern-bindings-div(environment, patterns)
    //   typecheck-expr-div(extra-environment.append(environment), expr, expected-type)

    // MODAL
    ModDo(eff-ident, expr) ->
      match mode.effects.lookup(eff-ident)
        Nothing -> error(UnknownEffect(eff-ident))
        Just(TypeFun([arg-type], return-type)) ->
          typecheck-expr-div(environment, expr, arg-type, mode)
          if return-type == expected-type
          then ()
          else error(UnexpectedTypeForExpressions)
        Just(eff-type) -> error(NonFunctionEffect(eff-ident, eff-type))

    ModHandle(expr, handlers) ->
      typecheck-handle-expr-div(environment, expr, handlers, expected-type, mode)

    // ModBox(ModalityLock, expr) -> typecheck-expr-div(environment.add-lock(ModalityLock), expr, expected-type, mode)
    ModBox(modality, expr) ->
      if not(is-value(expr)) then error(NonValueBox)
      match expected-type
        TypeMod(expected-modality, type_) ->
          log("Why")
          if expected-modality == modality
          then typecheck-expr-div(environment.add-lock(modality), expr, type_, mode.apply-modality(modality))
          else error(ModalityMismatch(expected-modality, modality))
        _ -> error(ExpectedNonModalType(expected-type))

    // TODO : support multiple pattern bindings, support non variable patterns
    // let_nu mod_mu x = M in N
    ModLet(nu, mu, [APatternBinding(PatternVar(ident), expr)], body) ->
      log("Checking modal let, expecting " ++ expected-type.show)
      val mu-type = infer-expr-div(environment.add-lock(nu), expr, mode.apply-modality(nu))
      val type_ = match mu-type
        TypeMod(modality, t) ->
          log("Why")
          // TODO: another error?
          if mu == modality then t else error(UnexpectedTypeForExpressions)
        _ -> error(UnexpectedTypeForExpressions) // TODO: another error?
      typecheck-expr-div(environment.add(ident, singleton(nu).compose(singleton(mu)), type_), body, expected-type, mode)

    // OTHERWISE
    _ -> error(UnhandledExpression)

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
  fun collect-labels(labels, acc) : <typechecker> dict<stellaIdent, type_>
    match labels
      [] -> acc
      Cons(ALabelledEffect(ident, effect-type), labels-tail) -> match acc.dict/lookup(ident)
        Just -> error(MultipleHandlersForOneLabel)
        Nothing -> match effect-type
          TypeFun -> collect-labels(labels-tail, acc.insert(ident, effect-type))
          _ -> error(NonFunctionEffect(ident, effect-type))
  val effect-labels // D
    = collect-labels(label-handlers.map(fst), empty)
  val effect-extension-modality // <|D>
    = ModalityRel([], effect-labels.to-list.map(fn ((l, t)) ALabelledEffect(l, t)))
  // (2)
  val expr-type = infer-expr-div(
    environment.add-lock(effect-extension-modality),
    expr,
    mode.update-effects(effect-labels.merge(mode.effects))
  )
  // (3)
  match returns
    [] -> error(NoReturnInHandler)
    [(PatternVar(ident), return-expr)] -> typecheck-expr-div(
      environment.add-var(ident, TypeMod(effect-extension-modality, expr-type)),
      return-expr,
      expected-type,
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
          expected-type,
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
        error(UnhandledExpression)
        StellaIdent("")
  val idents = patterns.map(get-ident)
  val exprs = patterns.map(fn (APatternBinding(_, e)) e)
  val types = exprs.map(fn (e) infer-expr-div(environment, e, mode))
  // If there are several variables of the same name,
  // the latter should (probably) take the precedence,
  // hence we reverse the list
  idents.zip(types).reverse


pub fun infer-expr(environment : environment, expression : expr, mode : mode) : typechecker type_
  pretend-no-div(fn () infer-expr-div(environment, expression, mode))

fun infer-expr-div(environment : environment, expression : expr, mode : mode) : <typechecker, div> type_
  fun err(e : stella-error) : prelude/error<stella-error> type_
    error(e)

  match expression
    // FUNCTIONS AND VARIABLES
    // TODO: do not ignore locks
    Var(ident) -> match environment.lookup-ignore-locks(ident)
      Nothing ->
        log("Why?")
        if environment.has-ident(ident) then err(LockedVariable(ident.string)) else err(UndefinedVariable(ident.string))
      Just((_, typ)) -> typ
    Abstraction(param-decls, body) ->
      val extended-environment = environment.add-param-decls(param-decls)
      val return-type = infer-expr-div(extended-environment, body, mode)
      TypeFun(
        param-decls.map(fn (AParamDecl(_, t)) t),
        return-type
      )
    Application(callee, args) ->
      val fun-type = infer-expr-div(environment, callee, mode)
      log("Function type : " ++ fun-type.show)
      match fun-type
        TypeFun(params, return-type) ->
          if params.length != args.length then error(IncorrectNumberOfArguments)
          args.zip(params).foreach(fn ((arg, param)) typecheck-expr-div(environment, arg, param, mode))
          return-type
        _ -> err(NotAFunction)

    // BOOLEANS
    ConstTrue -> TypeBool
    ConstFalse -> TypeBool
    If(b, t, f) ->
      typecheck-expr-div(environment, b, TypeBool, mode)
      val expected-type = infer-expr-div(environment, t, mode)
      typecheck-expr-div(environment, f, expected-type, mode)
      expected-type

    // NATURALS
    ConstInt -> TypeNat
    Succ(expr) ->
      typecheck-expr-div(environment, expr, TypeNat, mode)
      TypeNat
    IsZero(expr) ->
      typecheck-expr-div(environment, expr, TypeNat, mode)
      TypeBool
    NatRec(n, z, s) ->
      typecheck-expr-div(environment, n, TypeNat, mode)
      val expected-type = infer-expr-div(environment, z, mode)
      typecheck-expr-div(environment, s, TypeFun([TypeNat], TypeFun([expected-type], expected-type)), mode)
      expected-type

    // UNIT
    ConstUnit -> TypeUnit

    // TUPLES
    Tuple(elems) ->
      val elem-types = elems.map(fn (e) infer-expr-div(environment, e, mode))
      TypeTuple(elem-types)
    DotTuple(tuple, ind) ->
      match infer-expr-div(environment, tuple, mode)
        TypeTuple(elem-types) ->
          // Tuple indices start with 1 in Stella
          match elem-types[ind - 1]
            Nothing -> err(TupleIndexOutOfBounds)
            Just(elem-type) -> elem-type
        _ -> err(NotATuple)

    // LISTS
    List(exprs) ->
      match exprs
        [] -> error(AmbiguousListType)
        Cons(head, tail) ->
          val elem-type = infer-expr-div(environment, head, mode)
          tail.foreach(fn (e) typecheck-expr-div(environment, e, elem-type, mode))
          elem-type
    ConsList(expr-head, expr-tail) ->
      val elem-type = infer-expr-div(environment, expr-head, mode)
      typecheck-expr-div(environment, expr-tail, TypeList(elem-type), mode)
      TypeList(elem-type)

    // // LET-BINDING
    // Let(patterns, expr) ->
    //   // TODO: support more patterns than just variables
    //   val extra-environment = infer-pattern-bindings-div(environment, patterns)
    //   infer-expr-div(extra-environment.append(environment), expr)

    // MODAL
    ModDo(eff-ident, expr) ->
      match mode.effects.lookup(eff-ident)
        Nothing -> error(UnknownEffect(eff-ident))
        Just(TypeFun([arg-type], return-type)) ->
          typecheck-expr-div(environment, expr, arg-type, mode)
          return-type
        Just(eff-type) -> error(NonFunctionEffect(eff-ident, eff-type))

    // ModHandle(expr, handlers) -> ()

    ModBox(modality, expr) ->
      log("Why")
      if not(is-value(expr)) then error(NonValueBox)
      val type_ = infer-expr-div(environment.add-lock(modality), expr, mode.apply-modality(modality))
      TypeMod(modality, type_)

    // TODO : support multiple pattern bindings, support non variable patterns
    // let_nu mod_mu x = M in N
    ModLet(nu, mu, [APatternBinding(PatternVar(ident), expr)], body) ->
      log("Inferring modal let")
      val mu-type = infer-expr-div(environment.add-lock(nu), expr, mode.apply-modality(nu))
      val type_ = match mu-type
        TypeMod(modality, t) ->
          log("Why")
          // TODO: another error?
          if mu == modality then t else error(UnexpectedTypeForExpressions)
        _ -> error(UnexpectedTypeForExpressions) // TODO: another error?
      infer-expr-div(environment.add(ident, singleton(nu).compose(singleton(mu)), type_), body, mode)

    // OTHERWISE
    _ -> err(UnhandledExpression)


/* MAIN */

pub fun stella-error-to-string(err : stella-error) : string
  match err
    NoMain -> "FAILURE!!! Function `main` not found! ERROR_MISSING_MAIN"
    UnsupportedNode(str) -> "FAILURE!!! Currently we do not support " ++ str
    FunAlreadyDefined(str) -> "FAILURE!!! Multiple definitions of " ++ str
    NoReturn -> "FAILURE!!! Currently we do not support missing return types"
    UnhandledExpression -> "FAILURE!!! Unhandled expression!"
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
