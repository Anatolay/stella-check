module test/test

import std/os/env
import std/os/file
import std/os/dir
import std/os/path

import stella/prelude
import stella/syntax/ast
import stella/syntax/parse
import stella/typecheck/typecheck

fun get-test-files() : _ list<path>
  []

fun run-typecheck(prog : program) : string
  with final ctl error(e : stella-error)
    stella-error-to-string((e))
  with fun log(s)
    ()
  typecheck(prog)
  "SUCCESS"

fun path-to-error(p : path) : string
  fun dash(c : char) : char
    if c == '-' then '_' else c
  "ERROR_" ++ p.nodir.string.to-upper.map(dash)

fun run-tests-in-path(path : path, expected-res : string) : _ (int, list<(string, string)>)
  val test-files-paths = path.list-directory().filter(is-file)
  val mbProgs = test-files-paths.map(read-text-file).map(parseProgram)
  fun handle_(mb-prog : maybe<program>) : maybe<string>
    match mb-prog
      Nothing -> Just("Failed to parse")
      Just(prog) ->
        val message = run-typecheck(prog)
        match message.find(expected-res)
          Nothing -> Just("Unexpected message:\n" ++ message)
          Just -> Nothing
  val results = mbProgs.map(handle_)
  val indexed-results = test-files-paths.map(fn(p) p.nodir.string).zip(results)
  val errors = indexed-results.filter-map(fn ((test-name, result)) result.map(fn (msg) (test-name, msg)))
  (test-files-paths.length(), errors)


fun execute-tests(path : path, expected-res : string) : _ ()
  val batch-name = path.nodir.string
  println("- Checking " ++ batch-name ++ ", expecting " ++ expected-res)
  val (num-tests, errors) = run-tests-in-path(path, expected-res)
  val passed-count = num-tests - errors.length()
  println("Passed " ++ passed-count.show ++ "/" ++ num-tests.show)
  // fun print-error((name, res)) : _ ()
    // println("[" ++ name ++ "] " ++ res)
  errors.foreach(fn ((name, res)) println("[X] " ++ name ++ ": " ++ res))
  println("")


pub fun main() : _ ()
  val run-dir-path = app-path()
  // get from "stella/.koka/v3.2.2/gcc-debug-[id]/test_test__main"
  //     to   "stella/"
  val root-path = run-dir-path/".."/".."/".."/".."
  val test-dir-path = root-path/"test"

  val vanilla-test-path = test-dir-path/"vanilla"
  val modal-test-path = test-dir-path/"modal"

  val args = get-args()

  fun run-vanilla()
    val well-typed-dir-path = vanilla-test-path/"well-typed"
    val errors-dir-path = vanilla-test-path/"fail"
    execute-tests(well-typed-dir-path, "SUCCESS")
    errors-dir-path.list-directory().filter(is-directory).foreach(fn (p) execute-tests(p, path-to-error(p)))
  
  fun run-modal()
    val well-typed-dir-path = modal-test-path/"well-typed"
    val errors-dir-path = modal-test-path/"fail"
    execute-tests(well-typed-dir-path, "SUCCESS")
    errors-dir-path.list-directory().filter(is-directory).foreach(fn (p) execute-tests(p, path-to-error(p)))

  match args
    ["vanilla"] -> run-vanilla()
    ["modal"] -> run-modal()
    _ ->
      run-vanilla()
      run-modal()
  
