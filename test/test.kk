module test/test

import std/os/file
import std/os/dir
import std/os/path

fun get-test-files() : _ list<path>
  []

pub fun main() : _ ()
  val run-dir-path = app-path()
  // get from "stella/.koka/v3.2.2/gcc-debug-[id]/test_test__main"
  //     to   "stella/"
  val root-path = run-dir-path/".."/".."/".."/".."
  val test-dir = root-path/"test"

  val test-files-paths = test-dir.list-directory-recursive().filter(fn (p) p.is-file())
  println(test-files-paths)
  ()
