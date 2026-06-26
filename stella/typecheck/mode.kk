module stella/typecheck/mode

import stella/prelude
import utils/dict
import stella/syntax/ast
import stella/typecheck/modal-effects


/*
A mode is a tuple of sub-modes
*/
pub type mode
  Mode(is-locked : bool, effects : effect-context)

pub fun mode/lock(mode : mode) : mode
  Mode(True, mode.effects)

pub fun mode/update-effects(mode : mode, effects : effect-context) : mode
  Mode(mode.is-locked, effects)

pub val mode/min : mode = Mode(False, empty)


pub fun mode/apply-modality(mode : mode, modality : modality) : mode
  match modality
    ModalityRel(masks, es) ->
      val effects = relative-from-labelledEffects(masks, es).apply-modality(empty)
      mode.update-effects(effects)
    ModalityAbs(es) ->
      val effects = absolute-from-labelledEffects(es).apply-modality(empty)
      mode.update-effects(effects)
    ModalityLock -> mode.lock
