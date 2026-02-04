module stella/typecheck/modal-effects

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

fun remove-first-label(ec : effect-extension, label : stellaIdent) : effect-extension
  match ec.lookup(label)
    Nothing -> ec
    Just([]) -> ec.remove(label)
    Just(Cons(_, [])) -> ec.remove(label)
    Just(Cons(_, rest)) -> ec.insert(label, rest)

fun add-label(ec : effect-extension, label : stellaIdent, type_ : type_) : effect-extension
  match ec.lookup(label)
    Nothing -> ec.insert(label, [type_])
    Just(lst) -> ec.insert(label, lst ++ [type_])

// D + E  =  D,E
fun extend(d : effect-extension, e : effect-context) : effect-context
  d.merge(e)
// . -- L  =  .         (l:P, E) -- L  =  ...
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

// Identity: a relative effect modality that does NOT mask any labels and does NOT add any labels
pub val effect-modality/identity : effect-modality = Relative(empty, empty)

pub fun effect-modality/absolute-from-labelledEffects(efs : list<labelledEffect>) : effect-modality
  Absolute(
    efs.foldl(empty, fn (cntx, ALabelledEffect(ident, type_)) cntx.add-label(ident, type_))
  )
pub fun effect-modality/relative-from-labelledEffects(masks : list<stellaIdent>, efs : list<labelledEffect>) : effect-modality
  Relative(
    from-list(masks),
    efs.foldl(empty, fn (cntx, ALabelledEffect(ident, type_)) cntx.add-label(ident, type_))
  )

// First apply m1, then m2
pub fun effect-modality/compose(m1 : effect-modality, m2 : effect-modality) : effect-modality
  match (m1, m2)
    (_, Absolute(e)) -> Absolute(e)
    (Absolute(e), Relative(l, d)) -> Absolute(extend(d, remove(e, l)))
    (Relative(l1, d1), Relative(l2, d2)) ->
      val (l, d) = difference(l2, d1)
      Relative(l1.merge(l), d2.merge(d))
