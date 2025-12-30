module stella/utils

import stella/syntax/ast

pub fun has-extension(AProgram(_, exts) : program, e : string) : bool
  exts.any(
    fn (AnExtension(names))
      -> names.any(fn (n) n.string == e)
  )

// LIST
fun list/remove-elem(l : list<(a, b)>, key : a, @implicit/a/(==) : (a,a) -> bool) : list<(a, b)>
  match l
    [] -> []
    Cons((k, e), xs) ->
      if k == key
      then xs
      else Cons((k, e), xs.remove-elem(key))
fun list/insert(l : list<(a, b)>, key : a, value : b, @implicit/a/(==) : (a,a) -> bool) : list<(a, b)>
  match l
    [] -> [(key, value)]
    Cons((k, e), xs) ->
      if k == key
      then Cons((key, value), xs)
      else Cons((k, e), xs.insert(key, value))
// Keys in the first list take precedence over keys in the second list
fun list/merge(l1 : list<(a, b)>, l2 : list<(a, b)>, @implicit/a/(==) : (a,a) -> bool) : list<(a, b)>
  match l1
    [] -> l2
    Cons((k, e), xs) ->
      xs.merge(l2.insert(k, e))


// DICTIONARY
// A custom and inefficient dictionary that uses a list of pairs internally.
// I assume that the constructor will not be used directly outside this module,
// that is, all keys in the list will always be unique.
pub type dict<a, b>
  Dict(l : list<(a, b)>)

pub val dict/empty = Dict([])

pub fun dict/keys(dict : dict<a, b>) : list<a>
  match dict
    Dict(l) ->
      l.map(fst)

pub fun dict/to-list(dict : dict<a, b>) : list<(a, b)>
  match dict
    Dict(l) -> l

pub fun dict/lookup(dict : dict<a, b>, key : a, @implicit/a/(==) : (a,a) -> bool) : maybe<b>
  match dict
    Dict(l) -> l.lookup(fn (x) key == x)

pub fun dict/remove(dict : dict<a, b>, key : a, @implicit/a/(==) : (a,a) -> bool) : dict<a, b>
  match dict
    Dict(l) -> Dict(l.remove-elem(key))

pub fun dict/insert(dict : dict<a, b>, key : a, value : b, @implicit/a/(==) : (a,a) -> bool) : dict<a, b>
  match dict
    Dict(l) -> Dict(l.insert(key, value))

// The first dictionary shadows the second
pub fun dict/merge(dict1 : dict<a, b>, dict2 : dict<a, b>, @implicit/a/(==) : (a,a) -> bool) : dict<a, b>
  match (dict1, dict2)
    (Dict(l1), Dict(l2)) -> Dict(l1.merge(l2))


// MULTISET
pub type multiset<a>
  Multiset(d : dict<a, int>)

pub fun multiset/lookup(m : multiset<a>, elem : a, @implicit/a/(==) : (a,a) -> bool) : maybe<int>
  match m
    Multiset(d) -> d.lookup(elem)

pub fun multiset/remove-one(m : multiset<a>, elem : a, @implicit/a/(==) : (a,a) -> bool) : multiset<a>
  match m
    Multiset(d) ->
      match d.lookup(elem)
        Nothing -> m
        Just(n) ->
          if n <= 1
          then Multiset(d.remove(elem))
          else Multiset(d.insert(elem, n - 1))
pub fun multiset/remove-all(m : multiset<a>, elem : a, @implicit/a/(==) : (a,a) -> bool) : multiset<a>
  match m
    Multiset(d) ->
      Multiset(d.remove(elem))

pub fun multiset/insert(m : multiset<a>, elem : a, count : int, @implicit/a/(==) : (a,a) -> bool) : multiset<a>
  match m
    Multiset(d) ->
      match d.lookup(elem)
        Nothing -> Multiset(d.insert(elem, count))
        Just(n) -> Multiset(d.insert(elem, n + count))

pub fun multiset/merge(m1 : multiset<a>, m2 : multiset<a>, @implicit/a/(==) : (a,a) -> bool) : multiset<a>
  match m1
    Multiset(d) ->
      val pairs = d.to-list()
      pairs.foldr(m2, fn ((elem, count), multiset) multiset.insert(elem, count))
