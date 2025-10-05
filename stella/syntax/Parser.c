/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         syntax_parse
#define yylex           syntax_lex
#define yyerror         syntax_error
#define yydebug         syntax_debug
#define yynerrs         syntax_nerrs

/* First part of user prologue.  */
#line 20 "Syntax.y"

/* Begin C preamble code */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Absyn.h"

#define YYMAXDEPTH 10000000

/* The type yyscan_t is defined by flex, but we need it in the parser already. */
#ifndef YY_TYPEDEF_YY_SCANNER_T
#define YY_TYPEDEF_YY_SCANNER_T
typedef void* yyscan_t;
#endif

typedef struct yy_buffer_state *YY_BUFFER_STATE;
extern YY_BUFFER_STATE syntax__scan_string(const char *str, yyscan_t scanner);
extern void syntax__delete_buffer(YY_BUFFER_STATE buf, yyscan_t scanner);

extern void syntax_lex_destroy(yyscan_t scanner);
extern char* syntax_get_text(yyscan_t scanner);

extern yyscan_t syntax__initialize_lexer(FILE * inp);

/* List reversal functions. */
ListStellaIdent reverseListStellaIdent(ListStellaIdent l)
{
  ListStellaIdent prev = 0;
  ListStellaIdent tmp = 0;
  while (l)
  {
    tmp = l->liststellaident_;
    l->liststellaident_ = prev;
    prev = l;
    l = tmp;
  }
  return prev;
}
ListExtensionName reverseListExtensionName(ListExtensionName l)
{
  ListExtensionName prev = 0;
  ListExtensionName tmp = 0;
  while (l)
  {
    tmp = l->listextensionname_;
    l->listextensionname_ = prev;
    prev = l;
    l = tmp;
  }
  return prev;
}
ListExtension reverseListExtension(ListExtension l)
{
  ListExtension prev = 0;
  ListExtension tmp = 0;
  while (l)
  {
    tmp = l->listextension_;
    l->listextension_ = prev;
    prev = l;
    l = tmp;
  }
  return prev;
}
ListDecl reverseListDecl(ListDecl l)
{
  ListDecl prev = 0;
  ListDecl tmp = 0;
  while (l)
  {
    tmp = l->listdecl_;
    l->listdecl_ = prev;
    prev = l;
    l = tmp;
  }
  return prev;
}
ListLocalDecl reverseListLocalDecl(ListLocalDecl l)
{
  ListLocalDecl prev = 0;
  ListLocalDecl tmp = 0;
  while (l)
  {
    tmp = l->listlocaldecl_;
    l->listlocaldecl_ = prev;
    prev = l;
    l = tmp;
  }
  return prev;
}
ListAnnotation reverseListAnnotation(ListAnnotation l)
{
  ListAnnotation prev = 0;
  ListAnnotation tmp = 0;
  while (l)
  {
    tmp = l->listannotation_;
    l->listannotation_ = prev;
    prev = l;
    l = tmp;
  }
  return prev;
}
ListParamDecl reverseListParamDecl(ListParamDecl l)
{
  ListParamDecl prev = 0;
  ListParamDecl tmp = 0;
  while (l)
  {
    tmp = l->listparamdecl_;
    l->listparamdecl_ = prev;
    prev = l;
    l = tmp;
  }
  return prev;
}
ListType reverseListType(ListType l)
{
  ListType prev = 0;
  ListType tmp = 0;
  while (l)
  {
    tmp = l->listtype_;
    l->listtype_ = prev;
    prev = l;
    l = tmp;
  }
  return prev;
}
ListMatchCase reverseListMatchCase(ListMatchCase l)
{
  ListMatchCase prev = 0;
  ListMatchCase tmp = 0;
  while (l)
  {
    tmp = l->listmatchcase_;
    l->listmatchcase_ = prev;
    prev = l;
    l = tmp;
  }
  return prev;
}
ListPattern reverseListPattern(ListPattern l)
{
  ListPattern prev = 0;
  ListPattern tmp = 0;
  while (l)
  {
    tmp = l->listpattern_;
    l->listpattern_ = prev;
    prev = l;
    l = tmp;
  }
  return prev;
}
ListLabelledPattern reverseListLabelledPattern(ListLabelledPattern l)
{
  ListLabelledPattern prev = 0;
  ListLabelledPattern tmp = 0;
  while (l)
  {
    tmp = l->listlabelledpattern_;
    l->listlabelledpattern_ = prev;
    prev = l;
    l = tmp;
  }
  return prev;
}
ListBinding reverseListBinding(ListBinding l)
{
  ListBinding prev = 0;
  ListBinding tmp = 0;
  while (l)
  {
    tmp = l->listbinding_;
    l->listbinding_ = prev;
    prev = l;
    l = tmp;
  }
  return prev;
}
ListExpr reverseListExpr(ListExpr l)
{
  ListExpr prev = 0;
  ListExpr tmp = 0;
  while (l)
  {
    tmp = l->listexpr_;
    l->listexpr_ = prev;
    prev = l;
    l = tmp;
  }
  return prev;
}
ListPatternBinding reverseListPatternBinding(ListPatternBinding l)
{
  ListPatternBinding prev = 0;
  ListPatternBinding tmp = 0;
  while (l)
  {
    tmp = l->listpatternbinding_;
    l->listpatternbinding_ = prev;
    prev = l;
    l = tmp;
  }
  return prev;
}
ListVariantFieldType reverseListVariantFieldType(ListVariantFieldType l)
{
  ListVariantFieldType prev = 0;
  ListVariantFieldType tmp = 0;
  while (l)
  {
    tmp = l->listvariantfieldtype_;
    l->listvariantfieldtype_ = prev;
    prev = l;
    l = tmp;
  }
  return prev;
}
ListRecordFieldType reverseListRecordFieldType(ListRecordFieldType l)
{
  ListRecordFieldType prev = 0;
  ListRecordFieldType tmp = 0;
  while (l)
  {
    tmp = l->listrecordfieldtype_;
    l->listrecordfieldtype_ = prev;
    prev = l;
    l = tmp;
  }
  return prev;
}

/* End C preamble code */

#line 314 "Parser.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "Bison.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL__ERROR_ = 3,                    /* _ERROR_  */
  YYSYMBOL__BANGEQ = 4,                    /* _BANGEQ  */
  YYSYMBOL__AMP = 5,                       /* _AMP  */
  YYSYMBOL__LPAREN = 6,                    /* _LPAREN  */
  YYSYMBOL__RPAREN = 7,                    /* _RPAREN  */
  YYSYMBOL__STAR = 8,                      /* _STAR  */
  YYSYMBOL__PLUS = 9,                      /* _PLUS  */
  YYSYMBOL__COMMA = 10,                    /* _COMMA  */
  YYSYMBOL__MINUS = 11,                    /* _MINUS  */
  YYSYMBOL__RARROW = 12,                   /* _RARROW  */
  YYSYMBOL__DOT = 13,                      /* _DOT  */
  YYSYMBOL__SLASH = 14,                    /* _SLASH  */
  YYSYMBOL__COLON = 15,                    /* _COLON  */
  YYSYMBOL__COLONEQ = 16,                  /* _COLONEQ  */
  YYSYMBOL__SEMI = 17,                     /* _SEMI  */
  YYSYMBOL__LT = 18,                       /* _LT  */
  YYSYMBOL__LDARROW = 19,                  /* _LDARROW  */
  YYSYMBOL__SYMB_13 = 20,                  /* _SYMB_13  */
  YYSYMBOL__EQ = 21,                       /* _EQ  */
  YYSYMBOL__DEQ = 22,                      /* _DEQ  */
  YYSYMBOL__RDARROW = 23,                  /* _RDARROW  */
  YYSYMBOL__GT = 24,                       /* _GT  */
  YYSYMBOL__GTEQ = 25,                     /* _GTEQ  */
  YYSYMBOL__KW_Bool = 26,                  /* _KW_Bool  */
  YYSYMBOL__KW_Bot = 27,                   /* _KW_Bot  */
  YYSYMBOL__SYMB_27 = 28,                  /* _SYMB_27  */
  YYSYMBOL__SYMB_28 = 29,                  /* _SYMB_28  */
  YYSYMBOL__SYMB_29 = 30,                  /* _SYMB_29  */
  YYSYMBOL__KW_Nat = 31,                   /* _KW_Nat  */
  YYSYMBOL__SYMB_32 = 32,                  /* _SYMB_32  */
  YYSYMBOL__SYMB_31 = 33,                  /* _SYMB_31  */
  YYSYMBOL__SYMB_33 = 34,                  /* _SYMB_33  */
  YYSYMBOL__KW_Top = 35,                   /* _KW_Top  */
  YYSYMBOL__KW_Unit = 36,                  /* _KW_Unit  */
  YYSYMBOL__LBRACK = 37,                   /* _LBRACK  */
  YYSYMBOL__RBRACK = 38,                   /* _RBRACK  */
  YYSYMBOL__KW_and = 39,                   /* _KW_and  */
  YYSYMBOL__KW_as = 40,                    /* _KW_as  */
  YYSYMBOL__KW_auto = 41,                  /* _KW_auto  */
  YYSYMBOL__KW_cast = 42,                  /* _KW_cast  */
  YYSYMBOL__KW_catch = 43,                 /* _KW_catch  */
  YYSYMBOL__KW_cons = 44,                  /* _KW_cons  */
  YYSYMBOL__KW_core = 45,                  /* _KW_core  */
  YYSYMBOL__KW_else = 46,                  /* _KW_else  */
  YYSYMBOL__KW_exception = 47,             /* _KW_exception  */
  YYSYMBOL__KW_extend = 48,                /* _KW_extend  */
  YYSYMBOL__KW_false = 49,                 /* _KW_false  */
  YYSYMBOL__KW_fix = 50,                   /* _KW_fix  */
  YYSYMBOL__KW_fn = 51,                    /* _KW_fn  */
  YYSYMBOL__KW_fold = 52,                  /* _KW_fold  */
  YYSYMBOL__KW_forall = 53,                /* _KW_forall  */
  YYSYMBOL__KW_generic = 54,               /* _KW_generic  */
  YYSYMBOL__KW_if = 55,                    /* _KW_if  */
  YYSYMBOL__KW_in = 56,                    /* _KW_in  */
  YYSYMBOL__KW_inl = 57,                   /* _KW_inl  */
  YYSYMBOL__KW_inline = 58,                /* _KW_inline  */
  YYSYMBOL__KW_inr = 59,                   /* _KW_inr  */
  YYSYMBOL__KW_language = 60,              /* _KW_language  */
  YYSYMBOL__KW_let = 61,                   /* _KW_let  */
  YYSYMBOL__KW_letrec = 62,                /* _KW_letrec  */
  YYSYMBOL__KW_lock = 63,                  /* _KW_lock  */
  YYSYMBOL__KW_match = 64,                 /* _KW_match  */
  YYSYMBOL__KW_mod = 65,                   /* _KW_mod  */
  YYSYMBOL__KW_new = 66,                   /* _KW_new  */
  YYSYMBOL__KW_not = 67,                   /* _KW_not  */
  YYSYMBOL__KW_or = 68,                    /* _KW_or  */
  YYSYMBOL__SYMB_30 = 69,                  /* _SYMB_30  */
  YYSYMBOL__KW_return = 70,                /* _KW_return  */
  YYSYMBOL__KW_succ = 71,                  /* _KW_succ  */
  YYSYMBOL__KW_then = 72,                  /* _KW_then  */
  YYSYMBOL__KW_throw = 73,                 /* _KW_throw  */
  YYSYMBOL__KW_throws = 74,                /* _KW_throws  */
  YYSYMBOL__KW_true = 75,                  /* _KW_true  */
  YYSYMBOL__KW_try = 76,                   /* _KW_try  */
  YYSYMBOL__KW_type = 77,                  /* _KW_type  */
  YYSYMBOL__KW_unfold = 78,                /* _KW_unfold  */
  YYSYMBOL__KW_unit = 79,                  /* _KW_unit  */
  YYSYMBOL__KW_variant = 80,               /* _KW_variant  */
  YYSYMBOL__KW_with = 81,                  /* _KW_with  */
  YYSYMBOL__LBRACE = 82,                   /* _LBRACE  */
  YYSYMBOL__BAR = 83,                      /* _BAR  */
  YYSYMBOL__SYMB_14 = 84,                  /* _SYMB_14  */
  YYSYMBOL__RBRACE = 85,                   /* _RBRACE  */
  YYSYMBOL__KW_82 = 86,                    /* _KW_82  */
  YYSYMBOL_T_ExtensionName = 87,           /* T_ExtensionName  */
  YYSYMBOL_T_MemoryAddress = 88,           /* T_MemoryAddress  */
  YYSYMBOL_T_StellaIdent = 89,             /* T_StellaIdent  */
  YYSYMBOL__INTEGER_ = 90,                 /* _INTEGER_  */
  YYSYMBOL_YYACCEPT = 91,                  /* $accept  */
  YYSYMBOL_Program = 92,                   /* Program  */
  YYSYMBOL_ListStellaIdent = 93,           /* ListStellaIdent  */
  YYSYMBOL_LanguageDecl = 94,              /* LanguageDecl  */
  YYSYMBOL_Extension = 95,                 /* Extension  */
  YYSYMBOL_ListExtensionName = 96,         /* ListExtensionName  */
  YYSYMBOL_ListExtension = 97,             /* ListExtension  */
  YYSYMBOL_Decl = 98,                      /* Decl  */
  YYSYMBOL_ListDecl = 99,                  /* ListDecl  */
  YYSYMBOL_Annotation = 100,               /* Annotation  */
  YYSYMBOL_ListAnnotation = 101,           /* ListAnnotation  */
  YYSYMBOL_ParamDecl = 102,                /* ParamDecl  */
  YYSYMBOL_ListParamDecl = 103,            /* ListParamDecl  */
  YYSYMBOL_ReturnType = 104,               /* ReturnType  */
  YYSYMBOL_ThrowType = 105,                /* ThrowType  */
  YYSYMBOL_Type9 = 106,                    /* Type9  */
  YYSYMBOL_ListType9 = 107,                /* ListType9  */
  YYSYMBOL_MatchCase = 108,                /* MatchCase  */
  YYSYMBOL_ListMatchCase = 109,            /* ListMatchCase  */
  YYSYMBOL_OptionalTyping = 110,           /* OptionalTyping  */
  YYSYMBOL_PatternData = 111,              /* PatternData  */
  YYSYMBOL_ExprData = 112,                 /* ExprData  */
  YYSYMBOL_Pattern = 113,                  /* Pattern  */
  YYSYMBOL_ListPattern = 114,              /* ListPattern  */
  YYSYMBOL_LabelledPattern = 115,          /* LabelledPattern  */
  YYSYMBOL_ListLabelledPattern = 116,      /* ListLabelledPattern  */
  YYSYMBOL_Binding = 117,                  /* Binding  */
  YYSYMBOL_ListBinding = 118,              /* ListBinding  */
  YYSYMBOL_Expr = 119,                     /* Expr  */
  YYSYMBOL_ListExpr = 120,                 /* ListExpr  */
  YYSYMBOL_Expr1 = 121,                    /* Expr1  */
  YYSYMBOL_PatternBinding = 122,           /* PatternBinding  */
  YYSYMBOL_ListPatternBinding = 123,       /* ListPatternBinding  */
  YYSYMBOL_Expr2 = 124,                    /* Expr2  */
  YYSYMBOL_Mod = 125,                      /* Mod  */
  YYSYMBOL_Expr3 = 126,                    /* Expr3  */
  YYSYMBOL_Expr4 = 127,                    /* Expr4  */
  YYSYMBOL_Expr5 = 128,                    /* Expr5  */
  YYSYMBOL_Expr6 = 129,                    /* Expr6  */
  YYSYMBOL_Expr7 = 130,                    /* Expr7  */
  YYSYMBOL_Type = 131,                     /* Type  */
  YYSYMBOL_Type1 = 132,                    /* Type1  */
  YYSYMBOL_Type2 = 133,                    /* Type2  */
  YYSYMBOL_Type3 = 134,                    /* Type3  */
  YYSYMBOL_ListType = 135,                 /* ListType  */
  YYSYMBOL_VariantFieldType = 136,         /* VariantFieldType  */
  YYSYMBOL_ListVariantFieldType = 137,     /* ListVariantFieldType  */
  YYSYMBOL_RecordFieldType = 138,          /* RecordFieldType  */
  YYSYMBOL_ListRecordFieldType = 139       /* ListRecordFieldType  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;


/* Second part of user prologue.  */
#line 305 "Syntax.y"

