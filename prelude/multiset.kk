module prelude/multiset

import prelude/dict

// Multiset
pub type multiset<a>
  Multiset(d : dict<a, int>)

pub val multiset/empty : forall<a> multiset<a> = Multiset(empty)

pub fun multiset/singleton(elem : a) : multiset<a>
  Multiset(singleton(elem, 1))

pub fun multiset/from-list(elems : list<a>, @implicit/a/(==) : (a,a) -> bool) : multiset<a>
  match elems
    [] -> empty
    Cons(x, xs) -> from-list(xs).insert(x)

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

pub fun multiset/insert(m : multiset<a>, elem : a, @implicit/a/(==) : (a,a) -> bool) : multiset<a>
  m.insert-many(elem, 1)

pub fun multiset/insert-many(m : multiset<a>, elem : a, count : int, @implicit/a/(==) : (a,a) -> bool) : multiset<a>
  match m
    Multiset(d) ->
      match d.lookup(elem)
        Nothing -> Multiset(d.insert(elem, count))
        Just(n) -> Multiset(d.insert(elem, n + count))

pub fun multiset/merge(m1 : multiset<a>, m2 : multiset<a>, @implicit/a/(==) : (a,a) -> bool) : multiset<a>
  match m1
    Multiset(d) ->
      val pairs = d.to-list()
      pairs.foldr(m2, fn ((elem, count), multiset) multiset.insert-many(elem, count))


// LIST utils used by `multiset`
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