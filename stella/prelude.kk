module stella/prelude

import std/core/undiv
import stella/syntax/ast

/* EFFECTS */

pub effect error<a>
  final ctl error(a : a) : b

pub effect log<a>
  fun log(a : a) : ()


/* UTILITIES */

pub fun stellaIdent/(==)(a : stellaIdent, b : stellaIdent) : bool
  a.string == b.string

pub fun type_/(==)(a : type_, b : type_) : bool
  fun eq-lst(l1 : list<type_>, l2 : list<type_>) : bool
    l1 == l2
  match (a, b)
    (TypeAuto, TypeAuto) -> True
    (TypeFun(lst_1, type_1), TypeFun(lst_2, type_2)) -> lst_1 == lst_2 && pretend-decreasing(type_1) == pretend-decreasing(type_2)
    (TypeForAll (idents_1, type_1), TypeForAll (idents_2, type_2)) -> idents_1 == idents_2 && pretend-decreasing(type_1) == pretend-decreasing(type_2)
    (TypeRec (ident_1, type_1), TypeRec (ident_2, type_2)) -> ident_1 == ident_2 && pretend-decreasing(type_1) == pretend-decreasing(type_2)
    (TypeSum (type_l1, type_l2), TypeSum (type_r1, type_r2)) -> pretend-decreasing(type_l1) == pretend-decreasing(type_l2) && pretend-decreasing(type_r1) == pretend-decreasing(type_r2)
    // Maaaaaaaan, Koka's divergence checker is going crazy on this one
    (TypeTuple(lst_1), TypeTuple(lst_2)) -> eq-lst(lst_1, lst_2)
    // TypeRecord (recordFieldTypeList : list<recordFieldType>)
    // TypeVariant (variantFieldTypeList : list<variantFieldType>)
    (TypeList(type_1), TypeList(type_2)) -> pretend-decreasing(type_1) == pretend-decreasing(type_2)
    (TypeBool, TypeBool) -> True
    (TypeNat, TypeNat) -> True
    (TypeUnit, TypeUnit) -> True
    (TypeTop, TypeTop) -> True
    (TypeBottom, TypeBottom) -> True
    (TypeRef(type_1), TypeRef(type_2)) -> pretend-decreasing(type_1) == pretend-decreasing(type_2)
    (TypeVar(ident_1), TypeVar(ident_2)) -> ident_1 == ident_2
    _ -> False

pub fun stellaIdent/show(i : stellaIdent) : string
  i.string

pub fun type_/show(t : type_) : string
  match t
    TypeAuto -> "auto"
    TypeFun(args, return-type) -> "(" ++ args.map(fn (a) pretend-decreasing(a).show).join(", ") ++ ") -> " ++ return-type.show
    // TypeForAll (stellaIdentList : list<stellaIdent>, type_ : type_)
    // TypeRec (stellaIdent : stellaIdent, type_ : type_)
    // TypeSum (type__1 : type_, type__2 : type_)
    // TypeTuple (type_List : list<type_>)
    // TypeRecord (recordFieldTypeList : list<recordFieldType>)
    // TypeVariant (variantFieldTypeList : list<variantFieldType>)
    // TypeList (type_ : type_)
    TypeBool -> "Bool"
    TypeNat -> "Nat"
    TypeUnit -> "Unit"
    // TypeTop
    // TypeBottom
    // TypeRef (type_ : type_)
    TypeVar(ident) -> "var " ++ ident.show
    TypeMod(m, t) -> match m
      ModalityLock -> "lock" ++ t.show
      ModalityRel -> "<rel>" ++ t.show
      ModalityAbs -> "[abs]" ++ t.show
    _ -> "UnexpectedType"

pub fun list/show(?a/show : (a) -> string, l : list<a>) : string
  val ss = l.map(a/show)
  "[" ++ ss.join(", ") ++ "]"

pub fun list/is-prefix(l1 : list<a>, l2 : list<a>, ?a/(==) : (a, a) -> bool) : bool
  match l1
    [] -> True
    Cons(x, xs) -> match l2
      [] -> False
      Cons(y, ys) -> x == y && xs.is-prefix(ys)

pub fun labelledEffect/show((ALabelledEffect(ident, type_)) : labelledEffect) : string
  ident.show ++ " : " ++ type_.show

pub fun labelledEffect/(==)((ALabelledEffect(ident1, type1)) : labelledEffect, ALabelledEffect(ident2, type2) : labelledEffect) : bool
  ident1 == ident2 && type1 == type2

pub fun modality/show(m : modality) : string
  match m
    ModalityLock -> "lock"
    ModalityRel(effect-mask, effect-extention) -> "<" ++ effect-mask.show ++ "|" ++ effect-extention.show ++ ">"
    ModalityAbs(effects) -> "[" ++ effects.show ++ "]"

pub fun modality/(==)(m1 : modality, m2 : modality) : bool
  match (m1, m2)
    (ModalityLock, ModalityLock) -> True
    (ModalityRel(masks1, effects1), ModalityRel(masks2, effects2)) -> masks1 == masks2 && effects1 == effects2
    (ModalityAbs(effects1), ModalityAbs(effects2)) -> effects1 == effects2
    _ -> False

pub fun expr/is-value(expr : expr) : bool
  match expr
    ConstTrue -> True
    ConstFalse -> True
    ConstUnit -> True
    ConstInt -> True
    Succ(n) -> n.is-value
    Var -> True
    Abstraction -> True
    ModBox(_, e) -> e.is-value
    _ -> False

pub fun list/span-map( xs : list<a>, predicate : a -> e either<b, c> ) : e (list<b>,list<c>)
  fun go(ys, acc-b, acc-c)
    match ys
      Cons(y,yy) -> match predicate(y)
        Left(b) -> yy.go(Cons(b, acc-b), acc-c)
        Right(c) -> yy.go(acc-b, Cons(c, acc-c))
      _ -> (acc-b.reverse(), acc-c.reverse())
  go(xs, [], [])