void yyerror(YYLTYPE *loc, yyscan_t scanner, YYSTYPE *result, const char *msg)
{
  fprintf(stderr, "error: %d,%d: %s at %s\n",
    loc->first_line, loc->first_column, msg, syntax_get_text(scanner));
}

int yyparse(yyscan_t scanner, YYSTYPE *result);

extern int yylex(YYSTYPE *lvalp, YYLTYPE *llocp, yyscan_t scanner);

#line 499 "Parser.c"


#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   696

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  91
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  49
/* YYNRULES -- Number of rules.  */
#define YYNRULES  174
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  446

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   345


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   463,   463,   465,   466,   467,   469,   471,   473,   474,
     475,   477,   478,   480,   481,   482,   483,   484,   485,   487,
     488,   495,   497,   498,   500,   502,   503,   504,   506,   507,
     509,   510,   512,   514,   515,   517,   519,   520,   521,   523,
     524,   526,   527,   529,   530,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   541,   542,   543,   544,   545,   546,
     547,   548,   550,   551,   552,   554,   556,   557,   559,   561,
     562,   564,   565,   566,   567,   568,   569,   571,   572,   573,
     575,   576,   577,   579,   581,   582,   584,   585,   586,   587,
     588,   589,   590,   595,   597,   598,   599,   600,   601,   602,
     603,   604,   605,   606,   607,   609,   610,   611,   612,   614,
     615,   616,   618,   619,   620,   621,   622,   623,   624,   625,
     626,   627,   628,   629,   630,   631,   632,   633,   634,   635,
     636,   637,   638,   639,   640,   641,   642,   643,   645,   646,
     647,   648,   649,   650,   651,   653,   654,   655,   656,   657,
     659,   660,   662,   663,   664,   665,   666,   668,   669,   670,
     671,   672,   673,   674,   675,   677,   678,   679,   681,   683,
     684,   685,   687,   689,   690
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "_ERROR_", "_BANGEQ",
  "_AMP", "_LPAREN", "_RPAREN", "_STAR", "_PLUS", "_COMMA", "_MINUS",
  "_RARROW", "_DOT", "_SLASH", "_COLON", "_COLONEQ", "_SEMI", "_LT",
  "_LDARROW", "_SYMB_13", "_EQ", "_DEQ", "_RDARROW", "_GT", "_GTEQ",
  "_KW_Bool", "_KW_Bot", "_SYMB_27", "_SYMB_28", "_SYMB_29", "_KW_Nat",
  "_SYMB_32", "_SYMB_31", "_SYMB_33", "_KW_Top", "_KW_Unit", "_LBRACK",
  "_RBRACK", "_KW_and", "_KW_as", "_KW_auto", "_KW_cast", "_KW_catch",
  "_KW_cons", "_KW_core", "_KW_else", "_KW_exception", "_KW_extend",
  "_KW_false", "_KW_fix", "_KW_fn", "_KW_fold", "_KW_forall",
  "_KW_generic", "_KW_if", "_KW_in", "_KW_inl", "_KW_inline", "_KW_inr",
  "_KW_language", "_KW_let", "_KW_letrec", "_KW_lock", "_KW_match",
  "_KW_mod", "_KW_new", "_KW_not", "_KW_or", "_SYMB_30", "_KW_return",
  "_KW_succ", "_KW_then", "_KW_throw", "_KW_throws", "_KW_true", "_KW_try",
  "_KW_type", "_KW_unfold", "_KW_unit", "_KW_variant", "_KW_with",
  "_LBRACE", "_BAR", "_SYMB_14", "_RBRACE", "_KW_82", "T_ExtensionName",
  "T_MemoryAddress", "T_StellaIdent", "_INTEGER_", "$accept", "Program",
  "ListStellaIdent", "LanguageDecl", "Extension", "ListExtensionName",
  "ListExtension", "Decl", "ListDecl", "Annotation", "ListAnnotation",
  "ParamDecl", "ListParamDecl", "ReturnType", "ThrowType", "Type9",
  "ListType9", "MatchCase", "ListMatchCase", "OptionalTyping",
  "PatternData", "ExprData", "Pattern", "ListPattern", "LabelledPattern",
  "ListLabelledPattern", "Binding", "ListBinding", "Expr", "ListExpr",
  "Expr1", "PatternBinding", "ListPatternBinding", "Expr2", "Mod", "Expr3",
  "Expr4", "Expr5", "Expr6", "Expr7", "Type", "Type1", "Type2", "Type3",
  "ListType", "VariantFieldType", "ListVariantFieldType",
  "RecordFieldType", "ListRecordFieldType", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-313)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-3)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -44,   -25,    38,  -313,    28,  -313,    -6,  -313,   -29,    49,
      17,   -18,  -313,   -37,    -8,  -313,   186,    74,  -313,    67,
      16,    94,    29,    75,  -313,    92,  -313,   -18,   552,   119,
     552,   138,    65,    96,  -313,   241,   552,    71,  -313,  -313,
    -313,  -313,  -313,   552,  -313,   161,   107,   565,   111,  -313,
    -313,  -313,   193,  -313,   552,  -313,   114,   171,  -313,   175,
    -313,   213,   206,   215,   144,   192,   552,   231,   230,   238,
     235,   169,   245,   172,   243,   241,  -313,   244,   248,   257,
     107,   218,  -313,   552,  -313,    71,  -313,  -313,   259,   107,
     552,   552,   552,  -313,   181,  -313,   552,  -313,   552,   114,
     261,   233,   185,  -313,  -313,   263,  -313,  -313,  -313,  -313,
     238,  -313,  -313,  -313,  -313,   552,   205,   274,   275,   552,
    -313,   552,   214,   114,   114,  -313,   287,  -313,  -313,  -313,
     288,   291,   552,    76,   261,   261,  -313,   285,   205,   205,
     285,   160,   210,   294,   295,   296,   298,   300,   301,   285,
     302,  -313,   303,   304,   284,   289,   413,   305,   306,   578,
     578,   477,   290,   318,   322,  -313,   325,   327,  -313,   256,
     308,  -313,   349,  -313,  -313,  -313,   258,   324,   332,   139,
      20,  -313,    23,  -313,   271,   277,   355,  -313,   344,   285,
     285,   285,   285,   285,   285,   356,   330,   285,   285,   114,
     552,   107,   299,   285,   285,   578,   281,   578,   366,  -313,
     370,   374,   378,  -313,  -313,   606,  -313,  -313,    56,   375,
     331,   333,   310,    96,   285,   285,   285,   285,   285,   552,
     367,   380,   309,   311,  -313,   285,   413,   477,   160,   160,
     477,   477,   477,   477,   477,   241,   357,   160,   160,   160,
     160,   285,    10,   552,  -313,  -313,  -313,   285,   321,   388,
     395,   400,   402,   405,   407,   285,  -313,   416,   422,   423,
     385,   394,   413,   427,   428,    25,   415,     4,   406,   578,
     578,   578,   578,   419,   363,   439,   368,   285,   552,   411,
     578,   285,   285,   578,   414,   447,   448,   449,   451,   376,
     421,   285,   371,  -313,  -313,  -313,  -313,    14,    20,    20,
      14,    14,    14,    14,    14,  -313,   241,    20,  -313,  -313,
    -313,   459,  -313,  -313,   429,   128,   129,  -313,  -313,  -313,
    -313,  -313,  -313,  -313,   285,  -313,   285,  -313,   387,    52,
     285,   425,  -313,  -313,  -313,   578,   578,   389,   578,  -313,
      11,    50,    95,   109,   578,  -313,   386,  -313,  -313,  -313,
     552,  -313,  -313,  -313,   391,   396,    55,   408,  -313,  -313,
    -313,  -313,   -31,    52,  -313,   367,  -313,  -313,  -313,  -313,
     285,   285,   466,   480,   424,  -313,  -313,   413,   145,    -9,
    -313,  -313,   578,  -313,  -313,  -313,    -9,   419,  -313,  -313,
     578,  -313,   285,   285,   453,   417,   418,  -313,   430,   431,
     285,  -313,   285,  -313,  -313,   155,  -313,  -313,   432,   552,
     578,   285,  -313,  -313,   489,   433,  -313,  -313,   426,   105,
     434,  -313,  -313,   578,   285,  -313,   142,   435,   285,  -313,
     437,   442,   443,   285,   445,  -313
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,    11,     0,     1,    19,     6,     0,     0,
      22,     8,    12,     0,     0,    20,     0,     9,     7,     0,
       0,     0,     0,     0,    21,     0,    23,     8,     0,     0,
       0,     0,     0,     0,    10,     0,     0,   169,   157,   161,
     158,   160,   159,     0,   145,     0,     3,   165,     0,   163,
      17,   149,   151,   156,     0,    16,    25,     0,    93,     0,
     162,     0,    39,   170,     0,     0,   165,     4,     0,   163,
     166,     0,   173,     0,     0,     0,    18,     0,    26,     0,
       3,     0,   164,     0,   168,   169,   154,   155,     0,     3,
       0,     0,   165,   152,     0,   153,     0,   150,     0,    25,
      28,     0,     0,    40,   171,     0,     5,   147,   172,   167,
       0,   174,   148,    24,    27,     0,    30,     0,     0,     0,
      29,     0,     0,    25,    25,   146,    33,    31,    32,    19,
       0,     0,     0,    22,    28,    28,    34,     0,    30,    30,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    77,
       0,   139,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   122,     0,     0,   138,     0,
       0,   140,    77,   142,   143,   141,     0,    76,    82,    92,
     104,   108,   111,   137,     0,     0,     0,   110,    43,     0,
       0,     0,     0,     0,     0,    78,     0,     0,     0,    25,
       0,     3,     0,     0,     0,     0,     0,    62,     0,    55,
       0,     0,     0,    56,    57,    62,    60,    58,     0,    84,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     143,    69,     0,     0,    13,    72,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    77,     0,   165,    19,    19,   144,     0,     0,     0,
       0,     0,     0,     0,     0,    77,   100,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    41,    63,     0,     0,
       0,     0,     0,    60,     0,    66,     0,     0,     0,     0,
       0,     0,     0,    36,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   117,   116,    71,    80,    91,   101,   102,
      86,    87,    90,    88,    89,    94,     0,   103,   105,   106,
     107,     0,   114,   115,     0,    22,    22,    44,    98,   119,
     120,   121,   132,   131,     0,    79,     0,   133,     0,     0,
       0,     0,   127,   128,    61,     0,     0,     0,    62,    52,
       0,     0,     0,     0,     0,    50,     0,    51,    83,    46,
       0,    85,    73,    74,    37,     0,     0,     0,   109,   130,
     129,   123,     0,     0,    68,     0,    70,    95,   112,   113,
       0,     0,     0,     0,     0,   135,    75,     0,     0,    42,
      47,    64,     0,    48,    49,    59,    65,     0,    67,    45,
      36,    99,     0,     0,     0,     0,     0,   136,     0,     0,
       0,   118,     0,    81,    54,     0,    38,    35,     0,     0,
       0,     0,    14,    15,     0,     0,    53,    97,     0,     0,
       0,   134,    96,     0,     0,   125,     0,     0,     0,   124,
       0,     0,     0,     0,     0,   126
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -313,  -313,   -71,  -313,  -313,   471,  -313,  -313,  -122,  -313,
    -313,  -313,   -75,    21,    32,  -313,   372,  -313,   112,  -313,
    -313,  -313,  -168,  -210,  -313,   157,  -313,   222,  -118,  -162,
    -153,  -313,  -154,   377,   312,    46,   -24,  -128,  -313,  -312,
     -28,  -313,   -34,  -313,   -62,  -313,   446,  -313,   438
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,    68,     3,     9,    18,     6,    15,    10,    26,
      16,    78,    79,   116,   122,   126,   127,   364,   365,    84,
     347,   258,   218,   278,   285,   286,   231,   232,   195,   196,
     177,   219,   220,   178,    59,   179,   180,   181,   182,   183,
      70,    51,    52,    53,    71,    63,    64,    72,    73
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      50,    60,    55,   202,    88,   284,   221,   133,    61,   101,
     233,   404,   405,   187,   348,    65,     1,    -2,   106,   176,
       4,   392,   186,   238,   114,   239,    76,   385,   248,   251,
     109,   288,   344,   289,   249,   345,   252,   275,     5,   277,
      19,    97,     8,    20,   288,     7,   289,   277,   130,   131,
     406,   288,    11,   289,   245,   103,   246,   393,   140,   250,
     253,   407,   107,   108,    13,   288,    12,   289,   112,    17,
     113,   259,   260,   261,   262,   263,   264,   287,   402,   267,
     268,    21,   247,   306,    27,   273,   274,   120,    28,   321,
     288,   125,   289,   128,    14,   288,   288,   289,   289,   322,
     323,   151,   394,   335,   128,    29,   295,   296,   297,   298,
     299,   350,   351,   352,   353,    30,   395,   305,    31,   341,
     318,   319,   320,    13,   269,   366,    32,   168,   434,    33,
     271,   171,   325,   326,    54,   288,   361,   289,   391,   327,
     173,   174,   175,   237,    56,   288,   137,   289,   238,   288,
     239,   289,   414,    14,    57,   138,   139,   240,   241,    58,
      62,   242,   426,   243,   244,   438,   140,    66,   141,   358,
     184,   185,   270,   362,   363,    13,    13,   388,   389,   245,
     277,   246,   288,   374,   289,   288,   396,   289,   143,   144,
     145,   324,   146,   147,   148,   288,    67,   289,   380,   381,
      74,   300,    75,    77,   150,    14,    14,   247,    80,   151,
     152,   315,   154,    81,   308,   309,   382,   157,   383,   158,
      82,    83,   386,   317,   415,    85,   163,   164,    86,   165,
      87,   166,   366,   167,   413,   168,   169,    22,   170,   171,
      23,    89,   172,    90,    24,    92,    35,    36,   173,   174,
     175,    25,   429,    91,    93,    94,    96,    95,    99,    98,
     359,    37,   408,   409,   100,   436,   105,    38,    39,   102,
     110,   117,    40,   115,   118,   119,    41,    42,    43,   121,
     123,   124,   377,   307,   417,   418,   310,   311,   312,   313,
     314,   140,   424,   141,   425,   134,   129,   132,   135,   188,
     189,   190,   191,   430,   192,   142,   193,   194,   197,   198,
     199,   203,   204,   143,   144,   145,   437,   146,   147,   148,
     440,   200,   149,    47,   224,   444,   201,   223,   225,   150,
      49,   226,   399,   227,   151,   152,   153,   154,   228,   155,
     156,   235,   157,   234,   158,   229,   159,   160,   236,   161,
     162,   163,   164,   254,   165,   140,   166,   141,   167,   255,
     168,   169,   256,   170,   171,   257,   265,   172,   266,   142,
     276,   272,   279,   173,   174,   175,   280,   143,   144,   145,
     281,   146,   147,   148,   282,   290,   149,   291,   301,   292,
     302,   428,   293,   150,   303,   329,   304,   316,   151,   152,
     153,   154,   330,   155,   156,   328,   157,   331,   158,   332,
     159,   160,   333,   161,   162,   163,   164,   334,   165,   140,
     166,   141,   167,   339,   168,   169,   336,   170,   171,   337,
     338,   172,   340,   142,   342,   343,   346,   173,   230,   175,
     354,   143,   144,   145,   349,   146,   147,   148,   355,   356,
     149,   360,   367,   357,   368,   369,   370,   150,   371,   373,
     375,   372,   151,   152,   153,   154,   378,   379,   156,   384,
     157,   387,   158,   390,   400,   397,   410,   161,   162,   163,
     164,   401,   165,   140,   166,   141,   167,   411,   168,   169,
     403,   170,   171,   419,   412,   172,   431,   142,    34,   420,
     421,   173,   174,   175,   136,   143,   144,   145,   433,   146,
     147,   148,   416,   398,   149,   422,   423,   427,   432,   435,
     439,   150,   441,   442,   376,   443,   151,   152,   153,   154,
     445,   104,   111,     0,   157,   294,   158,     0,   222,     0,
       0,   161,   162,   163,   164,     0,   165,     0,   166,     0,
     167,     0,   168,   169,     0,   170,   171,    35,    36,   172,
       0,     0,     0,     0,     0,   173,   174,   175,     0,     0,
      35,    36,    37,     0,     0,     0,     0,     0,    38,    39,
       0,     0,     0,    40,   205,    37,     0,    41,    42,    43,
       0,    38,    39,    44,     0,     0,    40,     0,   206,     0,
      41,    42,    43,    45,     0,    46,    44,     0,     0,     0,
       0,     0,   205,     0,     0,   207,    45,     0,    46,     0,
       0,     0,   208,     0,     0,     0,   206,   209,     0,     0,
       0,     0,     0,     0,    47,   210,     0,   211,    48,     0,
       0,    49,     0,   207,     0,     0,     0,    47,     0,   212,
     208,    48,     0,   213,    69,   209,     0,   214,     0,     0,
     215,     0,     0,   210,     0,   211,     0,   216,   217,     0,
       0,     0,     0,     0,     0,     0,     0,   212,     0,     0,
       0,   213,     0,     0,     0,   214,     0,     0,   215,     0,
       0,     0,     0,     0,     0,   283,   217
};

