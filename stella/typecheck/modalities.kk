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
      absolute-from-labelledEffects(labelledEffects).compose(effects)
    )
    ModalityRel(idents, labelledEffects) -> Modalities(
      is-locked,
      relative-from-labelledEffects(idents, labelledEffects).compose(effects)
    )
