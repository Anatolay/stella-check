module stella/main

import std/os/readline
import std/core/exn
import stella/syntax/parse
import stella/typecheck
import stella/syntax/ast

// God knows if this works
fun read-lines() : <console,div> string
  fun read-loop()
    match try(readline)
      Error -> Nil
      Ok(s) -> Cons(s, read-loop())
  join(read-loop(), "\n")

pub fun main() : <console, div> ()
  // val s = read-lines()
  // println(s)
  // println(s)
  val mbProg = parseProgram(read-lines())
  match mbProg
    Nothing -> println("FAILURE!!! Failed to parse Stella program!")
    Just(prog) -> println("Success!!!")
  //     with fun error(e : stella-error)
  //       match e
  //         NoMain -> println("FAILURE!!! Function `main` not found!")
  //     typecheck(prog)
  //     println("Success!!!")
