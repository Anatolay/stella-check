module stella/typecheck/modal-effects

import std/core/undiv

import stella/prelude
import stella/syntax/ast
import utils/dict
import utils/multiset

/*
Since effect contexts are identified up to reordering of distinct labels,
they are better modeled as maps from each distinct label to a list of
"presences" with the given label.

Note: a presence type is an effectful function type associated
with each label (label is an operator within a given effect)
*/
pub alias effect-context = dict<stellaIdent, list<type_>>
pub alias effect-extension = dict<stellaIdent, list<type_>>
pub alias effect-mask = multiset<stellaIdent>


pub fun effect-context/is-sub-effect(e1 : effect-context, e2 : effect-context) : bool
  fun check((label : stellaIdent, types1 : list<type_>)) : bool
    match e2.lookup(label)
      Nothing -> False
      Just(types2) -> types1.is-prefix(types2)
  e1.to-list.all(check)

pub fun effect-context/merge(e1 : effect-context, e2 : effect-context) : effect-context
  fun go(acc, (l : stellaIdent, types : list<type_>))
    match dict/lookup(acc, l)
      Nothing -> acc.insert(l, types)
      Just(ts) -> acc.insert(l, ts ++ types)
  e2.to-list.foldl(e1, go)

fun effect-context/to-labelledEffects(e : effect-context) : list<labelledEffect>
  e.to-list.flatmap(fn ((ident, types)) types.map(fn (t) ALabelledEffect(ident, t)))

fun effect-extension/to-mask(ext : effect-extension) : effect-mask
  ext.to-list.map(fn ((i,_)) i).from-list

fun effect-extension/extract(effect-extension : effect-extension, labels : multiset<stellaIdent>) : maybe<effect-extension>
  fun go(ext : effect-extension, lbls : list<stellaIdent>, acc : effect-extension) : maybe<effect-extension>
    match lbls
      Nil -> Just(acc)
      Cons(l, ls) -> match ext.lookup(l)
        Just(Cons(t, _)) -> go(ext.remove-first-label(l), ls, acc.add-label-end(l, t))
        _ -> Nothing
  go(effect-extension, labels.to-list, empty)

fun remove-first-label(ec : effect-extension, label : stellaIdent) : effect-extension
  match ec.lookup(label)
    Nothing -> ec
    Just([]) -> ec.remove(label)
    Just(Cons(_, [])) -> ec.remove(label)
    Just(Cons(_, rest)) -> ec.insert(label, rest)

pub fun add-label-end(ec : effect-extension, label : stellaIdent, type_ : type_) : effect-extension
  match ec.lookup(label)
    Nothing -> ec.insert(label, [type_])
    Just(lst) -> ec.insert(label, lst ++ [type_])

pub fun add-label-start(ec : effect-extension, label : stellaIdent, type_ : type_) : effect-extension
  match ec.lookup(label)
    Nothing -> ec.insert(label, [type_])
    Just(lst) -> ec.insert(label, Cons(type_, lst))

// D + E  =  D,E
pub fun extend(d : effect-extension, e : effect-context) : effect-context
  d.effect-context/merge(e)
// . - L  =  .         (l:P, E) - L  =  ...
fun remove(c : effect-context, l : effect-mask) : effect-context
  val lbls = c.keys()
  fun diff(labels : list<stellaIdent>, effect-context : effect-context, effect-mask : effect-mask) : effect-context
    match labels
      [] -> effect-context
      Cons(label, rest) ->
        match effect-mask.lookup(label)
          Nothing -> diff(rest, effect-context, effect-mask)
          Just -> diff(rest, effect-context.remove-first-label(label), effect-mask.remove-one(label))
  diff(lbls, c, l)
// L >< .  ==  (L, .)
fun difference(l : effect-mask, d : effect-extension) : (effect-mask, effect-extension)
  val lbls = d.keys()
  fun diff(labels : list<stellaIdent>, effect-mask : effect-mask, effect-extension : effect-extension) : (effect-mask, effect-extension)
    match labels
      [] -> (effect-mask, effect-extension)
      Cons(label, rest) ->
        match effect-mask.lookup(label)
          Nothing -> diff(rest, effect-mask, effect-extension)
          Just -> diff(rest, effect-mask.remove-one(label), effect-extension.remove-first-label(label))
  diff(lbls, l, d)


pub type effect-modality
  Absolute(effect-context : effect-context)
  Relative(effect-mask : effect-mask, effect-extension : effect-extension)


pub fun effect-modality/show(em : effect-modality) : string
  match em
    Absolute(ec) -> "[" ++ ec.to-list.show ++ "]"
    Relative(em, ee) -> "<" ++ em.to-list.show ++ " | " ++ ee.to-list.show ++ ">"