static const yytype_int16 yycheck[] =
{
      28,    35,    30,   156,    66,   215,   160,   129,    36,    80,
     172,    42,    43,   141,    10,    43,    60,     0,    89,   137,
      45,    10,   140,     9,    99,    11,    54,   339,     8,     6,
      92,    40,     7,    42,    14,    10,    13,   205,     0,   207,
      77,    75,    48,    80,    40,    17,    42,   215,   123,   124,
      81,    40,    81,    42,    40,    83,    42,     7,     6,    39,
      37,   373,    90,    91,    47,    40,    17,    42,    96,    87,
      98,   189,   190,   191,   192,   193,   194,    21,    23,   197,
     198,    89,    68,   236,    10,   203,   204,   115,    21,   251,
      40,   119,    42,   121,    77,    40,    40,    42,    42,    89,
      90,    49,     7,   265,   132,    89,   224,   225,   226,   227,
     228,   279,   280,   281,   282,    21,     7,   235,    89,   272,
     248,   249,   250,    47,   199,   293,    51,    75,    23,    37,
     201,    79,   254,   255,    15,    40,   290,    42,   348,   257,
      88,    89,    90,     4,     6,    40,    70,    42,     9,    40,
      11,    42,     7,    77,    89,   134,   135,    18,    19,    63,
      89,    22,     7,    24,    25,    23,     6,     6,     8,   287,
     138,   139,   200,   291,   292,    47,    47,   345,   346,    40,
     348,    42,    40,   301,    42,    40,   354,    42,    28,    29,
      30,   253,    32,    33,    34,    40,    89,    42,    70,    70,
      89,   229,     9,    89,    44,    77,    77,    68,    37,    49,
      50,   245,    52,    38,   238,   239,   334,    57,   336,    59,
       7,    15,   340,   247,   392,    10,    66,    67,    84,    69,
      38,    71,   400,    73,   387,    75,    76,    51,    78,    79,
      54,    10,    82,    13,    58,    10,     5,     6,    88,    89,
      90,    65,   420,    15,    85,    10,    13,    85,    10,    15,
     288,    20,   380,   381,     7,   433,     7,    26,    27,    51,
      89,    38,    31,    12,    89,    12,    35,    36,    37,    74,
       6,     6,   316,   237,   402,   403,   240,   241,   242,   243,
     244,     6,   410,     8,   412,     7,    82,    10,     7,    89,
       6,     6,     6,   421,     6,    20,     6,     6,     6,     6,
       6,     6,     6,    28,    29,    30,   434,    32,    33,    34,
     438,    37,    37,    82,     6,   443,    37,    37,     6,    44,
      89,     6,   360,     6,    49,    50,    51,    52,    82,    54,
      55,    17,    57,    85,    59,    37,    61,    62,    16,    64,
      65,    66,    67,    82,    69,     6,    71,     8,    73,    82,
      75,    76,     7,    78,    79,    21,    10,    82,    38,    20,
      89,    72,     6,    88,    89,    90,     6,    28,    29,    30,
       6,    32,    33,    34,     6,    10,    37,    56,    21,    56,
      10,   419,    82,    44,    85,     7,    85,    40,    49,    50,
      51,    52,     7,    54,    55,    84,    57,     7,    59,     7,
      61,    62,     7,    64,    65,    66,    67,    10,    69,     6,
      71,     8,    73,    38,    75,    76,    10,    78,    79,     7,
       7,    82,    38,    20,     7,     7,    21,    88,    89,    90,
      21,    28,    29,    30,    38,    32,    33,    34,    85,    10,
      37,    40,    38,    85,     7,     7,     7,    44,     7,    38,
      89,    85,    49,    50,    51,    52,     7,    38,    55,    82,
      57,    46,    59,    84,    83,    89,    10,    64,    65,    66,
      67,    85,    69,     6,    71,     8,    73,     7,    75,    76,
      82,    78,    79,    40,    70,    82,     7,    20,    27,    82,
      82,    88,    89,    90,   132,    28,    29,    30,    82,    32,
      33,    34,   400,   356,    37,    85,    85,    85,    85,    85,
      85,    44,    85,    81,   302,    82,    49,    50,    51,    52,
      85,    85,    94,    -1,    57,   223,    59,    -1,   161,    -1,
      -1,    64,    65,    66,    67,    -1,    69,    -1,    71,    -1,
      73,    -1,    75,    76,    -1,    78,    79,     5,     6,    82,
      -1,    -1,    -1,    -1,    -1,    88,    89,    90,    -1,    -1,
       5,     6,    20,    -1,    -1,    -1,    -1,    -1,    26,    27,
      -1,    -1,    -1,    31,     6,    20,    -1,    35,    36,    37,
      -1,    26,    27,    41,    -1,    -1,    31,    -1,    20,    -1,
      35,    36,    37,    51,    -1,    53,    41,    -1,    -1,    -1,
      -1,    -1,     6,    -1,    -1,    37,    51,    -1,    53,    -1,
      -1,    -1,    44,    -1,    -1,    -1,    20,    49,    -1,    -1,
      -1,    -1,    -1,    -1,    82,    57,    -1,    59,    86,    -1,
      -1,    89,    -1,    37,    -1,    -1,    -1,    82,    -1,    71,
      44,    86,    -1,    75,    89,    49,    -1,    79,    -1,    -1,
      82,    -1,    -1,    57,    -1,    59,    -1,    89,    90,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,
      -1,    75,    -1,    -1,    -1,    79,    -1,    -1,    82,    -1,
      -1,    -1,    -1,    -1,    -1,    89,    90
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    60,    92,    94,    45,     0,    97,    17,    48,    95,
      99,    81,    17,    47,    77,    98,   101,    87,    96,    77,
      80,    89,    51,    54,    58,    65,   100,    10,    21,    89,
      21,    89,    51,    37,    96,     5,     6,    20,    26,    27,
      31,    35,    36,    37,    41,    51,    53,    82,    86,    89,
     131,   132,   133,   134,    15,   131,     6,    89,    63,   125,
     133,   131,    89,   136,   137,   131,     6,    89,    93,    89,
     131,   135,   138,   139,    89,     9,   131,    89,   102,   103,
      37,    38,     7,    15,   110,    10,    84,    38,   135,    10,
      13,    15,    10,    85,    10,    85,    13,   133,    15,    10,
       7,    93,    51,   131,   137,     7,    93,   131,   131,   135,
      89,   139,   131,   131,   103,    12,   104,    38,    89,    12,
     131,    74,   105,     6,     6,   131,   106,   107,   131,    82,
     103,   103,    10,    99,     7,     7,   107,    70,   104,   104,
       6,     8,    20,    28,    29,    30,    32,    33,    34,    37,
      44,    49,    50,    51,    52,    54,    55,    57,    59,    61,
      62,    64,    65,    66,    67,    69,    71,    73,    75,    76,
      78,    79,    82,    88,    89,    90,   119,   121,   124,   126,
     127,   128,   129,   130,   105,   105,   119,   128,    89,     6,
       6,     6,     6,     6,     6,   119,   120,     6,     6,     6,
      37,    37,   121,     6,     6,     6,    20,    37,    44,    49,
      57,    59,    71,    75,    79,    82,    89,    90,   113,   122,
     123,   123,   124,    37,     6,     6,     6,     6,    82,    37,
      89,   117,   118,   120,    85,    17,    16,     4,     9,    11,
      18,    19,    22,    24,    25,    40,    42,    68,     8,    14,
      39,     6,    13,    37,    82,    82,     7,    21,   112,   119,
     119,   119,   119,   119,   119,    10,    38,   119,   119,   103,
     131,    93,    72,   119,   119,   113,    89,   113,   114,     6,
       6,     6,     6,    89,   114,   115,   116,    21,    40,    42,
      10,    56,    56,    82,   125,   119,   119,   119,   119,   119,
     131,    21,    10,    85,    85,   119,   121,   126,   127,   127,
     126,   126,   126,   126,   126,   133,    40,   127,   128,   128,
     128,   120,    89,    90,   135,    99,    99,   119,    84,     7,
       7,     7,     7,     7,    10,   120,    10,     7,     7,    38,
      38,   121,     7,     7,     7,    10,    21,   111,    10,    38,
     113,   113,   113,   113,    21,    85,    10,    85,   119,   131,
      40,   123,   119,   119,   108,   109,   113,    38,     7,     7,
       7,     7,    85,    38,   119,    89,   118,   133,     7,    38,
      70,    70,   119,   119,    82,   130,   119,    46,   113,   113,
      84,   114,    10,     7,     7,     7,   113,    89,   116,   131,
      83,    85,    23,    82,    42,    43,    81,   130,   119,   119,
      10,     7,    70,   121,     7,   113,   109,   119,   119,    40,
      82,    82,    85,    85,   119,   119,     7,    85,   131,   113,
     119,     7,    85,    82,    23,    85,   113,   119,    23,    85,
     119,    85,    81,    82,   119,    85
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    91,    92,    93,    93,    93,    94,    95,    96,    96,
      96,    97,    97,    98,    98,    98,    98,    98,    98,    99,
      99,   100,   101,   101,   102,   103,   103,   103,   104,   104,
     105,   105,   106,   107,   107,   108,   109,   109,   109,   110,
     110,   111,   111,   112,   112,   113,   113,   113,   113,   113,
     113,   113,   113,   113,   113,   113,   113,   113,   113,   113,
     113,   113,   114,   114,   114,   115,   116,   116,   117,   118,
     118,   119,   119,   119,   119,   119,   119,   120,   120,   120,
     121,   121,   121,   122,   123,   123,   124,   124,   124,   124,
     124,   124,   124,   125,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   127,   127,   127,   127,   128,
     128,   128,   129,   129,   129,   129,   129,   129,   129,   129,
     129,   129,   129,   129,   129,   129,   129,   129,   129,   129,
     129,   129,   129,   129,   129,   129,   129,   129,   130,   130,
     130,   130,   130,   130,   130,   131,   131,   131,   131,   131,
     132,   132,   133,   133,   133,   133,   133,   134,   134,   134,
     134,   134,   134,   134,   134,   135,   135,   135,   136,   137,
     137,   137,   138,   139,   139
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     0,     1,     3,     3,     3,     0,     1,
       3,     0,     3,    13,    17,    17,     4,     4,     5,     0,
       2,     1,     0,     2,     3,     0,     1,     3,     0,     2,
       0,     2,     1,     1,     3,     3,     0,     1,     3,     0,
       2,     0,     2,     0,     2,     4,     3,     4,     4,     4,
       3,     3,     3,     6,     5,     1,     1,     1,     1,     4,
       1,     3,     0,     1,     3,     3,     1,     3,     3,     1,
       3,     3,     2,     4,     4,     5,     1,     0,     1,     3,
       3,     6,     1,     3,     1,     3,     3,     3,     3,     3,
       3,     3,     1,     1,     3,     4,     8,     7,     4,     5,
       3,     3,     3,     3,     1,     3,     3,     3,     1,     4,
       2,     1,     4,     4,     3,     3,     3,     3,     6,     4,
       4,     4,     1,     4,    10,     8,    16,     4,     4,     4,
       4,     4,     4,     4,     8,     5,     5,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     6,     4,     4,     1,
       3,     1,     3,     3,     3,     3,     1,     1,     1,     1,
       1,     1,     2,     1,     3,     0,     1,     3,     2,     0,
       1,     3,     3,     1,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (&yylloc, scanner, result, YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YYLOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YYLOCATION_PRINT

#  if defined YY_LOCATION_PRINT

   /* Temporary convenience wrapper in case some people defined the
      undocumented and private YY_LOCATION_PRINT macros.  */
#   define YYLOCATION_PRINT(File, Loc)  YY_LOCATION_PRINT(File, *(Loc))

#  elif defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
}

#   define YYLOCATION_PRINT  yy_location_print_

    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT(File, Loc)  YYLOCATION_PRINT(File, &(Loc))

#  else

#   define YYLOCATION_PRINT(File, Loc) ((void) 0)
    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT  YYLOCATION_PRINT

#  endif
# endif /* !defined YYLOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location, scanner, result); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, yyscan_t scanner, YYSTYPE *result)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (yylocationp);
  YY_USE (scanner);
  YY_USE (result);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, yyscan_t scanner, YYSTYPE *result)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YYLOCATION_PRINT (yyo, yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp, scanner, result);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
                 int yyrule, yyscan_t scanner, YYSTYPE *result)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]), scanner, result);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, scanner, result); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, yyscan_t scanner, YYSTYPE *result)
{
  YY_USE (yyvaluep);
  YY_USE (yylocationp);
  YY_USE (scanner);
  YY_USE (result);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}






