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
  UnexpectedType
  UnexpectedLambda
  UnexpectedNumberOfParametersInLambda
  UnexpectedTypeForParameter


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

pub fun typecheck(AProgram(LanguageCore, _extensions, declarations) : program) : error<stella-error> ()
  val functions = collect-decls(declarations)
  if not(functions.has-key(StellaIdent("main"))) then error(NoMain)
  declarations.foreach(fn (d) typecheck-decl(functions, d))

pub fun typecheck-decl(functions : functions, declaration : decl) : error<stella-error> ()
  match declaration
    DeclFun(_, _fname, param-decls, SomeReturnType(return-type), _throw, _decls, expression) ->
      // TODO: typecheck nested decls
      val params = collect-param-decls(param-decls)
      val new-functions = params.append(functions)
      typecheck-expr(new-functions, expression, return-type)
    _ -> ()

pub fun typecheck-expr(functions : functions, expression : expr, expected-type : type_) : error<stella-error> ()
  match expression
    Var(ident) -> match functions.lookup(fn (i) -> i == ident)
      Nothing -> error(UndefinedVariable(ident.string))
      Just(typ) -> if typ == expected-type then () else error(UnexpectedType)
    Abstraction(param-decls, body) -> match expected-type
      TypeFun(expected-arg-types, expected-return-type) ->
        val params = collect-param-decls(param-decls)
        if expected-arg-types.length != params.length then error(UnexpectedNumberOfParametersInLambda)
        val are-equal = expected-arg-types.zipwith(params, fn (e-type, (_, a-type)) -> e-type == a-type)
        if not(all(are-equal)) then error(UnexpectedTypeForParameter)
        typecheck-expr(params.append(functions), body, expected-return-type)
      _ -> error(UnexpectedLambda)
    _ -> error(UnhandledExpression)
  ()

// pub fun infer-decl(decl : decl) : error<stella-error> type_
  // match decl
    // DeclFun -> TypeUnit
    // _ -> TypeUnit