// Identity: a relative effect modality that does NOT mask any labels and does NOT add any labels
pub val effect-modality/identity : effect-modality = Relative(empty, empty)

pub fun effect-modality/absolute-from-labelledEffects(efs : list<labelledEffect>) : effect-modality
  Absolute(
    efs.foldl(empty, fn (cntx, ALabelledEffect(ident, type_)) cntx.add-label-end(ident, type_))
  )
pub fun effect-modality/relative-from-labelledEffects(masks : list<stellaIdent>, efs : list<labelledEffect>) : effect-modality
  Relative(
    from-list(masks),
    efs.foldl(empty, fn (cntx, ALabelledEffect(ident, type_)) cntx.add-label-end(ident, type_))
  )

pub fun effect-modality/to-raw(m : effect-modality) : modality
  match m
    Absolute(e) -> ModalityAbs(e.to-labelledEffects)
    Relative(masks, ext) -> ModalityRel(masks.to-list, ext.to-labelledEffects)

// First apply m1, then m2
pub fun effect-modality/compose(m1 : effect-modality, m2 : effect-modality) : effect-modality
  match (m1, m2)
    (_, Absolute(e)) -> Absolute(e)
    (Absolute(e), Relative(l, d)) -> Absolute(extend(d, remove(e, l)))
    (Relative(l1, d1), Relative(l2, d2)) ->
      val (l, d) = difference(l2, d1)
      Relative(l1.merge(l), d2.effect-context/merge(d))

pub fun effect-modality/apply-modality(mu : effect-modality, e : effect-context) : effect-context
  match mu
    Absolute(e') -> e'
    Relative(l, d) -> extend(d, remove(e, l))

pub fun type_/is-absolute(type_ : type_) : bool
  match type_
    TypeUnit -> True
    TypeBool -> True
    TypeNat -> True
    TypeMod(_, ty) -> ty.is-absolute
    TypeTuple(lst) -> lst.all(fn (t) is-absolute(pretend-decreasing(t)))
    TypeSum(t1, t2) -> t1.is-absolute && t2.is-absolute
    TypeList(ty) -> ty.is-absolute
    _ -> False

// [mu][nu][eta]T   ->   (eta . nu . mu, T)
// Note: following [2], modalities compose left-to-right,
// meaning eta applies first in (eta . nu)
pub fun unpeel-effect-modalities(type_ : type_) : (effect-modality, type_)
  fun go(acc, t)
    match t
      TypeMod(ModalityAbs(e), t') -> go(Cons(absolute-from-labelledEffects(e), acc), t')
      TypeMod(ModalityRel(m, e), t') -> go(Cons(relative-from-labelledEffects(m, e), acc), t')
      _ -> (acc, t)
  val (lst, unpeeled-type) = go([], type_)
  // (lst.foldl(identity, fn (acc, m) acc.compose(m)), unpeeled-type)
  // Not sure actually which is correct
  (lst.reverse.foldl(identity, fn (acc, m) acc.compose(m)), unpeeled-type)

pub fun right-residual(m1 : effect-modality, m2 : effect-modality, f : effect-context) : <log<string>> maybe<effect-modality>
  match (m1, m2)
    (_, Absolute(e)) -> Just(Absolute(e))
    (Relative(masks1, extensions1), Relative(masks2, extensions2)) ->
      match extract(f, masks1.diff(masks2))
        Nothing -> Nothing
        Just(new-f) -> Just(Relative(extensions1.to-mask.merge(masks2.diff(masks1)), extensions2.extend(new-f)))
    _ -> Nothing

pub fun across(type_ : type_, nu : effect-modality, f : effect-context) : <log<string>> maybe<(type_)>
  if type_.is-absolute
  then Just(type_)
  else
    val (mu, ty) = type_.unpeel-effect-modalities()
    // log("ACROSS")
    // log(mu.show)
    // log(ty.show)
    // log(nu.show)
    match right-residual(nu, mu, f)
      Nothing -> Nothing
      Just(zeta) -> Just(TypeMod(zeta.to-raw, ty))

pub fun can-transform-type(mu : effect-modality, type_ : type_, nu : effect-modality, e : effect-context) : <log<string>> bool
  if type_.is-absolute
  then True
  else can-transform(mu, nu, e)

pub fun can-transform(mu : effect-modality, nu : effect-modality, f : effect-context) : <log<string>> bool
  match (mu, nu)
    (Absolute(e), _) -> e.is-sub-effect(apply-modality(nu, f))
    (Relative, Relative) ->
      // log("CAN TRANSFORM")
      // log("Mu: " ++ mu.show)
      // log("Nu: " ++ nu.show)
      // log(apply-modality(mu, f).to-list.show)
      // log(apply-modality(nu, f).to-list.show)
      (apply-modality(mu, f)).is-sub-effect(apply-modality(nu, f))
    _ -> False