/*----------.
| yyparse.  |
`----------*/

int
yyparse (yyscan_t scanner, YYSTYPE *result)
{
/* Lookahead token kind.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

    /* Number of syntax errors so far.  */
    int yynerrs = 0;

    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  yylsp[0] = yylloc;
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex (&yylval, &yylloc, scanner);
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      yyerror_range[1] = yylloc;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* Program: LanguageDecl ListExtension ListDecl  */
#line 463 "Syntax.y"
                                              { (yyval.program_) = make_AProgram((yyvsp[-2].languagedecl_), reverseListExtension((yyvsp[-1].listextension_)), reverseListDecl((yyvsp[0].listdecl_))); result->program_ = (yyval.program_); }
#line 1930 "Parser.c"
    break;

  case 3: /* ListStellaIdent: %empty  */
#line 465 "Syntax.y"
                              { (yyval.liststellaident_) = 0; result->liststellaident_ = (yyval.liststellaident_); }
#line 1936 "Parser.c"
    break;

  case 4: /* ListStellaIdent: T_StellaIdent  */
#line 466 "Syntax.y"
                  { (yyval.liststellaident_) = make_ListStellaIdent((yyvsp[0]._string), 0); result->liststellaident_ = (yyval.liststellaident_); }
#line 1942 "Parser.c"
    break;

  case 5: /* ListStellaIdent: T_StellaIdent _COMMA ListStellaIdent  */
#line 467 "Syntax.y"
                                         { (yyval.liststellaident_) = make_ListStellaIdent((yyvsp[-2]._string), (yyvsp[0].liststellaident_)); result->liststellaident_ = (yyval.liststellaident_); }
#line 1948 "Parser.c"
    break;

  case 6: /* LanguageDecl: _KW_language _KW_core _SEMI  */
#line 469 "Syntax.y"
                                           { (yyval.languagedecl_) = make_LanguageCore(); result->languagedecl_ = (yyval.languagedecl_); }
#line 1954 "Parser.c"
    break;

  case 7: /* Extension: _KW_extend _KW_with ListExtensionName  */
#line 471 "Syntax.y"
                                                  { (yyval.extension_) = make_AnExtension((yyvsp[0].listextensionname_)); result->extension_ = (yyval.extension_); }
#line 1960 "Parser.c"
    break;

  case 8: /* ListExtensionName: %empty  */
#line 473 "Syntax.y"
                                { (yyval.listextensionname_) = 0; result->listextensionname_ = (yyval.listextensionname_); }
#line 1966 "Parser.c"
    break;

  case 9: /* ListExtensionName: T_ExtensionName  */
#line 474 "Syntax.y"
                    { (yyval.listextensionname_) = make_ListExtensionName((yyvsp[0]._string), 0); result->listextensionname_ = (yyval.listextensionname_); }
#line 1972 "Parser.c"
    break;

  case 10: /* ListExtensionName: T_ExtensionName _COMMA ListExtensionName  */
#line 475 "Syntax.y"
                                             { (yyval.listextensionname_) = make_ListExtensionName((yyvsp[-2]._string), (yyvsp[0].listextensionname_)); result->listextensionname_ = (yyval.listextensionname_); }
#line 1978 "Parser.c"
    break;

  case 11: /* ListExtension: %empty  */
#line 477 "Syntax.y"
                            { (yyval.listextension_) = 0; result->listextension_ = (yyval.listextension_); }
#line 1984 "Parser.c"
    break;

  case 12: /* ListExtension: ListExtension Extension _SEMI  */
#line 478 "Syntax.y"
                                  { (yyval.listextension_) = make_ListExtension((yyvsp[-1].extension_), (yyvsp[-2].listextension_)); result->listextension_ = (yyval.listextension_); }
#line 1990 "Parser.c"
    break;

  case 13: /* Decl: ListAnnotation _KW_fn T_StellaIdent _LPAREN ListParamDecl _RPAREN ReturnType ThrowType _LBRACE ListDecl _KW_return Expr _RBRACE  */
#line 480 "Syntax.y"
                                                                                                                                       { (yyval.decl_) = make_DeclFun(reverseListAnnotation((yyvsp[-12].listannotation_)), (yyvsp[-10]._string), (yyvsp[-8].listparamdecl_), (yyvsp[-6].returntype_), (yyvsp[-5].throwtype_), reverseListDecl((yyvsp[-3].listdecl_)), (yyvsp[-1].expr_)); result->decl_ = (yyval.decl_); }
#line 1996 "Parser.c"
    break;

  case 14: /* Decl: ListAnnotation _KW_generic _KW_fn T_StellaIdent _LBRACK ListStellaIdent _RBRACK _LPAREN ListParamDecl _RPAREN ReturnType ThrowType _LBRACE ListDecl _KW_return Expr _RBRACE  */
#line 481 "Syntax.y"
                                                                                                                                                                                { (yyval.decl_) = make_DeclFunGeneric(reverseListAnnotation((yyvsp[-16].listannotation_)), (yyvsp[-13]._string), (yyvsp[-11].liststellaident_), (yyvsp[-8].listparamdecl_), (yyvsp[-6].returntype_), (yyvsp[-5].throwtype_), reverseListDecl((yyvsp[-3].listdecl_)), (yyvsp[-1].expr_)); result->decl_ = (yyval.decl_); }
#line 2002 "Parser.c"
    break;

  case 15: /* Decl: ListAnnotation _KW_mod _LBRACK Mod _RBRACK _KW_fn T_StellaIdent _LPAREN ListParamDecl _RPAREN ReturnType ThrowType _LBRACE ListDecl _KW_return Expr _RBRACE  */
#line 482 "Syntax.y"
                                                                                                                                                                { (yyval.decl_) = make_DeclFunMod(reverseListAnnotation((yyvsp[-16].listannotation_)), (yyvsp[-13].mod_), (yyvsp[-10]._string), (yyvsp[-8].listparamdecl_), (yyvsp[-6].returntype_), (yyvsp[-5].throwtype_), reverseListDecl((yyvsp[-3].listdecl_)), (yyvsp[-1].expr_)); result->decl_ = (yyval.decl_); }
#line 2008 "Parser.c"
    break;

  case 16: /* Decl: _KW_type T_StellaIdent _EQ Type  */
#line 483 "Syntax.y"
                                    { (yyval.decl_) = make_DeclTypeAlias((yyvsp[-2]._string), (yyvsp[0].type_)); result->decl_ = (yyval.decl_); }
#line 2014 "Parser.c"
    break;

  case 17: /* Decl: _KW_exception _KW_type _EQ Type  */
#line 484 "Syntax.y"
                                    { (yyval.decl_) = make_DeclExceptionType((yyvsp[0].type_)); result->decl_ = (yyval.decl_); }
#line 2020 "Parser.c"
    break;

  case 18: /* Decl: _KW_exception _KW_variant T_StellaIdent _COLON Type  */
#line 485 "Syntax.y"
                                                        { (yyval.decl_) = make_DeclExceptionVariant((yyvsp[-2]._string), (yyvsp[0].type_)); result->decl_ = (yyval.decl_); }
#line 2026 "Parser.c"
    break;

  case 19: /* ListDecl: %empty  */
#line 487 "Syntax.y"
                       { (yyval.listdecl_) = 0; result->listdecl_ = (yyval.listdecl_); }
#line 2032 "Parser.c"
    break;

  case 20: /* ListDecl: ListDecl Decl  */
#line 488 "Syntax.y"
                  { (yyval.listdecl_) = make_ListDecl((yyvsp[0].decl_), (yyvsp[-1].listdecl_)); result->listdecl_ = (yyval.listdecl_); }
#line 2038 "Parser.c"
    break;

  case 21: /* Annotation: _KW_inline  */
#line 495 "Syntax.y"
                        { (yyval.annotation_) = make_InlineAnnotation(); result->annotation_ = (yyval.annotation_); }
#line 2044 "Parser.c"
    break;

  case 22: /* ListAnnotation: %empty  */
#line 497 "Syntax.y"
                             { (yyval.listannotation_) = 0; result->listannotation_ = (yyval.listannotation_); }
#line 2050 "Parser.c"
    break;

  case 23: /* ListAnnotation: ListAnnotation Annotation  */
#line 498 "Syntax.y"
                              { (yyval.listannotation_) = make_ListAnnotation((yyvsp[0].annotation_), (yyvsp[-1].listannotation_)); result->listannotation_ = (yyval.listannotation_); }
#line 2056 "Parser.c"
    break;

  case 24: /* ParamDecl: T_StellaIdent _COLON Type  */
#line 500 "Syntax.y"
                                      { (yyval.paramdecl_) = make_AParamDecl((yyvsp[-2]._string), (yyvsp[0].type_)); result->paramdecl_ = (yyval.paramdecl_); }
#line 2062 "Parser.c"
    break;

  case 25: /* ListParamDecl: %empty  */
#line 502 "Syntax.y"
                            { (yyval.listparamdecl_) = 0; result->listparamdecl_ = (yyval.listparamdecl_); }
#line 2068 "Parser.c"
    break;

  case 26: /* ListParamDecl: ParamDecl  */
#line 503 "Syntax.y"
              { (yyval.listparamdecl_) = make_ListParamDecl((yyvsp[0].paramdecl_), 0); result->listparamdecl_ = (yyval.listparamdecl_); }
#line 2074 "Parser.c"
    break;

  case 27: /* ListParamDecl: ParamDecl _COMMA ListParamDecl  */
#line 504 "Syntax.y"
                                   { (yyval.listparamdecl_) = make_ListParamDecl((yyvsp[-2].paramdecl_), (yyvsp[0].listparamdecl_)); result->listparamdecl_ = (yyval.listparamdecl_); }
#line 2080 "Parser.c"
    break;

  case 28: /* ReturnType: %empty  */
#line 506 "Syntax.y"
                         { (yyval.returntype_) = make_NoReturnType(); result->returntype_ = (yyval.returntype_); }
#line 2086 "Parser.c"
    break;

  case 29: /* ReturnType: _RARROW Type  */
#line 507 "Syntax.y"
                 { (yyval.returntype_) = make_SomeReturnType((yyvsp[0].type_)); result->returntype_ = (yyval.returntype_); }
#line 2092 "Parser.c"
    break;

  case 30: /* ThrowType: %empty  */
#line 509 "Syntax.y"
                        { (yyval.throwtype_) = make_NoThrowType(); result->throwtype_ = (yyval.throwtype_); }
#line 2098 "Parser.c"
    break;

  case 31: /* ThrowType: _KW_throws ListType9  */
#line 510 "Syntax.y"
                         { (yyval.throwtype_) = make_SomeThrowType((yyvsp[0].listtype_)); result->throwtype_ = (yyval.throwtype_); }
#line 2104 "Parser.c"
    break;

  case 32: /* Type9: Type  */
#line 512 "Syntax.y"
             { (yyval.type_) = (yyvsp[0].type_); result->type_ = (yyval.type_); }
#line 2110 "Parser.c"
    break;

  case 33: /* ListType9: Type9  */
#line 514 "Syntax.y"
                  { (yyval.listtype_) = make_ListType((yyvsp[0].type_), 0); result->listtype_ = (yyval.listtype_); }
#line 2116 "Parser.c"
    break;

  case 34: /* ListType9: Type9 _COMMA ListType9  */
#line 515 "Syntax.y"
                           { (yyval.listtype_) = make_ListType((yyvsp[-2].type_), (yyvsp[0].listtype_)); result->listtype_ = (yyval.listtype_); }
#line 2122 "Parser.c"
    break;

  case 35: /* MatchCase: Pattern _RDARROW Expr  */
#line 517 "Syntax.y"
                                  { (yyval.matchcase_) = make_AMatchCase((yyvsp[-2].pattern_), (yyvsp[0].expr_)); result->matchcase_ = (yyval.matchcase_); }
#line 2128 "Parser.c"
    break;

  case 36: /* ListMatchCase: %empty  */
#line 519 "Syntax.y"
                            { (yyval.listmatchcase_) = 0; result->listmatchcase_ = (yyval.listmatchcase_); }
#line 2134 "Parser.c"
    break;

  case 37: /* ListMatchCase: MatchCase  */
#line 520 "Syntax.y"
              { (yyval.listmatchcase_) = make_ListMatchCase((yyvsp[0].matchcase_), 0); result->listmatchcase_ = (yyval.listmatchcase_); }
#line 2140 "Parser.c"
    break;

  case 38: /* ListMatchCase: MatchCase _BAR ListMatchCase  */
#line 521 "Syntax.y"
                                 { (yyval.listmatchcase_) = make_ListMatchCase((yyvsp[-2].matchcase_), (yyvsp[0].listmatchcase_)); result->listmatchcase_ = (yyval.listmatchcase_); }
#line 2146 "Parser.c"
    break;

  case 39: /* OptionalTyping: %empty  */
#line 523 "Syntax.y"
                             { (yyval.optionaltyping_) = make_NoTyping(); result->optionaltyping_ = (yyval.optionaltyping_); }
#line 2152 "Parser.c"
    break;

  case 40: /* OptionalTyping: _COLON Type  */
#line 524 "Syntax.y"
                { (yyval.optionaltyping_) = make_SomeTyping((yyvsp[0].type_)); result->optionaltyping_ = (yyval.optionaltyping_); }
#line 2158 "Parser.c"
    break;

  case 41: /* PatternData: %empty  */
#line 526 "Syntax.y"
                          { (yyval.patterndata_) = make_NoPatternData(); result->patterndata_ = (yyval.patterndata_); }
#line 2164 "Parser.c"
    break;

  case 42: /* PatternData: _EQ Pattern  */
#line 527 "Syntax.y"
                { (yyval.patterndata_) = make_SomePatternData((yyvsp[0].pattern_)); result->patterndata_ = (yyval.patterndata_); }
#line 2170 "Parser.c"
    break;

  case 43: /* ExprData: %empty  */
#line 529 "Syntax.y"
                       { (yyval.exprdata_) = make_NoExprData(); result->exprdata_ = (yyval.exprdata_); }
#line 2176 "Parser.c"
    break;

  case 44: /* ExprData: _EQ Expr  */
#line 530 "Syntax.y"
             { (yyval.exprdata_) = make_SomeExprData((yyvsp[0].expr_)); result->exprdata_ = (yyval.exprdata_); }
#line 2182 "Parser.c"
    break;

  case 45: /* Pattern: Pattern _KW_cast _KW_as Type  */
#line 532 "Syntax.y"
                                       { (yyval.pattern_) = make_PatternCastAs((yyvsp[-3].pattern_), (yyvsp[0].type_)); result->pattern_ = (yyval.pattern_); }
#line 2188 "Parser.c"
    break;

  case 46: /* Pattern: Pattern _KW_as Type  */
#line 533 "Syntax.y"
                        { (yyval.pattern_) = make_PatternAsc((yyvsp[-2].pattern_), (yyvsp[0].type_)); result->pattern_ = (yyval.pattern_); }
#line 2194 "Parser.c"
    break;

  case 47: /* Pattern: _SYMB_13 T_StellaIdent PatternData _SYMB_14  */
#line 534 "Syntax.y"
                                                { (yyval.pattern_) = make_PatternVariant((yyvsp[-2]._string), (yyvsp[-1].patterndata_)); result->pattern_ = (yyval.pattern_); }
#line 2200 "Parser.c"
    break;

  case 48: /* Pattern: _KW_inl _LPAREN Pattern _RPAREN  */
#line 535 "Syntax.y"
                                    { (yyval.pattern_) = make_PatternInl((yyvsp[-1].pattern_)); result->pattern_ = (yyval.pattern_); }
#line 2206 "Parser.c"
    break;

  case 49: /* Pattern: _KW_inr _LPAREN Pattern _RPAREN  */
#line 536 "Syntax.y"
                                    { (yyval.pattern_) = make_PatternInr((yyvsp[-1].pattern_)); result->pattern_ = (yyval.pattern_); }
#line 2212 "Parser.c"
    break;

  case 50: /* Pattern: _LBRACE ListPattern _RBRACE  */
#line 537 "Syntax.y"
                                { (yyval.pattern_) = make_PatternTuple((yyvsp[-1].listpattern_)); result->pattern_ = (yyval.pattern_); }
#line 2218 "Parser.c"
    break;

  case 51: /* Pattern: _LBRACE ListLabelledPattern _RBRACE  */
#line 538 "Syntax.y"
                                        { (yyval.pattern_) = make_PatternRecord((yyvsp[-1].listlabelledpattern_)); result->pattern_ = (yyval.pattern_); }
#line 2224 "Parser.c"
    break;

  case 52: /* Pattern: _LBRACK ListPattern _RBRACK  */
#line 539 "Syntax.y"
                                { (yyval.pattern_) = make_PatternList((yyvsp[-1].listpattern_)); result->pattern_ = (yyval.pattern_); }
#line 2230 "Parser.c"
    break;

  case 53: /* Pattern: _KW_cons _LPAREN Pattern _COMMA Pattern _RPAREN  */
#line 540 "Syntax.y"
                                                    { (yyval.pattern_) = make_PatternCons((yyvsp[-3].pattern_), (yyvsp[-1].pattern_)); result->pattern_ = (yyval.pattern_); }
#line 2236 "Parser.c"
    break;

  case 54: /* Pattern: _LPAREN Pattern _COMMA Pattern _RPAREN  */
#line 541 "Syntax.y"
                                           { (yyval.pattern_) = make_patternCons((yyvsp[-3].pattern_), (yyvsp[-1].pattern_)); result->pattern_ = (yyval.pattern_); }
#line 2242 "Parser.c"
    break;

  case 55: /* Pattern: _KW_false  */
#line 542 "Syntax.y"
              { (yyval.pattern_) = make_PatternFalse(); result->pattern_ = (yyval.pattern_); }
#line 2248 "Parser.c"
    break;

  case 56: /* Pattern: _KW_true  */
#line 543 "Syntax.y"
             { (yyval.pattern_) = make_PatternTrue(); result->pattern_ = (yyval.pattern_); }
#line 2254 "Parser.c"
    break;

  case 57: /* Pattern: _KW_unit  */
#line 544 "Syntax.y"
             { (yyval.pattern_) = make_PatternUnit(); result->pattern_ = (yyval.pattern_); }
#line 2260 "Parser.c"
    break;

  case 58: /* Pattern: _INTEGER_  */
#line 545 "Syntax.y"
              { (yyval.pattern_) = make_PatternInt((yyvsp[0]._int)); result->pattern_ = (yyval.pattern_); }
#line 2266 "Parser.c"
    break;

  case 59: /* Pattern: _KW_succ _LPAREN Pattern _RPAREN  */
#line 546 "Syntax.y"
                                     { (yyval.pattern_) = make_PatternSucc((yyvsp[-1].pattern_)); result->pattern_ = (yyval.pattern_); }
#line 2272 "Parser.c"
    break;

  case 60: /* Pattern: T_StellaIdent  */
#line 547 "Syntax.y"
                  { (yyval.pattern_) = make_PatternVar((yyvsp[0]._string)); result->pattern_ = (yyval.pattern_); }
#line 2278 "Parser.c"
    break;

  case 61: /* Pattern: _LPAREN Pattern _RPAREN  */
#line 548 "Syntax.y"
                            { (yyval.pattern_) = (yyvsp[-1].pattern_); result->pattern_ = (yyval.pattern_); }
#line 2284 "Parser.c"
    break;

  case 62: /* ListPattern: %empty  */
#line 550 "Syntax.y"
                          { (yyval.listpattern_) = 0; result->listpattern_ = (yyval.listpattern_); }
#line 2290 "Parser.c"
    break;

  case 63: /* ListPattern: Pattern  */
#line 551 "Syntax.y"
            { (yyval.listpattern_) = make_ListPattern((yyvsp[0].pattern_), 0); result->listpattern_ = (yyval.listpattern_); }
#line 2296 "Parser.c"
    break;

  case 64: /* ListPattern: Pattern _COMMA ListPattern  */
#line 552 "Syntax.y"
                               { (yyval.listpattern_) = make_ListPattern((yyvsp[-2].pattern_), (yyvsp[0].listpattern_)); result->listpattern_ = (yyval.listpattern_); }
#line 2302 "Parser.c"
    break;

  case 65: /* LabelledPattern: T_StellaIdent _EQ Pattern  */
#line 554 "Syntax.y"
                                            { (yyval.labelledpattern_) = make_ALabelledPattern((yyvsp[-2]._string), (yyvsp[0].pattern_)); result->labelledpattern_ = (yyval.labelledpattern_); }
#line 2308 "Parser.c"
    break;

  case 66: /* ListLabelledPattern: LabelledPattern  */
#line 556 "Syntax.y"
                                      { (yyval.listlabelledpattern_) = make_ListLabelledPattern((yyvsp[0].labelledpattern_), 0); result->listlabelledpattern_ = (yyval.listlabelledpattern_); }
#line 2314 "Parser.c"
    break;

  case 67: /* ListLabelledPattern: LabelledPattern _COMMA ListLabelledPattern  */
#line 557 "Syntax.y"
                                               { (yyval.listlabelledpattern_) = make_ListLabelledPattern((yyvsp[-2].labelledpattern_), (yyvsp[0].listlabelledpattern_)); result->listlabelledpattern_ = (yyval.listlabelledpattern_); }
#line 2320 "Parser.c"
    break;

  case 68: /* Binding: T_StellaIdent _EQ Expr  */
#line 559 "Syntax.y"
                                 { (yyval.binding_) = make_ABinding((yyvsp[-2]._string), (yyvsp[0].expr_)); result->binding_ = (yyval.binding_); }
#line 2326 "Parser.c"
    break;

  case 69: /* ListBinding: Binding  */
#line 561 "Syntax.y"
                      { (yyval.listbinding_) = make_ListBinding((yyvsp[0].binding_), 0); result->listbinding_ = (yyval.listbinding_); }
#line 2332 "Parser.c"
    break;

  case 70: /* ListBinding: Binding _COMMA ListBinding  */
#line 562 "Syntax.y"
                               { (yyval.listbinding_) = make_ListBinding((yyvsp[-2].binding_), (yyvsp[0].listbinding_)); result->listbinding_ = (yyval.listbinding_); }
#line 2338 "Parser.c"
    break;

  case 71: /* Expr: Expr1 _SEMI Expr  */
#line 564 "Syntax.y"
                        { (yyval.expr_) = make_Sequence((yyvsp[-2].expr_), (yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 2344 "Parser.c"
    break;

  case 72: /* Expr: Expr1 _SEMI  */
#line 565 "Syntax.y"
                { (yyval.expr_) = (yyvsp[-1].expr_); result->expr_ = (yyval.expr_); }
#line 2350 "Parser.c"
    break;

  case 73: /* Expr: _KW_let ListPatternBinding _KW_in Expr  */
#line 566 "Syntax.y"
                                           { (yyval.expr_) = make_Let((yyvsp[-2].listpatternbinding_), (yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 2356 "Parser.c"
    break;

  case 74: /* Expr: _KW_letrec ListPatternBinding _KW_in Expr  */
#line 567 "Syntax.y"
                                              { (yyval.expr_) = make_LetRec((yyvsp[-2].listpatternbinding_), (yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 2362 "Parser.c"
    break;

  case 75: /* Expr: _KW_generic _LBRACK ListStellaIdent _RBRACK Expr  */
#line 568 "Syntax.y"
                                                     { (yyval.expr_) = make_TypeAbstraction((yyvsp[-2].liststellaident_), (yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 2368 "Parser.c"
    break;

  case 76: /* Expr: Expr1  */
#line 569 "Syntax.y"
          { (yyval.expr_) = (yyvsp[0].expr_); result->expr_ = (yyval.expr_); }
#line 2374 "Parser.c"
    break;

  case 77: /* ListExpr: %empty  */
#line 571 "Syntax.y"
                       { (yyval.listexpr_) = 0; result->listexpr_ = (yyval.listexpr_); }
#line 2380 "Parser.c"
    break;

  case 78: /* ListExpr: Expr  */
#line 572 "Syntax.y"
         { (yyval.listexpr_) = make_ListExpr((yyvsp[0].expr_), 0); result->listexpr_ = (yyval.listexpr_); }
#line 2386 "Parser.c"
    break;

  case 79: /* ListExpr: Expr _COMMA ListExpr  */
#line 573 "Syntax.y"
                         { (yyval.listexpr_) = make_ListExpr((yyvsp[-2].expr_), (yyvsp[0].listexpr_)); result->listexpr_ = (yyval.listexpr_); }
#line 2392 "Parser.c"
    break;

  case 80: /* Expr1: Expr2 _COLONEQ Expr1  */
#line 575 "Syntax.y"
                             { (yyval.expr_) = make_Assign((yyvsp[-2].expr_), (yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 2398 "Parser.c"
    break;

  case 81: /* Expr1: _KW_if Expr1 _KW_then Expr1 _KW_else Expr1  */
#line 576 "Syntax.y"
                                               { (yyval.expr_) = make_If((yyvsp[-4].expr_), (yyvsp[-2].expr_), (yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 2404 "Parser.c"
    break;

  case 82: /* Expr1: Expr2  */
#line 577 "Syntax.y"
          { (yyval.expr_) = (yyvsp[0].expr_); result->expr_ = (yyval.expr_); }
#line 2410 "Parser.c"
    break;

  case 83: /* PatternBinding: Pattern _EQ Expr  */
#line 579 "Syntax.y"
                                  { (yyval.patternbinding_) = make_APatternBinding((yyvsp[-2].pattern_), (yyvsp[0].expr_)); result->patternbinding_ = (yyval.patternbinding_); }
#line 2416 "Parser.c"
    break;

  case 84: /* ListPatternBinding: PatternBinding  */
#line 581 "Syntax.y"
                                    { (yyval.listpatternbinding_) = make_ListPatternBinding((yyvsp[0].patternbinding_), 0); result->listpatternbinding_ = (yyval.listpatternbinding_); }
#line 2422 "Parser.c"
    break;

  case 85: /* ListPatternBinding: PatternBinding _COMMA ListPatternBinding  */
#line 582 "Syntax.y"
                                             { (yyval.listpatternbinding_) = make_ListPatternBinding((yyvsp[-2].patternbinding_), (yyvsp[0].listpatternbinding_)); result->listpatternbinding_ = (yyval.listpatternbinding_); }
#line 2428 "Parser.c"
    break;

  case 86: /* Expr2: Expr3 _LT Expr3  */
#line 584 "Syntax.y"
                        { (yyval.expr_) = make_LessThan((yyvsp[-2].expr_), (yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 2434 "Parser.c"
    break;

  case 87: /* Expr2: Expr3 _LDARROW Expr3  */
#line 585 "Syntax.y"
                         { (yyval.expr_) = make_LessThanOrEqual((yyvsp[-2].expr_), (yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 2440 "Parser.c"
    break;

  case 88: /* Expr2: Expr3 _GT Expr3  */
#line 586 "Syntax.y"
                    { (yyval.expr_) = make_GreaterThan((yyvsp[-2].expr_), (yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 2446 "Parser.c"
    break;

  case 89: /* Expr2: Expr3 _GTEQ Expr3  */
#line 587 "Syntax.y"
                      { (yyval.expr_) = make_GreaterThanOrEqual((yyvsp[-2].expr_), (yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 2452 "Parser.c"
    break;

  case 90: /* Expr2: Expr3 _DEQ Expr3  */
#line 588 "Syntax.y"
                     { (yyval.expr_) = make_Equal((yyvsp[-2].expr_), (yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 2458 "Parser.c"
    break;

  case 91: /* Expr2: Expr3 _BANGEQ Expr3  */
#line 589 "Syntax.y"
                        { (yyval.expr_) = make_NotEqual((yyvsp[-2].expr_), (yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 2464 "Parser.c"
    break;

  case 92: /* Expr2: Expr3  */
#line 590 "Syntax.y"
          { (yyval.expr_) = (yyvsp[0].expr_); result->expr_ = (yyval.expr_); }
#line 2470 "Parser.c"
    break;

  case 93: /* Mod: _KW_lock  */
#line 595 "Syntax.y"
               { (yyval.mod_) = make_ModLock(); result->mod_ = (yyval.mod_); }
#line 2476 "Parser.c"
    break;

  case 94: /* Expr3: Expr3 _KW_as Type2  */
#line 597 "Syntax.y"
                           { (yyval.expr_) = make_TypeAsc((yyvsp[-2].expr_), (yyvsp[0].type_)); result->expr_ = (yyval.expr_); }
#line 2482 "Parser.c"
    break;

  case 95: /* Expr3: Expr3 _KW_cast _KW_as Type2  */
#line 598 "Syntax.y"
                                { (yyval.expr_) = make_TypeCast((yyvsp[-3].expr_), (yyvsp[0].type_)); result->expr_ = (yyval.expr_); }
#line 2488 "Parser.c"
    break;

  case 96: /* Expr3: _KW_fn _LPAREN ListParamDecl _RPAREN _LBRACE _KW_return Expr _RBRACE  */
#line 599 "Syntax.y"
                                                                         { (yyval.expr_) = make_Abstraction((yyvsp[-5].listparamdecl_), (yyvsp[-1].expr_)); result->expr_ = (yyval.expr_); }
#line 2494 "Parser.c"
    break;

  case 97: /* Expr3: _KW_mod _LBRACK Mod _RBRACK _LBRACE Expr _RBRACE  */
#line 600 "Syntax.y"
                                                     { (yyval.expr_) = make_Mod((yyvsp[-4].mod_), (yyvsp[-1].expr_)); result->expr_ = (yyval.expr_); }
#line 2500 "Parser.c"
    break;

  case 98: /* Expr3: _SYMB_13 T_StellaIdent ExprData _SYMB_14  */
#line 601 "Syntax.y"
                                             { (yyval.expr_) = make_Variant((yyvsp[-2]._string), (yyvsp[-1].exprdata_)); result->expr_ = (yyval.expr_); }
#line 2506 "Parser.c"
    break;

  case 99: /* Expr3: _KW_match Expr2 _LBRACE ListMatchCase _RBRACE  */
#line 602 "Syntax.y"
                                                  { (yyval.expr_) = make_Match((yyvsp[-3].expr_), (yyvsp[-1].listmatchcase_)); result->expr_ = (yyval.expr_); }
#line 2512 "Parser.c"
    break;

  case 100: /* Expr3: _LBRACK ListExpr _RBRACK  */
#line 603 "Syntax.y"
                             { (yyval.expr_) = make_List((yyvsp[-1].listexpr_)); result->expr_ = (yyval.expr_); }
#line 2518 "Parser.c"
    break;

  case 101: /* Expr3: Expr3 _PLUS Expr4  */
#line 604 "Syntax.y"
                      { (yyval.expr_) = make_Add((yyvsp[-2].expr_), (yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 2524 "Parser.c"
    break;

  case 102: /* Expr3: Expr3 _MINUS Expr4  */
#line 605 "Syntax.y"
                       { (yyval.expr_) = make_Subtract((yyvsp[-2].expr_), (yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 2530 "Parser.c"
    break;

  case 103: /* Expr3: Expr3 _KW_or Expr4  */
#line 606 "Syntax.y"
                       { (yyval.expr_) = make_LogicOr((yyvsp[-2].expr_), (yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 2536 "Parser.c"
    break;

  case 104: /* Expr3: Expr4  */
#line 607 "Syntax.y"
          { (yyval.expr_) = (yyvsp[0].expr_); result->expr_ = (yyval.expr_); }
#line 2542 "Parser.c"
    break;

  case 105: /* Expr4: Expr4 _STAR Expr5  */
#line 609 "Syntax.y"
                          { (yyval.expr_) = make_Multiply((yyvsp[-2].expr_), (yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 2548 "Parser.c"
    break;

  case 106: /* Expr4: Expr4 _SLASH Expr5  */
#line 610 "Syntax.y"
                       { (yyval.expr_) = make_Divide((yyvsp[-2].expr_), (yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 2554 "Parser.c"
    break;

  case 107: /* Expr4: Expr4 _KW_and Expr5  */
#line 611 "Syntax.y"
                        { (yyval.expr_) = make_LogicAnd((yyvsp[-2].expr_), (yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 2560 "Parser.c"
    break;

  case 108: /* Expr4: Expr5  */
#line 612 "Syntax.y"
          { (yyval.expr_) = (yyvsp[0].expr_); result->expr_ = (yyval.expr_); }
#line 2566 "Parser.c"
    break;

  case 109: /* Expr5: _KW_new _LPAREN Expr _RPAREN  */
#line 614 "Syntax.y"
                                     { (yyval.expr_) = make_Ref((yyvsp[-1].expr_)); result->expr_ = (yyval.expr_); }
#line 2572 "Parser.c"
    break;

  case 110: /* Expr5: _STAR Expr5  */
#line 615 "Syntax.y"
                { (yyval.expr_) = make_Deref((yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 2578 "Parser.c"
    break;

  case 111: /* Expr5: Expr6  */
#line 616 "Syntax.y"
          { (yyval.expr_) = (yyvsp[0].expr_); result->expr_ = (yyval.expr_); }
#line 2584 "Parser.c"
    break;

  case 112: /* Expr6: Expr6 _LPAREN ListExpr _RPAREN  */
#line 618 "Syntax.y"
                                       { (yyval.expr_) = make_Application((yyvsp[-3].expr_), (yyvsp[-1].listexpr_)); result->expr_ = (yyval.expr_); }
#line 2590 "Parser.c"
    break;

  case 113: /* Expr6: Expr6 _LBRACK ListType _RBRACK  */
#line 619 "Syntax.y"
                                   { (yyval.expr_) = make_TypeApplication((yyvsp[-3].expr_), (yyvsp[-1].listtype_)); result->expr_ = (yyval.expr_); }
#line 2596 "Parser.c"
    break;

  case 114: /* Expr6: Expr6 _DOT T_StellaIdent  */
#line 620 "Syntax.y"
                             { (yyval.expr_) = make_DotRecord((yyvsp[-2].expr_), (yyvsp[0]._string)); result->expr_ = (yyval.expr_); }
#line 2602 "Parser.c"
    break;

  case 115: /* Expr6: Expr6 _DOT _INTEGER_  */
#line 621 "Syntax.y"
                         { (yyval.expr_) = make_DotTuple((yyvsp[-2].expr_), (yyvsp[0]._int)); result->expr_ = (yyval.expr_); }
#line 2608 "Parser.c"
    break;

  case 116: /* Expr6: _LBRACE ListExpr _RBRACE  */
#line 622 "Syntax.y"
                             { (yyval.expr_) = make_Tuple((yyvsp[-1].listexpr_)); result->expr_ = (yyval.expr_); }
#line 2614 "Parser.c"
    break;

  case 117: /* Expr6: _LBRACE ListBinding _RBRACE  */
#line 623 "Syntax.y"
                                { (yyval.expr_) = make_Record((yyvsp[-1].listbinding_)); result->expr_ = (yyval.expr_); }
#line 2620 "Parser.c"
    break;

  case 118: /* Expr6: _KW_cons _LPAREN Expr _COMMA Expr _RPAREN  */
#line 624 "Syntax.y"
                                              { (yyval.expr_) = make_ConsList((yyvsp[-3].expr_), (yyvsp[-1].expr_)); result->expr_ = (yyval.expr_); }
#line 2626 "Parser.c"
    break;

  case 119: /* Expr6: _SYMB_27 _LPAREN Expr _RPAREN  */
#line 625 "Syntax.y"
                                  { (yyval.expr_) = make_Head((yyvsp[-1].expr_)); result->expr_ = (yyval.expr_); }
#line 2632 "Parser.c"
    break;

  case 120: /* Expr6: _SYMB_28 _LPAREN Expr _RPAREN  */
#line 626 "Syntax.y"
                                  { (yyval.expr_) = make_IsEmpty((yyvsp[-1].expr_)); result->expr_ = (yyval.expr_); }
#line 2638 "Parser.c"
    break;

  case 121: /* Expr6: _SYMB_29 _LPAREN Expr _RPAREN  */
#line 627 "Syntax.y"
                                  { (yyval.expr_) = make_Tail((yyvsp[-1].expr_)); result->expr_ = (yyval.expr_); }
#line 2644 "Parser.c"
    break;

  case 122: /* Expr6: _SYMB_30  */
#line 628 "Syntax.y"
             { (yyval.expr_) = make_Panic(); result->expr_ = (yyval.expr_); }
#line 2650 "Parser.c"
    break;

  case 123: /* Expr6: _KW_throw _LPAREN Expr _RPAREN  */
#line 629 "Syntax.y"
                                   { (yyval.expr_) = make_Throw((yyvsp[-1].expr_)); result->expr_ = (yyval.expr_); }
#line 2656 "Parser.c"
    break;

  case 124: /* Expr6: _KW_try _LBRACE Expr _RBRACE _KW_catch _LBRACE Pattern _RDARROW Expr _RBRACE  */
#line 630 "Syntax.y"
                                                                                 { (yyval.expr_) = make_TryCatch((yyvsp[-7].expr_), (yyvsp[-3].pattern_), (yyvsp[-1].expr_)); result->expr_ = (yyval.expr_); }
#line 2662 "Parser.c"
    break;

  case 125: /* Expr6: _KW_try _LBRACE Expr _RBRACE _KW_with _LBRACE Expr _RBRACE  */
#line 631 "Syntax.y"
                                                               { (yyval.expr_) = make_TryWith((yyvsp[-5].expr_), (yyvsp[-1].expr_)); result->expr_ = (yyval.expr_); }
#line 2668 "Parser.c"
    break;

  case 126: /* Expr6: _KW_try _LBRACE Expr _RBRACE _KW_cast _KW_as Type _LBRACE Pattern _RDARROW Expr _RBRACE _KW_with _LBRACE Expr _RBRACE  */
#line 632 "Syntax.y"
                                                                                                                          { (yyval.expr_) = make_TryCastAs((yyvsp[-13].expr_), (yyvsp[-9].type_), (yyvsp[-7].pattern_), (yyvsp[-5].expr_), (yyvsp[-1].expr_)); result->expr_ = (yyval.expr_); }
#line 2674 "Parser.c"
    break;

  case 127: /* Expr6: _KW_inl _LPAREN Expr _RPAREN  */
#line 633 "Syntax.y"
                                 { (yyval.expr_) = make_Inl((yyvsp[-1].expr_)); result->expr_ = (yyval.expr_); }
#line 2680 "Parser.c"
    break;

  case 128: /* Expr6: _KW_inr _LPAREN Expr _RPAREN  */
#line 634 "Syntax.y"
                                 { (yyval.expr_) = make_Inr((yyvsp[-1].expr_)); result->expr_ = (yyval.expr_); }
#line 2686 "Parser.c"
    break;

  case 129: /* Expr6: _KW_succ _LPAREN Expr _RPAREN  */
#line 635 "Syntax.y"
                                  { (yyval.expr_) = make_Succ((yyvsp[-1].expr_)); result->expr_ = (yyval.expr_); }
#line 2692 "Parser.c"
    break;

  case 130: /* Expr6: _KW_not _LPAREN Expr _RPAREN  */
#line 636 "Syntax.y"
                                 { (yyval.expr_) = make_LogicNot((yyvsp[-1].expr_)); result->expr_ = (yyval.expr_); }
#line 2698 "Parser.c"
    break;

  case 131: /* Expr6: _SYMB_31 _LPAREN Expr _RPAREN  */
#line 637 "Syntax.y"
                                  { (yyval.expr_) = make_Pred((yyvsp[-1].expr_)); result->expr_ = (yyval.expr_); }
#line 2704 "Parser.c"
    break;

  case 132: /* Expr6: _SYMB_32 _LPAREN Expr _RPAREN  */
#line 638 "Syntax.y"
                                  { (yyval.expr_) = make_IsZero((yyvsp[-1].expr_)); result->expr_ = (yyval.expr_); }
#line 2710 "Parser.c"
    break;

  case 133: /* Expr6: _KW_fix _LPAREN Expr _RPAREN  */
#line 639 "Syntax.y"
                                 { (yyval.expr_) = make_Fix((yyvsp[-1].expr_)); result->expr_ = (yyval.expr_); }
#line 2716 "Parser.c"
    break;

  case 134: /* Expr6: _SYMB_33 _LPAREN Expr _COMMA Expr _COMMA Expr _RPAREN  */
#line 640 "Syntax.y"
                                                          { (yyval.expr_) = make_NatRec((yyvsp[-5].expr_), (yyvsp[-3].expr_), (yyvsp[-1].expr_)); result->expr_ = (yyval.expr_); }
#line 2722 "Parser.c"
    break;

  case 135: /* Expr6: _KW_fold _LBRACK Type _RBRACK Expr7  */
#line 641 "Syntax.y"
                                        { (yyval.expr_) = make_Fold((yyvsp[-2].type_), (yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 2728 "Parser.c"
    break;

  case 136: /* Expr6: _KW_unfold _LBRACK Type _RBRACK Expr7  */
#line 642 "Syntax.y"
                                          { (yyval.expr_) = make_Unfold((yyvsp[-2].type_), (yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 2734 "Parser.c"
    break;

  case 137: /* Expr6: Expr7  */
#line 643 "Syntax.y"
          { (yyval.expr_) = (yyvsp[0].expr_); result->expr_ = (yyval.expr_); }
#line 2740 "Parser.c"
    break;

  case 138: /* Expr7: _KW_true  */
#line 645 "Syntax.y"
                 { (yyval.expr_) = make_ConstTrue(); result->expr_ = (yyval.expr_); }
#line 2746 "Parser.c"
    break;

  case 139: /* Expr7: _KW_false  */
#line 646 "Syntax.y"
              { (yyval.expr_) = make_ConstFalse(); result->expr_ = (yyval.expr_); }
#line 2752 "Parser.c"
    break;

  case 140: /* Expr7: _KW_unit  */
#line 647 "Syntax.y"
             { (yyval.expr_) = make_ConstUnit(); result->expr_ = (yyval.expr_); }
#line 2758 "Parser.c"
    break;

  case 141: /* Expr7: _INTEGER_  */
#line 648 "Syntax.y"
              { (yyval.expr_) = make_ConstInt((yyvsp[0]._int)); result->expr_ = (yyval.expr_); }
#line 2764 "Parser.c"
    break;

  case 142: /* Expr7: T_MemoryAddress  */
#line 649 "Syntax.y"
                    { (yyval.expr_) = make_ConstMemory((yyvsp[0]._string)); result->expr_ = (yyval.expr_); }
#line 2770 "Parser.c"
    break;

  case 143: /* Expr7: T_StellaIdent  */
#line 650 "Syntax.y"
                  { (yyval.expr_) = make_Var((yyvsp[0]._string)); result->expr_ = (yyval.expr_); }
#line 2776 "Parser.c"
    break;

  case 144: /* Expr7: _LPAREN Expr _RPAREN  */
#line 651 "Syntax.y"
                         { (yyval.expr_) = (yyvsp[-1].expr_); result->expr_ = (yyval.expr_); }
#line 2782 "Parser.c"
    break;

  case 145: /* Type: _KW_auto  */
#line 653 "Syntax.y"
                { (yyval.type_) = make_TypeAuto(); result->type_ = (yyval.type_); }
#line 2788 "Parser.c"
    break;

  case 146: /* Type: _KW_fn _LPAREN ListType _RPAREN _RARROW Type  */
#line 654 "Syntax.y"
                                                 { (yyval.type_) = make_TypeFun((yyvsp[-3].listtype_), (yyvsp[0].type_)); result->type_ = (yyval.type_); }
#line 2794 "Parser.c"
    break;

  case 147: /* Type: _KW_forall ListStellaIdent _DOT Type  */
#line 655 "Syntax.y"
                                         { (yyval.type_) = make_TypeForAll((yyvsp[-2].liststellaident_), (yyvsp[0].type_)); result->type_ = (yyval.type_); }
#line 2800 "Parser.c"
    break;

  case 148: /* Type: _KW_82 T_StellaIdent _DOT Type  */
#line 656 "Syntax.y"
                                   { (yyval.type_) = make_TypeRec((yyvsp[-2]._string), (yyvsp[0].type_)); result->type_ = (yyval.type_); }
#line 2806 "Parser.c"
    break;

  case 149: /* Type: Type1  */
#line 657 "Syntax.y"
          { (yyval.type_) = (yyvsp[0].type_); result->type_ = (yyval.type_); }
#line 2812 "Parser.c"
    break;

  case 150: /* Type1: Type2 _PLUS Type2  */
#line 659 "Syntax.y"
                          { (yyval.type_) = make_TypeSum((yyvsp[-2].type_), (yyvsp[0].type_)); result->type_ = (yyval.type_); }
#line 2818 "Parser.c"
    break;

  case 151: /* Type1: Type2  */
#line 660 "Syntax.y"
          { (yyval.type_) = (yyvsp[0].type_); result->type_ = (yyval.type_); }
#line 2824 "Parser.c"
    break;

  case 152: /* Type2: _LBRACE ListType _RBRACE  */
#line 662 "Syntax.y"
                                 { (yyval.type_) = make_TypeTuple((yyvsp[-1].listtype_)); result->type_ = (yyval.type_); }
#line 2830 "Parser.c"
    break;

  case 153: /* Type2: _LBRACE ListRecordFieldType _RBRACE  */
#line 663 "Syntax.y"
                                        { (yyval.type_) = make_TypeRecord((yyvsp[-1].listrecordfieldtype_)); result->type_ = (yyval.type_); }
#line 2836 "Parser.c"
    break;

  case 154: /* Type2: _SYMB_13 ListVariantFieldType _SYMB_14  */
#line 664 "Syntax.y"
                                           { (yyval.type_) = make_TypeVariant((yyvsp[-1].listvariantfieldtype_)); result->type_ = (yyval.type_); }
#line 2842 "Parser.c"
    break;

  case 155: /* Type2: _LBRACK Type _RBRACK  */
#line 665 "Syntax.y"
                         { (yyval.type_) = make_TypeList((yyvsp[-1].type_)); result->type_ = (yyval.type_); }
#line 2848 "Parser.c"
    break;

  case 156: /* Type2: Type3  */
#line 666 "Syntax.y"
          { (yyval.type_) = (yyvsp[0].type_); result->type_ = (yyval.type_); }
#line 2854 "Parser.c"
    break;

  case 157: /* Type3: _KW_Bool  */
#line 668 "Syntax.y"
                 { (yyval.type_) = make_TypeBool(); result->type_ = (yyval.type_); }
#line 2860 "Parser.c"
    break;

  case 158: /* Type3: _KW_Nat  */
#line 669 "Syntax.y"
            { (yyval.type_) = make_TypeNat(); result->type_ = (yyval.type_); }
#line 2866 "Parser.c"
    break;

  case 159: /* Type3: _KW_Unit  */
#line 670 "Syntax.y"
             { (yyval.type_) = make_TypeUnit(); result->type_ = (yyval.type_); }
#line 2872 "Parser.c"
    break;

  case 160: /* Type3: _KW_Top  */
#line 671 "Syntax.y"
            { (yyval.type_) = make_TypeTop(); result->type_ = (yyval.type_); }
#line 2878 "Parser.c"
    break;

  case 161: /* Type3: _KW_Bot  */
#line 672 "Syntax.y"
            { (yyval.type_) = make_TypeBottom(); result->type_ = (yyval.type_); }
#line 2884 "Parser.c"
    break;

  case 162: /* Type3: _AMP Type2  */
#line 673 "Syntax.y"
               { (yyval.type_) = make_TypeRef((yyvsp[0].type_)); result->type_ = (yyval.type_); }
#line 2890 "Parser.c"
    break;

  case 163: /* Type3: T_StellaIdent  */
#line 674 "Syntax.y"
                  { (yyval.type_) = make_TypeVar((yyvsp[0]._string)); result->type_ = (yyval.type_); }
#line 2896 "Parser.c"
    break;

  case 164: /* Type3: _LPAREN Type _RPAREN  */
#line 675 "Syntax.y"
                         { (yyval.type_) = (yyvsp[-1].type_); result->type_ = (yyval.type_); }
#line 2902 "Parser.c"
    break;

  case 165: /* ListType: %empty  */
#line 677 "Syntax.y"
                       { (yyval.listtype_) = 0; result->listtype_ = (yyval.listtype_); }
#line 2908 "Parser.c"
    break;

  case 166: /* ListType: Type  */
#line 678 "Syntax.y"
         { (yyval.listtype_) = make_ListType((yyvsp[0].type_), 0); result->listtype_ = (yyval.listtype_); }
#line 2914 "Parser.c"
    break;

  case 167: /* ListType: Type _COMMA ListType  */
#line 679 "Syntax.y"
                         { (yyval.listtype_) = make_ListType((yyvsp[-2].type_), (yyvsp[0].listtype_)); result->listtype_ = (yyval.listtype_); }
#line 2920 "Parser.c"
    break;

  case 168: /* VariantFieldType: T_StellaIdent OptionalTyping  */
#line 681 "Syntax.y"
                                                { (yyval.variantfieldtype_) = make_AVariantFieldType((yyvsp[-1]._string), (yyvsp[0].optionaltyping_)); result->variantfieldtype_ = (yyval.variantfieldtype_); }
#line 2926 "Parser.c"
    break;

  case 169: /* ListVariantFieldType: %empty  */
#line 683 "Syntax.y"
                                   { (yyval.listvariantfieldtype_) = 0; result->listvariantfieldtype_ = (yyval.listvariantfieldtype_); }
#line 2932 "Parser.c"
    break;

  case 170: /* ListVariantFieldType: VariantFieldType  */
#line 684 "Syntax.y"
                     { (yyval.listvariantfieldtype_) = make_ListVariantFieldType((yyvsp[0].variantfieldtype_), 0); result->listvariantfieldtype_ = (yyval.listvariantfieldtype_); }
#line 2938 "Parser.c"
    break;

  case 171: /* ListVariantFieldType: VariantFieldType _COMMA ListVariantFieldType  */
#line 685 "Syntax.y"
                                                 { (yyval.listvariantfieldtype_) = make_ListVariantFieldType((yyvsp[-2].variantfieldtype_), (yyvsp[0].listvariantfieldtype_)); result->listvariantfieldtype_ = (yyval.listvariantfieldtype_); }
#line 2944 "Parser.c"
    break;

  case 172: /* RecordFieldType: T_StellaIdent _COLON Type  */
#line 687 "Syntax.y"
                                            { (yyval.recordfieldtype_) = make_ARecordFieldType((yyvsp[-2]._string), (yyvsp[0].type_)); result->recordfieldtype_ = (yyval.recordfieldtype_); }
#line 2950 "Parser.c"
    break;

  case 173: /* ListRecordFieldType: RecordFieldType  */
#line 689 "Syntax.y"
                                      { (yyval.listrecordfieldtype_) = make_ListRecordFieldType((yyvsp[0].recordfieldtype_), 0); result->listrecordfieldtype_ = (yyval.listrecordfieldtype_); }
#line 2956 "Parser.c"
    break;

  case 174: /* ListRecordFieldType: RecordFieldType _COMMA ListRecordFieldType  */
#line 690 "Syntax.y"
                                               { (yyval.listrecordfieldtype_) = make_ListRecordFieldType((yyvsp[-2].recordfieldtype_), (yyvsp[0].listrecordfieldtype_)); result->listrecordfieldtype_ = (yyval.listrecordfieldtype_); }
#line 2962 "Parser.c"
    break;


#line 2966 "Parser.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (&yylloc, scanner, result, YY_("syntax error"));
    }

  yyerror_range[1] = yylloc;
  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc, scanner, result);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp, scanner, result);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (&yylloc, scanner, result, YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc, scanner, result);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp, scanner, result);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 695 "Syntax.y"



/* Entrypoint: parse Program from file. */
Program pProgram(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.program_;
  }
}

/* Entrypoint: parse Program from string. */
Program psProgram(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = syntax__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  syntax__delete_buffer(buf, scanner);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.program_;
  }
}

/* Entrypoint: parse ListStellaIdent from file. */
ListStellaIdent pListStellaIdent(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.liststellaident_;
  }
}

/* Entrypoint: parse ListStellaIdent from string. */
ListStellaIdent psListStellaIdent(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = syntax__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  syntax__delete_buffer(buf, scanner);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.liststellaident_;
  }
}

/* Entrypoint: parse LanguageDecl from file. */
LanguageDecl pLanguageDecl(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.languagedecl_;
  }
}

/* Entrypoint: parse LanguageDecl from string. */
LanguageDecl psLanguageDecl(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = syntax__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  syntax__delete_buffer(buf, scanner);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.languagedecl_;
  }
}

/* Entrypoint: parse Extension from file. */
Extension pExtension(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.extension_;
  }
}

/* Entrypoint: parse Extension from string. */
Extension psExtension(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = syntax__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  syntax__delete_buffer(buf, scanner);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.extension_;
  }
}

/* Entrypoint: parse ListExtensionName from file. */
ListExtensionName pListExtensionName(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.listextensionname_;
  }
}

/* Entrypoint: parse ListExtensionName from string. */
ListExtensionName psListExtensionName(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = syntax__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  syntax__delete_buffer(buf, scanner);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.listextensionname_;
  }
}

/* Entrypoint: parse ListExtension from file. */
ListExtension pListExtension(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return reverseListExtension(result.listextension_);
  }
}

/* Entrypoint: parse ListExtension from string. */
ListExtension psListExtension(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = syntax__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  syntax__delete_buffer(buf, scanner);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return reverseListExtension(result.listextension_);
  }
}

/* Entrypoint: parse Decl from file. */
Decl pDecl(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.decl_;
  }
}

/* Entrypoint: parse Decl from string. */
Decl psDecl(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = syntax__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  syntax__delete_buffer(buf, scanner);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.decl_;
  }
}

/* Entrypoint: parse ListDecl from file. */
ListDecl pListDecl(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return reverseListDecl(result.listdecl_);
  }
}

/* Entrypoint: parse ListDecl from string. */
ListDecl psListDecl(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = syntax__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  syntax__delete_buffer(buf, scanner);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return reverseListDecl(result.listdecl_);
  }
}

/* Entrypoint: parse LocalDecl from file. */
LocalDecl pLocalDecl(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.localdecl_;
  }
}

/* Entrypoint: parse LocalDecl from string. */
LocalDecl psLocalDecl(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = syntax__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  syntax__delete_buffer(buf, scanner);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.localdecl_;
  }
}

/* Entrypoint: parse ListLocalDecl from file. */
ListLocalDecl pListLocalDecl(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return reverseListLocalDecl(result.listlocaldecl_);
  }
}

/* Entrypoint: parse ListLocalDecl from string. */
ListLocalDecl psListLocalDecl(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = syntax__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  syntax__delete_buffer(buf, scanner);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return reverseListLocalDecl(result.listlocaldecl_);
  }
}

/* Entrypoint: parse Annotation from file. */
Annotation pAnnotation(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.annotation_;
  }
}

/* Entrypoint: parse Annotation from string. */
Annotation psAnnotation(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = syntax__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  syntax__delete_buffer(buf, scanner);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.annotation_;
  }
}

/* Entrypoint: parse ListAnnotation from file. */
ListAnnotation pListAnnotation(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return reverseListAnnotation(result.listannotation_);
  }
}

/* Entrypoint: parse ListAnnotation from string. */
ListAnnotation psListAnnotation(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = syntax__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  syntax__delete_buffer(buf, scanner);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return reverseListAnnotation(result.listannotation_);
  }
}

/* Entrypoint: parse ParamDecl from file. */
ParamDecl pParamDecl(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.paramdecl_;
  }
}

/* Entrypoint: parse ParamDecl from string. */
ParamDecl psParamDecl(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = syntax__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  syntax__delete_buffer(buf, scanner);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.paramdecl_;
  }
}

/* Entrypoint: parse ListParamDecl from file. */
ListParamDecl pListParamDecl(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.listparamdecl_;
  }
}

/* Entrypoint: parse ListParamDecl from string. */
ListParamDecl psListParamDecl(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = syntax__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  syntax__delete_buffer(buf, scanner);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.listparamdecl_;
  }
}

/* Entrypoint: parse ReturnType from file. */
ReturnType pReturnType(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.returntype_;
  }
}

/* Entrypoint: parse ReturnType from string. */
ReturnType psReturnType(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = syntax__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  syntax__delete_buffer(buf, scanner);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.returntype_;
  }
}

/* Entrypoint: parse ThrowType from file. */
ThrowType pThrowType(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.throwtype_;
  }
}

/* Entrypoint: parse ThrowType from string. */
ThrowType psThrowType(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = syntax__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  syntax__delete_buffer(buf, scanner);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.throwtype_;
  }
}

/* Entrypoint: parse Type from file. */
Type pType9(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.type_;
  }
}

/* Entrypoint: parse Type from string. */
Type psType9(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = syntax__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  syntax__delete_buffer(buf, scanner);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.type_;
  }
}

/* Entrypoint: parse ListType from file. */
ListType pListType9(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.listtype_;
  }
}

/* Entrypoint: parse ListType from string. */
ListType psListType9(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = syntax__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  syntax__delete_buffer(buf, scanner);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.listtype_;
  }
}

/* Entrypoint: parse MatchCase from file. */
MatchCase pMatchCase(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.matchcase_;
  }
}

/* Entrypoint: parse MatchCase from string. */
MatchCase psMatchCase(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = syntax__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  syntax__delete_buffer(buf, scanner);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.matchcase_;
  }
}

/* Entrypoint: parse ListMatchCase from file. */
ListMatchCase pListMatchCase(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.listmatchcase_;
  }
}

/* Entrypoint: parse ListMatchCase from string. */
ListMatchCase psListMatchCase(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = syntax__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  syntax__delete_buffer(buf, scanner);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.listmatchcase_;
  }
}

/* Entrypoint: parse OptionalTyping from file. */
OptionalTyping pOptionalTyping(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.optionaltyping_;
  }
}

/* Entrypoint: parse OptionalTyping from string. */
OptionalTyping psOptionalTyping(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = syntax__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  syntax__delete_buffer(buf, scanner);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.optionaltyping_;
  }
}

/* Entrypoint: parse PatternData from file. */
PatternData pPatternData(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.patterndata_;
  }
}

/* Entrypoint: parse PatternData from string. */
PatternData psPatternData(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = syntax__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  syntax__delete_buffer(buf, scanner);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.patterndata_;
  }
}

/* Entrypoint: parse ExprData from file. */
ExprData pExprData(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.exprdata_;
  }
}

/* Entrypoint: parse ExprData from string. */
ExprData psExprData(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = syntax__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  syntax__delete_buffer(buf, scanner);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.exprdata_;
  }
}

/* Entrypoint: parse Pattern from file. */
Pattern pPattern(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.pattern_;
  }
}

/* Entrypoint: parse Pattern from string. */
Pattern psPattern(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = syntax__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  syntax__delete_buffer(buf, scanner);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.pattern_;
  }
}

/* Entrypoint: parse ListPattern from file. */
ListPattern pListPattern(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.listpattern_;
  }
}

/* Entrypoint: parse ListPattern from string. */
ListPattern psListPattern(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = syntax__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  syntax__delete_buffer(buf, scanner);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.listpattern_;
  }
}

/* Entrypoint: parse LabelledPattern from file. */
LabelledPattern pLabelledPattern(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.labelledpattern_;
  }
}

/* Entrypoint: parse LabelledPattern from string. */
LabelledPattern psLabelledPattern(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = syntax__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  syntax__delete_buffer(buf, scanner);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.labelledpattern_;
  }
}

/* Entrypoint: parse ListLabelledPattern from file. */
ListLabelledPattern pListLabelledPattern(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.listlabelledpattern_;
  }
}

/* Entrypoint: parse ListLabelledPattern from string. */
ListLabelledPattern psListLabelledPattern(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = syntax__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  syntax__delete_buffer(buf, scanner);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.listlabelledpattern_;
  }
}

/* Entrypoint: parse Binding from file. */
Binding pBinding(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.binding_;
  }
}

/* Entrypoint: parse Binding from string. */
Binding psBinding(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = syntax__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  syntax__delete_buffer(buf, scanner);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.binding_;
  }
}

/* Entrypoint: parse ListBinding from file. */
ListBinding pListBinding(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.listbinding_;
  }
}

/* Entrypoint: parse ListBinding from string. */
ListBinding psListBinding(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = syntax__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  syntax__delete_buffer(buf, scanner);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.listbinding_;
  }
}

/* Entrypoint: parse Expr from file. */
Expr pExpr(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expr_;
  }
}

/* Entrypoint: parse Expr from string. */
Expr psExpr(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = syntax__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  syntax__delete_buffer(buf, scanner);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expr_;
  }
}

