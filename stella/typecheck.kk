module stella/typecheck

import stella/syntax/ast

pub effect error<a>
  final ctl error(a : a) : ()

pub alias functions = list<(string, type_)>

pub fun has-key(c : functions, k : string) : bool
  match c.lookup(fn (key) key == k)
    Nothing -> False
    Just(_) -> True

pub type stella-error
  NoMain
  UnsupportedNode(str : string)
  FunAlreadyDefined(fname : string)
  NoReturn // TODO: support declarations without return type


pub fun collect-decls(decls : list<decl>) : error<stella-error> functions
  fun helper(decls, acc)
    match decls
      Nil -> acc.reverse
      Cons(DeclFun(_, ident, params, return-type), ds) ->
        if acc.has-key(ident.string) then error(FunAlreadyDefined(ident.string))
        val input-types = params.map(fn (AParamDecl(_, t)) t)
        val fun-type = match return-type
          NoReturnType ->
            // TODO: Properly support omitted return types
            error(NoReturn)
            TypeVar(StellaIdent("a"))
          SomeReturnType(ret) -> TypeFun(input-types, ret)
        helper(ds, Cons((ident.string, fun-type), acc))
      // TODO: Handle other declarations
      Cons(_, ds) -> helper(ds, acc)
  helper(decls, [])

pub fun typecheck(AProgram(LanguageCore, _extensions, declarations) : program) : error<stella-error> ()
  val functions = collect-decls(declarations)
  if not(functions.has-key("main")) then error(NoMain)
  ()

pub fun typecheck-decl(decl : decl) : error<stella-error> ()
  match decl
    DeclFun -> ()
    _ -> ()

// pub fun infer-decl(decl : decl) : error<stella-error> type_
  // match decl
    // DeclFun -> TypeUnit
    // _ -> TypeUnit
