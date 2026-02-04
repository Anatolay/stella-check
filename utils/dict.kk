module utils/dict

// DICTIONARY
// A custom and inefficient dictionary that uses a list of pairs internally.
// I assume that the constructor will not be used directly outside this module,
// that is, all keys in the list will always be unique.
pub type dict<a, b>
  Dict(l : list<(a, b)>)

pub val dict/empty = Dict([])

pub fun singleton(key : a, value : b) : dict<a, b>
  Dict([(key, value)])

pub fun dict/keys(dict : dict<a, b>) : list<a>
  match dict
    Dict(l) ->
      l.map(fst)

pub fun dict/to-list(dict : dict<a, b>) : list<(a, b)>
  match dict
    Dict(l) -> l

pub fun dict/from-list(lst : list<(a, b)>, @implicit/a/(==) : (a,a) -> bool) : dict<a, b>
  lst.foldl(empty, fn (dict, (a, b)) dict.insert(a, b))

// pub fun dict/from-list(lst : list<(a, b)>) : dict<a, b>
  // match

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


// LIST utils used by `dict`
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