/* Entrypoint: parse ListExpr from file. */
ListExpr pListExpr(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.listexpr_;
  }
}

/* Entrypoint: parse ListExpr from string. */
ListExpr psListExpr(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = syntax__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  syntax__delete_buffer(buf, scanner);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.listexpr_;
  }
}

/* Entrypoint: parse Expr from file. */
Expr pExpr1(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expr_;
  }
}

/* Entrypoint: parse Expr from string. */
Expr psExpr1(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = syntax__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  syntax__delete_buffer(buf, scanner);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expr_;
  }
}

/* Entrypoint: parse PatternBinding from file. */
PatternBinding pPatternBinding(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.patternbinding_;
  }
}

/* Entrypoint: parse PatternBinding from string. */
PatternBinding psPatternBinding(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = syntax__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  syntax__delete_buffer(buf, scanner);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.patternbinding_;
  }
}

/* Entrypoint: parse ListPatternBinding from file. */
ListPatternBinding pListPatternBinding(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.listpatternbinding_;
  }
}

/* Entrypoint: parse ListPatternBinding from string. */
ListPatternBinding psListPatternBinding(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = syntax__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  syntax__delete_buffer(buf, scanner);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.listpatternbinding_;
  }
}

/* Entrypoint: parse Expr from file. */
Expr pExpr2(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expr_;
  }
}

