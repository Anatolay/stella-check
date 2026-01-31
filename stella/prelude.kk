module stella/prelude

import std/core/undiv
import stella/syntax/ast

/* EFFECTS */

pub effect error<a>
  final ctl error(a : a) : ()

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

pub fun type_/show(t : type_) : _ string
  match t
    TypeAuto -> "auto"
    TypeFun(args, return-type) -> "(" ++ args.show ++ ") -> " ++ return-type.show
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
    _ -> "UnexpectedType"

pub fun list/show(?a/show : (a) -> string, l : list<a>) : string
  val ss = l.map(a/show)
  "[" ++ ss.join(", ") ++ "]"