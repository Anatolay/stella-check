module stella/typecheck/modalities

import std/core/undiv
import stella/syntax/ast

import stella/typecheck/modal-effects
// pub type effe

pub type modalities
  Modalities(is-locked : bool, effects : effect-modality)

pub val modalities/identity : modalities = Modalities(False, identity)

pub fun modalities/add(Modalities(is-locked, effects) : modalities, modality : modality) : modalities
  match modality
    ModalityLock -> Modalities(True, effects)
    ModalityAbs(labelledEffects) -> Modalities(
      is-locked,
      // absolute-from-labelledEffects(labelledEffects).compose(effects)
      effects.compose(absolute-from-labelledEffects(labelledEffects))
    )
    ModalityRel(idents, labelledEffects) -> Modalities(
      is-locked,
      // relative-from-labelledEffects(idents, labelledEffects).compose(effects)
      effects.compose(relative-from-labelledEffects(idents, labelledEffects))
    )

pub fun modalities/add-many(modalities : modalities, modality-list : list<modality>) : modalities
  modality-list.foldl(modalities, add)

// [mu][nu][eta]T   ->   (eta . nu . mu, T)
// Note: following [1], modalities compose left-to-right,
// meaning eta applies first in (eta . nu)
pub fun unpeel-modalities(type_ : type_) : (modalities, type_)
  fun go(acc, t)
    match t
      TypeMod(m, t') -> go(Cons(m, acc), t')
      _ -> (acc, t)
  val (lst, unpeeled-type) = go([], type_)
  (identity.add-many(lst), unpeeled-type)