/* Entrypoint: parse Expr from string. */
Expr psExpr2(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = syntax__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  syntax__delete_buffer(buf, scanner);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expr_;
  }
}

/* Entrypoint: parse ListExpr from file. */
ListExpr pListExpr2(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.listexpr_;
  }
}

/* Entrypoint: parse ListExpr from string. */
ListExpr psListExpr2(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = syntax__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  syntax__delete_buffer(buf, scanner);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.listexpr_;
  }
}

/* Entrypoint: parse Mod from file. */
Mod pMod(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.mod_;
  }
}

/* Entrypoint: parse Mod from string. */
Mod psMod(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = syntax__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  syntax__delete_buffer(buf, scanner);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.mod_;
  }
}

/* Entrypoint: parse Expr from file. */
Expr pExpr3(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expr_;
  }
}

/* Entrypoint: parse Expr from string. */
Expr psExpr3(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = syntax__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  syntax__delete_buffer(buf, scanner);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expr_;
  }
}

/* Entrypoint: parse Expr from file. */
Expr pExpr4(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expr_;
  }
}

/* Entrypoint: parse Expr from string. */
Expr psExpr4(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = syntax__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  syntax__delete_buffer(buf, scanner);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expr_;
  }
}

/* Entrypoint: parse Expr from file. */
Expr pExpr5(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expr_;
  }
}

