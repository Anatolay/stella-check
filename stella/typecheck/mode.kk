module stella/typecheck/mode

import stella/prelude
import utils/dict
import stella/syntax/ast

/*
A mode is a tuple of sub-modes
*/
pub type mode
  Mode(effects : dict<stellaIdent, type_>)

pub fun mode/update-effects(mode : mode, effects : dict<stellaIdent, type_>) : mode
  Mode(effects)

pub val mode/min : mode = Mode(empty)
