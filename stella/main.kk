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
  val mbProg = parseProgram(read-lines())
  match mbProg
    Nothing -> println("FAILURE!!! Failed to parse Stella program!")
    Just(prog) ->
      with final ctl error(e : stella-error)
        match e
          NoMain -> println("FAILURE!!! Function `main` not found!")
          UnsupportedNode(str) -> println("FAILURE!!! Currently we do not support " ++ str)
          FunAlreadyDefined(str) -> println("FAILURE!!! Multiple definitions of " ++ str)
          NoReturn -> println("FAILURE!!! Currently we do not support missing return types")
          UnhandledExpression -> println("FAILURE!!! Unhandled expression!")
          UndefinedVariable(vname) -> println("FAILURE!!! ERROR_UNDEFINED_VARIABLE " ++ vname ++ "!")
          UnexpectedType -> println("FAILURE!!! ERROR_UNEXPECTED_TYPE_FOR_EXPRESSION")
          UnexpectedLambda -> println("FAILURE!!! ERROR_UNEXPECTED_LAMBDA")
          UnexpectedNumberOfParametersInLambda -> println("FAILURE!!! ERROR_UNEXPECTED_NUMBER_OF_PARAMETERS_IN_LAMBDA")
          UnexpectedTypeForParameter -> println("FAILURE!!! ERROR_UNEXPECTED_TYPE_FOR_PARAMETER")
      typecheck(prog)
      println("Success!!!")