/* Entrypoint: parse Expr from string. */
Expr psExpr5(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = syntax__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  syntax__delete_buffer(buf, scanner);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expr_;
  }
}

/* Entrypoint: parse Expr from file. */
Expr pExpr6(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expr_;
  }
}

/* Entrypoint: parse Expr from string. */
Expr psExpr6(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = syntax__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  syntax__delete_buffer(buf, scanner);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expr_;
  }
}

/* Entrypoint: parse Expr from file. */
Expr pExpr7(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expr_;
  }
}

/* Entrypoint: parse Expr from string. */
Expr psExpr7(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = syntax__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  syntax__delete_buffer(buf, scanner);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expr_;
  }
}

/* Entrypoint: parse Type from file. */
Type pType(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.type_;
  }
}

/* Entrypoint: parse Type from string. */
Type psType(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = syntax__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  syntax__delete_buffer(buf, scanner);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.type_;
  }
}

/* Entrypoint: parse Type from file. */
Type pType1(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.type_;
  }
}

/* Entrypoint: parse Type from string. */
Type psType1(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = syntax__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  syntax__delete_buffer(buf, scanner);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.type_;
  }
}

/* Entrypoint: parse Type from file. */
Type pType2(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.type_;
  }
}

/* Entrypoint: parse Type from string. */
Type psType2(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = syntax__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  syntax__delete_buffer(buf, scanner);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.type_;
  }
}

