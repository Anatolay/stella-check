module stella/typecheck/mode

import stella/prelude
import utils/dict
import stella/syntax/ast
import stella/typecheck/modal-effects


/*
A mode is a tuple of sub-modes
*/
pub type mode
  Mode(effects : effect-context)

pub fun mode/update-effects(mode : mode, effects : effect-context) : mode
  Mode(effects)

pub val mode/min : mode = Mode(empty)

// pub fun mode/apply-modality(mode : mode, modality : modality) : mode
//   match modality
//     ModalityRel(masks, new-effects) ->
//       val masked = masks.foldl(mode.effects, fn (efs, ident) efs.remove(ident))
//       val extended = new-effects.foldl(masked, fn (efs, ALabelledEffect(ident, ef)) efs.insert(ident, ef))
//       mode.update-effects(extended)
//     ModalityAbs(effects) -> mode.update-effects(effects.map(fn (ALabelledEffect(i, e)) (i, e)).from-list)
//     ModalityLock -> mode
