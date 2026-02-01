module stella/utils

import stella/syntax/ast

pub fun has-extension(AProgram(_, exts) : program, e : string) : bool
  exts.any(
    fn (AnExtension(names))
      -> names.any(fn (n) n.string == e)
  )
