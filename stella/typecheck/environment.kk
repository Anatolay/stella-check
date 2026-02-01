module stella/typecheck/environment

import stella/syntax/ast
import stella/prelude
import prelude/dict

import stella/typecheck/modalities

pub type environment
  Environment(vars : list<env-item>)

type env-item
  Lock(modality : modality)
  Dict(dict : dict<stellaIdent, (modalities, type_)>)

pub val environment/empty : environment = Environment([])

pub type environment-lookup
  Found(modalities : modalities, type_ : type_)
  // Locked(locks : modality, mod : modality, type_ : type_)
  NotFound

pub fun environment/lookup(environment : environment, ident : stellaIdent) : environment-lookup
  fun traverse-vars(vars : list<env-item>, modalities : modalities) : environment-lookup
    match vars
      [] -> NotFound
      // TODO: in the future it will accumulate different modalities
      // to see if a given variable can be used at the given mode
      Cons(Lock, tail) -> traverse-vars(tail, modalities) // TODO
      Cons(Dict(d), tail) -> match d.lookup(ident)
        Nothing -> traverse-vars(tail, modalities)
        Just((mods, type_)) -> Found(mods, type_)
  match environment
    Environment(vars) -> traverse-vars(vars, identity)


// Find if the variable is in the context, ignoring the locks
pub fun environment/lookup-ignore-locks(environment : environment, ident : stellaIdent) : maybe<(modalities, type_)>
  fun traverse-vars(vars : list<env-item>, modalities : modalities) : maybe<(modalities, type_)>
    match vars
      [] -> Nothing
      Cons(Lock, tail) -> traverse-vars(tail, modalities) // The Lock is ignored
      Cons(Dict(d), tail) -> match d.lookup(ident)
        Nothing -> traverse-vars(tail, modalities)
        Just(res) -> Just(res)
  match environment
    Environment(vars) -> traverse-vars(vars, identity)


pub fun environment/add(environment : environment, ident : stellaIdent, modalities : modalities, type_ : type_) : environment
  match environment
    Environment([]) -> Environment([Dict(singleton(ident, (modalities, type_)))])
    Environment(Cons(Lock(mod), tail)) ->
      val dict = Dict(singleton(ident, (modalities, type_))) 
      Environment(Cons(dict, Cons(Lock(mod), tail)))
    Environment(Cons(Dict(d), tail)) -> Environment(Cons(Dict(d.insert(ident, (modalities, type_))), tail))

pub fun environment/add-var(environment : environment, ident : stellaIdent, type_ : type_) : environment
  environment.add(ident, identity, type_)

pub fun environment/add-many-vars(environment : environment, vars : list<(stellaIdent, type_)>) : environment
  vars.foldl(environment, fn (e, (ident, type_)) e.add-var(ident, type_))


pub fun environment/has-ident(environment : environment, ident : stellaIdent) : bool
  match environment.lookup-ignore-locks(ident)
    Nothing -> False
    Just -> True
