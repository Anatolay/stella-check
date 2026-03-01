module utils/multiset

import utils/dict

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

pub fun multiset/to-list(Multiset(d) : multiset<a>) : list<a>
  d.to-list.flatmap(fn ((a, n)) replicate(a, n))

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

pub fun multiset/diff(Multiset(d1) : multiset<a>, Multiset(d2) : multiset<a>, @implicit/a/(==) : (a,a) -> bool) : multiset<a>
  fun go(d : dict<a, int>, (a, n) : (a, int), @implicit/a/(==) : (a,a) -> bool) : dict<a, int>
    match dict/lookup(d, a)
      Nothing -> d
      Just(m) -> if m > n then d.insert(a, m - n) else d.remove(a)
  Multiset(d2.to-list.foldl(d1, go))