/* Entrypoint: parse Type from file. */
Type pType3(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.type_;
  }
}

/* Entrypoint: parse Type from string. */
Type psType3(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = syntax__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  syntax__delete_buffer(buf, scanner);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.type_;
  }
}

/* Entrypoint: parse ListType from file. */
ListType pListType(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.listtype_;
  }
}

/* Entrypoint: parse ListType from string. */
ListType psListType(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = syntax__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  syntax__delete_buffer(buf, scanner);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.listtype_;
  }
}

/* Entrypoint: parse VariantFieldType from file. */
VariantFieldType pVariantFieldType(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.variantfieldtype_;
  }
}

/* Entrypoint: parse VariantFieldType from string. */
VariantFieldType psVariantFieldType(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = syntax__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  syntax__delete_buffer(buf, scanner);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.variantfieldtype_;
  }
}

/* Entrypoint: parse ListVariantFieldType from file. */
ListVariantFieldType pListVariantFieldType(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.listvariantfieldtype_;
  }
}

/* Entrypoint: parse ListVariantFieldType from string. */
ListVariantFieldType psListVariantFieldType(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = syntax__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  syntax__delete_buffer(buf, scanner);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.listvariantfieldtype_;
  }
}

/* Entrypoint: parse RecordFieldType from file. */
RecordFieldType pRecordFieldType(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.recordfieldtype_;
  }
}

/* Entrypoint: parse RecordFieldType from string. */
RecordFieldType psRecordFieldType(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = syntax__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  syntax__delete_buffer(buf, scanner);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.recordfieldtype_;
  }
}

/* Entrypoint: parse ListRecordFieldType from file. */
ListRecordFieldType pListRecordFieldType(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.listrecordfieldtype_;
  }
}

/* Entrypoint: parse ListRecordFieldType from string. */
ListRecordFieldType psListRecordFieldType(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = syntax__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  syntax__delete_buffer(buf, scanner);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.listrecordfieldtype_;
  }
}

/* Entrypoint: parse Typing from file. */
Typing pTyping(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.typing_;
  }
}

/* Entrypoint: parse Typing from string. */
Typing psTyping(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = syntax__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  syntax__delete_buffer(buf, scanner);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.typing_;
  }
}



