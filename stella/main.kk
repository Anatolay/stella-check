module stella/main

import std/os/readline

import stella/syntax/ast
import stella/syntax/parse
import stella/core/typecheck
import stella/typecheck
import stella/utils

// God knows if this works
fun read-lines() : <console,div> string
  fun read-loop()
    match try(readline)
      Error -> Nil
      Ok(s) -> Cons(s, read-loop())
  join(read-loop(), "\n")

pub fun main() : <console, div> ()
  val mbProg = parseProgram(read-lines())
  match mbProg
    Nothing -> println("FAILURE!!! Failed to parse Stella program!")
    Just(prog) -> if prog.has-extension("#modal-lock") || prog.has-extension("#modal-locks")
      then
        println("Typechecking modal!")
        typecheck-modal(prog)
      else
        println("Typechecking core!")
        typecheck-core(prog)
