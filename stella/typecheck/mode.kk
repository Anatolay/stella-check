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


