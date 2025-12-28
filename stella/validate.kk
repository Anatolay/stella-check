module stella/validate

import stella/syntax/ast
import std/core/undiv
import stella/utils

pub effect validate-error
  final ctl validate-error(msg : string) : ()

effect validate
  fun check(extensions : string) : ()
  fun check-any(extensions : list<string>) : ()

/*
Stella supports a variety of extensions, some of which
conflict with each other. However, the generated AST
contains all possible nodes for all the extensions available.

`validate` checks that for each AST node present,
the corresponding extension is declared in the begginning
of a stella program.
*/
pub fun validate(program : program) : <validate-error> ()
  val AProgram(_, _, declarations) = program
  with handler
    fun check(extension : string)
      if program.has-extension(extension)
      then ()
      else validate-error("Expected extension " ++ extension ++ " to be enabled")
    fun check-any(extensions : list<string>)
      if extensions.any(fn (e) program.has-extension(e))
      then ()
      else validate-error("Expected at least one of the extensions to be enabled: " ++ extensions.show)
  declarations.map(validate-declaration)
  ()

fun validate-declaration(decl : decl) : <validate> ()
  match decl
    DeclFun(_, _, paramDeclList, returnType, throwType, declList, expr) ->
      paramDeclList.map(validate-paramDecl)
      match returnType
        NoReturnType -> ()
        SomeReturnType(type_) -> validate-type(type_)
      match throwType
        NoThrowType -> ()
        SomeThrowType(types) ->
          check("#exceptions")
          types.map(validate-type)
          ()
      declList.map(fn (d) validate-declaration(pretend-decreasing(d)))
      validate-expr(expr)
    // DeclFunGeneric
    // DeclFunMod
    // DeclTypeAlias
    // DeclExceptionType
    // DeclExceptionVariant
    _ -> ()

fun validate-paramDecl(AParamDecl(_, type_) : paramDecl) : <validate> ()
  validate-type(type_)

fun validate-type(type_ : type_) : <validate> ()
  match type_
    // TypeAuto
    // TypeFun (type_List : list<type_>, type_ : type_)
    // TypeForAll (stellaIdentList : list<stellaIdent>, type_ : type_)
    // TypeRec (stellaIdent : stellaIdent, type_ : type_)
    TypeSum (type__1 : type_, type__2 : type_) ->
      check("#sum-types")
      validate-type(type__1)
      validate-type(type__2)
    TypeTuple (type_List) ->
      if type_List.length == 2
      then check-any(["#pairs", "#tuples"])
      else check("#tuples")
      type_List.map(fn (t) validate-type(pretend-decreasing(t)))
      ()
    TypeRecord(recordFieldTypeList) ->
      check("#records")
      recordFieldTypeList.map(fn (ARecordFieldType(_, typ)) validate-type(pretend-decreasing(typ)))
      ()
    TypeVariant (variantFieldTypeList) ->
      check("#variants")
      fun from-optional(op : optionalTyping) : maybe<type_>
        match op
          NoTyping -> Nothing
          SomeTyping(typ) -> Just(typ)
      val types = variantFieldTypeList.filter-map(fn (AVariantFieldType(_, op)) from-optional(op))
      types.map(fn (t) validate-type(pretend-decreasing(t)))
      ()
    // TypeList (type_ : type_)
    TypeBool -> ()
    TypeNat -> ()
    TypeUnit -> check("#unit-type")
    // TypeTop
    // TypeBottom
    // TypeRef (type_ : type_)
    // TypeVar (stellaIdent : stellaIdent)
    _ -> ()

fun validate-recordFieldType(ARecordFieldType(_, type_)) : <validate> ()
  validate-type(pretend-decreasing(type_))

fun validate-expr(expr : expr) : <validate> ()
  match expr
    _ -> ()
