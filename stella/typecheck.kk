module stella/typecheck

import stella/syntax/ast

pub effect error<a>
  fun error(a : a) : ()

pub type stella-error
  NoMain

pub fun findMain(decls : list<decl>) : error<stella-error> ()
  match decls
    Nil -> error(NoMain)
    Cons(DeclFun(_, stellaIdent), ds) -> if stellaIdent.string == "main" then () else findMain(ds)
    Cons(_, ds) -> findMain(ds)


pub fun typecheck(AProgram(LanguageCore, _extensions, declarations) : program) : error<stella-error> ()
  findMain(declarations)
  ()
