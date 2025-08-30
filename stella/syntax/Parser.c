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
  YYSYMBOL__KW_match = 63,                 /* _KW_match  */
  YYSYMBOL__KW_new = 64,                   /* _KW_new  */
  YYSYMBOL__KW_not = 65,                   /* _KW_not  */
  YYSYMBOL__KW_or = 66,                    /* _KW_or  */
  YYSYMBOL__SYMB_30 = 67,                  /* _SYMB_30  */
  YYSYMBOL__KW_return = 68,                /* _KW_return  */
  YYSYMBOL__KW_succ = 69,                  /* _KW_succ  */
  YYSYMBOL__KW_then = 70,                  /* _KW_then  */
  YYSYMBOL__KW_throw = 71,                 /* _KW_throw  */
  YYSYMBOL__KW_throws = 72,                /* _KW_throws  */
  YYSYMBOL__KW_true = 73,                  /* _KW_true  */
  YYSYMBOL__KW_try = 74,                   /* _KW_try  */
  YYSYMBOL__KW_type = 75,                  /* _KW_type  */
  YYSYMBOL__KW_unfold = 76,                /* _KW_unfold  */
  YYSYMBOL__KW_unit = 77,                  /* _KW_unit  */
  YYSYMBOL__KW_variant = 78,               /* _KW_variant  */
  YYSYMBOL__KW_with = 79,                  /* _KW_with  */
  YYSYMBOL__LBRACE = 80,                   /* _LBRACE  */
  YYSYMBOL__BAR = 81,                      /* _BAR  */
  YYSYMBOL__SYMB_14 = 82,                  /* _SYMB_14  */
  YYSYMBOL__RBRACE = 83,                   /* _RBRACE  */
  YYSYMBOL__KW_80 = 84,                    /* _KW_80  */
  YYSYMBOL_T_ExtensionName = 85,           /* T_ExtensionName  */
  YYSYMBOL_T_MemoryAddress = 86,           /* T_MemoryAddress  */
  YYSYMBOL_T_StellaIdent = 87,             /* T_StellaIdent  */
  YYSYMBOL__INTEGER_ = 88,                 /* _INTEGER_  */
  YYSYMBOL_YYACCEPT = 89,                  /* $accept  */
  YYSYMBOL_Program = 90,                   /* Program  */
  YYSYMBOL_ListStellaIdent = 91,           /* ListStellaIdent  */
  YYSYMBOL_LanguageDecl = 92,              /* LanguageDecl  */
  YYSYMBOL_Extension = 93,                 /* Extension  */
  YYSYMBOL_ListExtensionName = 94,         /* ListExtensionName  */
  YYSYMBOL_ListExtension = 95,             /* ListExtension  */
  YYSYMBOL_Decl = 96,                      /* Decl  */
  YYSYMBOL_ListDecl = 97,                  /* ListDecl  */
  YYSYMBOL_Annotation = 98,                /* Annotation  */
  YYSYMBOL_ListAnnotation = 99,            /* ListAnnotation  */
  YYSYMBOL_ParamDecl = 100,                /* ParamDecl  */
  YYSYMBOL_ListParamDecl = 101,            /* ListParamDecl  */
  YYSYMBOL_ReturnType = 102,               /* ReturnType  */
  YYSYMBOL_ThrowType = 103,                /* ThrowType  */
  YYSYMBOL_Type9 = 104,                    /* Type9  */
  YYSYMBOL_ListType9 = 105,                /* ListType9  */
  YYSYMBOL_MatchCase = 106,                /* MatchCase  */
  YYSYMBOL_ListMatchCase = 107,            /* ListMatchCase  */
  YYSYMBOL_OptionalTyping = 108,           /* OptionalTyping  */
  YYSYMBOL_PatternData = 109,              /* PatternData  */
  YYSYMBOL_ExprData = 110,                 /* ExprData  */
  YYSYMBOL_Pattern = 111,                  /* Pattern  */
  YYSYMBOL_ListPattern = 112,              /* ListPattern  */
  YYSYMBOL_LabelledPattern = 113,          /* LabelledPattern  */
  YYSYMBOL_ListLabelledPattern = 114,      /* ListLabelledPattern  */
  YYSYMBOL_Binding = 115,                  /* Binding  */
  YYSYMBOL_ListBinding = 116,              /* ListBinding  */
  YYSYMBOL_Expr = 117,                     /* Expr  */
  YYSYMBOL_ListExpr = 118,                 /* ListExpr  */
  YYSYMBOL_Expr1 = 119,                    /* Expr1  */
  YYSYMBOL_PatternBinding = 120,           /* PatternBinding  */
  YYSYMBOL_ListPatternBinding = 121,       /* ListPatternBinding  */
  YYSYMBOL_Expr2 = 122,                    /* Expr2  */
  YYSYMBOL_Expr3 = 123,                    /* Expr3  */
  YYSYMBOL_Expr4 = 124,                    /* Expr4  */
  YYSYMBOL_Expr5 = 125,                    /* Expr5  */
  YYSYMBOL_Expr6 = 126,                    /* Expr6  */
  YYSYMBOL_Expr7 = 127,                    /* Expr7  */
  YYSYMBOL_Type = 128,                     /* Type  */
  YYSYMBOL_Type1 = 129,                    /* Type1  */
  YYSYMBOL_Type2 = 130,                    /* Type2  */
  YYSYMBOL_Type3 = 131,                    /* Type3  */
  YYSYMBOL_ListType = 132,                 /* ListType  */
  YYSYMBOL_VariantFieldType = 133,         /* VariantFieldType  */
  YYSYMBOL_ListVariantFieldType = 134,     /* ListVariantFieldType  */
  YYSYMBOL_RecordFieldType = 135,          /* RecordFieldType  */
  YYSYMBOL_ListRecordFieldType = 136       /* ListRecordFieldType  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;


/* Second part of user prologue.  */
#line 304 "Syntax.y"

void yyerror(YYLTYPE *loc, yyscan_t scanner, YYSTYPE *result, const char *msg)
{
  fprintf(stderr, "error: %d,%d: %s at %s\n",
    loc->first_line, loc->first_column, msg, syntax_get_text(scanner));
}

int yyparse(yyscan_t scanner, YYSTYPE *result);

extern int yylex(YYSTYPE *lvalp, YYLTYPE *llocp, yyscan_t scanner);

#line 496 "Parser.c"


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
#define YYLAST   737

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  89
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  48
/* YYNRULES -- Number of rules.  */
#define YYNRULES  171
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  422

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   343


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
      85,    86,    87,    88
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   459,   459,   461,   462,   463,   465,   467,   469,   470,
     471,   473,   474,   476,   477,   478,   479,   480,   482,   483,
     490,   492,   493,   495,   497,   498,   499,   501,   502,   504,
     505,   507,   509,   510,   512,   514,   515,   516,   518,   519,
     521,   522,   524,   525,   527,   528,   529,   530,   531,   532,
     533,   534,   535,   536,   537,   538,   539,   540,   541,   542,
     543,   545,   546,   547,   549,   551,   552,   554,   556,   557,
     559,   560,   561,   562,   563,   564,   566,   567,   568,   570,
     571,   572,   574,   576,   577,   579,   580,   581,   582,   583,
     584,   585,   590,   591,   592,   593,   594,   595,   596,   597,
     598,   599,   601,   602,   603,   604,   606,   607,   608,   610,
     611,   612,   613,   614,   615,   616,   617,   618,   619,   620,
     621,   622,   623,   624,   625,   626,   627,   628,   629,   630,
     631,   632,   633,   634,   635,   637,   638,   639,   640,   641,
     642,   643,   645,   646,   647,   648,   649,   651,   652,   654,
     655,   656,   657,   658,   660,   661,   662,   663,   664,   665,
     666,   667,   669,   670,   671,   673,   675,   676,   677,   679,
     681,   682
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
  "_KW_language", "_KW_let", "_KW_letrec", "_KW_match", "_KW_new",
  "_KW_not", "_KW_or", "_SYMB_30", "_KW_return", "_KW_succ", "_KW_then",
  "_KW_throw", "_KW_throws", "_KW_true", "_KW_try", "_KW_type",
  "_KW_unfold", "_KW_unit", "_KW_variant", "_KW_with", "_LBRACE", "_BAR",
  "_SYMB_14", "_RBRACE", "_KW_80", "T_ExtensionName", "T_MemoryAddress",
  "T_StellaIdent", "_INTEGER_", "$accept", "Program", "ListStellaIdent",
  "LanguageDecl", "Extension", "ListExtensionName", "ListExtension",
  "Decl", "ListDecl", "Annotation", "ListAnnotation", "ParamDecl",
  "ListParamDecl", "ReturnType", "ThrowType", "Type9", "ListType9",
  "MatchCase", "ListMatchCase", "OptionalTyping", "PatternData",
  "ExprData", "Pattern", "ListPattern", "LabelledPattern",
  "ListLabelledPattern", "Binding", "ListBinding", "Expr", "ListExpr",
  "Expr1", "PatternBinding", "ListPatternBinding", "Expr2", "Expr3",
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

#define YYPACT_NINF (-291)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-3)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -20,    41,    47,  -291,    36,  -291,    31,  -291,    49,    77,
      34,    44,  -291,   -26,    12,  -291,    88,   120,  -291,   115,
      50,   123,    58,    99,  -291,  -291,    44,   540,   136,   540,
     153,    80,  -291,   642,   540,    85,  -291,  -291,  -291,  -291,
    -291,   540,  -291,   158,    89,   553,    90,  -291,  -291,  -291,
     165,  -291,   540,  -291,    92,   138,  -291,   176,   169,   175,
     104,   149,   540,   179,   177,   180,   182,   111,   186,   117,
     188,   642,  -291,   183,   192,   196,    89,  -291,   540,  -291,
      85,  -291,  -291,   197,    89,   540,   540,   540,  -291,   119,
    -291,   540,  -291,   540,    92,   195,   170,  -291,  -291,   199,
    -291,  -291,  -291,  -291,   180,  -291,  -291,  -291,  -291,   540,
     137,   214,   540,  -291,   540,   141,    92,  -291,   213,  -291,
    -291,  -291,   217,   540,    65,   195,  -291,   281,   137,   281,
     185,   143,   219,   221,   222,   225,   226,   230,   281,   232,
    -291,   233,   234,   204,   206,   405,   239,   241,   566,   566,
     467,   242,   245,  -291,   247,   251,  -291,   184,   223,  -291,
     343,  -291,  -291,  -291,   187,   246,   250,   671,    87,  -291,
     125,  -291,   189,   260,  -291,   254,   281,   281,   281,   281,
     281,   281,   273,   248,   281,   281,    92,   540,    89,   215,
     281,   281,   566,   201,   566,   284,  -291,   285,   287,   288,
    -291,  -291,   572,  -291,  -291,    15,   286,   243,   244,   218,
     281,   281,   281,   281,   281,   540,   274,   292,   236,   237,
    -291,   281,   405,   467,   185,   185,   467,   467,   467,   467,
     467,   642,   257,   185,   185,   185,   185,   281,    10,   540,
    -291,  -291,   281,   224,   297,   298,   301,   310,   314,   312,
     281,  -291,   313,   317,   319,   289,   290,   405,   322,   327,
      14,   316,    82,   303,   566,   566,   566,   566,   318,   264,
     346,   270,   281,   540,   320,   566,   281,   281,   566,   352,
     355,   357,   358,   283,   336,   281,   291,  -291,  -291,  -291,
    -291,     2,    87,    87,     2,     2,     2,     2,     2,  -291,
     642,    87,  -291,  -291,  -291,   372,  -291,  -291,   344,    73,
    -291,  -291,  -291,  -291,  -291,  -291,  -291,   281,  -291,   281,
    -291,   304,    70,   281,   335,  -291,  -291,  -291,   566,   566,
     306,   566,  -291,    83,     3,     8,    20,   566,  -291,   296,
    -291,  -291,  -291,   540,  -291,  -291,  -291,   305,   302,   126,
    -291,  -291,  -291,  -291,   -12,    70,  -291,   274,  -291,  -291,
    -291,  -291,   281,   379,   383,   323,  -291,  -291,   405,    21,
      -7,  -291,  -291,   566,  -291,  -291,  -291,    -7,   318,  -291,
    -291,   566,  -291,   281,   356,   321,   329,  -291,   332,   281,
    -291,   281,  -291,  -291,    68,  -291,  -291,   540,   566,   281,
    -291,   392,   338,  -291,   342,   131,   341,  -291,  -291,   566,
     281,  -291,   140,   345,   281,  -291,   349,   324,   347,   281,
     353,  -291
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,    11,     0,     1,    18,     6,     0,     0,
      21,     8,    12,     0,     0,    19,     0,     9,     7,     0,
       0,     0,     0,     0,    20,    22,     8,     0,     0,     0,
       0,     0,    10,     0,     0,   166,   154,   158,   155,   157,
     156,     0,   142,     0,     3,   162,     0,   160,    16,   146,
     148,   153,     0,    15,    24,     0,   159,     0,    38,   167,
       0,     0,   162,     4,     0,   160,   163,     0,   170,     0,
       0,     0,    17,     0,    25,     0,     3,   161,     0,   165,
     166,   151,   152,     0,     3,     0,     0,   162,   149,     0,
     150,     0,   147,     0,    24,    27,     0,    39,   168,     0,
       5,   144,   169,   164,     0,   171,   145,    23,    26,     0,
      29,     0,     0,    28,     0,     0,    24,   143,    32,    30,
      31,    18,     0,     0,    21,    27,    33,     0,    29,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    76,     0,
     136,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   119,     0,     0,   135,     0,     0,   137,
      76,   139,   140,   138,     0,    75,    81,    91,   101,   105,
     108,   134,     0,     0,   107,    42,     0,     0,     0,     0,
       0,     0,    77,     0,     0,     0,    24,     0,     3,     0,
       0,     0,     0,     0,    61,     0,    54,     0,     0,     0,
      55,    56,    61,    59,    57,     0,    83,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   140,    68,     0,     0,
      13,    71,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    76,     0,   162,
      18,   141,     0,     0,     0,     0,     0,     0,     0,     0,
      76,    97,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    40,    62,     0,     0,     0,     0,     0,    59,     0,
      65,     0,     0,     0,     0,     0,     0,     0,    35,     0,
       0,     0,     0,     0,     0,     0,     0,   114,   113,    70,
      79,    90,    98,    99,    85,    86,    89,    87,    88,    92,
       0,   100,   102,   103,   104,     0,   111,   112,     0,    21,
      43,    95,   116,   117,   118,   129,   128,     0,    78,     0,
     130,     0,     0,     0,     0,   124,   125,    60,     0,     0,
       0,    61,    51,     0,     0,     0,     0,     0,    49,     0,
      50,    82,    45,     0,    84,    72,    73,    36,     0,     0,
     106,   127,   126,   120,     0,     0,    67,     0,    69,    93,
     109,   110,     0,     0,     0,     0,   132,    74,     0,     0,
      41,    46,    63,     0,    47,    48,    58,    64,     0,    66,
      44,    35,    96,     0,     0,     0,     0,   133,     0,     0,
     115,     0,    80,    53,     0,    37,    34,     0,     0,     0,
      14,     0,     0,    52,     0,     0,     0,   131,    94,     0,
       0,   122,     0,     0,     0,   121,     0,     0,     0,     0,
       0,   123
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -291,  -291,   -67,  -291,  -291,   400,  -291,  -291,  -113,  -291,
    -291,  -291,   -75,   293,   315,  -291,   325,  -291,    59,  -291,
    -291,  -291,  -176,  -197,  -291,   102,  -291,   159,  -107,  -137,
    -142,  -291,  -143,   294,    51,  -187,  -118,  -291,  -290,   -27,
    -291,   -32,  -291,   -58,  -291,   366,  -291,   361
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,    64,     3,     9,    18,     6,    15,    10,    25,
      16,    74,    75,   110,   115,   118,   119,   347,   348,    79,
     330,   243,   205,   263,   270,   271,   217,   218,   182,   183,
     165,   206,   207,   166,   167,   168,   169,   170,   171,    66,
      49,    50,    51,    67,    59,    60,    68,    69
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      48,    56,    53,   189,    83,   269,   208,    57,   124,    96,
     374,   224,   174,   225,    61,   375,   260,   100,   262,   108,
     164,   327,   173,   219,   328,    72,   262,   376,   393,   103,
     384,   385,   366,   273,    -2,   274,   272,   292,   293,    92,
       1,   122,   231,   273,   232,   274,   301,     5,   273,    19,
     274,    97,    20,     7,   273,   273,   274,   274,   101,   102,
     273,   273,   274,   274,   106,   387,   107,   386,   233,   244,
     245,   246,   247,   248,   249,   403,   129,   252,   253,     8,
     290,    13,   113,   258,   259,   117,     4,   120,   333,   334,
     335,   336,   331,   373,    12,   234,   120,   306,   307,    21,
     305,   235,   349,   279,   280,   281,   282,   283,   273,    14,
     274,   254,    13,   318,   289,   324,   302,   303,   304,   140,
      13,   256,   273,   273,   274,   274,   236,   309,    11,    17,
      26,   237,   344,   127,   372,   310,    27,    28,   238,    22,
      14,   362,    23,   156,    29,    30,    24,   159,    14,   383,
      31,    52,   369,   370,   410,   262,   161,   162,   163,    54,
     255,   377,   239,   414,    62,   341,   273,    55,   274,   345,
     346,   273,    58,   274,    71,    76,    63,    70,   356,    73,
     273,   308,   274,    77,    78,    80,    81,    82,   284,    84,
      85,   129,    87,   130,    88,    86,    89,   394,    93,   299,
      90,    91,    94,    95,    99,   349,   104,   109,   111,   114,
     363,   112,   364,   132,   133,   134,   367,   135,   136,   137,
     116,   121,   405,   123,   125,   176,   392,   177,   178,   139,
     175,   179,   180,   412,   140,   141,   181,   143,   184,   185,
     186,   187,   146,   188,   147,   190,   342,   191,   210,   151,
     152,   211,   153,   212,   154,   388,   155,   213,   156,   157,
     215,   158,   159,   221,   214,   160,   222,   241,   359,   240,
     220,   161,   162,   163,   291,   242,   396,   294,   295,   296,
     297,   298,   401,   250,   402,   257,   251,   129,   261,   130,
     264,   265,   406,   266,   267,   285,   275,   300,   278,   276,
     277,   131,   286,   413,   312,   313,   311,   416,   314,   132,
     133,   134,   420,   135,   136,   137,   380,   315,   138,   287,
     288,   316,   317,   319,   320,   139,   321,   322,   323,   325,
     140,   141,   142,   143,   326,   144,   145,   329,   146,   337,
     147,   332,   148,   149,   150,   151,   152,   338,   153,   129,
     154,   130,   155,   340,   156,   157,   339,   158,   159,   350,
     343,   160,   351,   131,   352,   353,   354,   161,   162,   163,
     404,   132,   133,   134,   355,   135,   136,   137,   357,   360,
     138,   368,   361,   378,   365,   382,   381,   139,   371,   389,
     390,   391,   140,   141,   142,   143,   397,   144,   145,   407,
     146,   398,   147,   418,   148,   149,   150,   151,   152,   399,
     153,   129,   154,   130,   155,   400,   156,   157,   128,   158,
     159,   408,   409,   160,   411,   131,    32,   419,   415,   161,
     216,   163,   417,   132,   133,   134,   421,   135,   136,   137,
     395,   379,   138,   172,   209,   358,    98,     0,   126,   139,
     105,     0,     0,     0,   140,   141,   142,   143,     0,     0,
     145,     0,   146,     0,   147,     0,     0,     0,   150,   151,
     152,     0,   153,   129,   154,   130,   155,     0,   156,   157,
       0,   158,   159,     0,     0,   160,     0,   131,     0,     0,
       0,   161,   162,   163,     0,   132,   133,   134,     0,   135,
     136,   137,     0,     0,   138,     0,     0,     0,     0,     0,
       0,   139,     0,     0,     0,     0,   140,   141,   142,   143,
       0,     0,     0,     0,   146,     0,   147,     0,     0,     0,
     150,   151,   152,     0,   153,     0,   154,     0,   155,     0,
     156,   157,     0,   158,   159,    33,    34,   160,     0,     0,
       0,     0,     0,   161,   162,   163,     0,     0,    33,    34,
      35,     0,     0,     0,     0,     0,    36,    37,     0,     0,
       0,    38,   192,    35,     0,    39,    40,    41,   192,    36,
      37,    42,     0,     0,    38,     0,   193,     0,    39,    40,
      41,    43,   193,    44,    42,     0,     0,     0,     0,     0,
       0,     0,     0,   194,    43,     0,    44,     0,     0,   194,
     195,     0,     0,     0,     0,   196,   195,     0,     0,     0,
      45,   196,     0,   197,    46,   198,     0,    47,     0,   197,
       0,   198,     0,    45,     0,   199,     0,    46,     0,   200,
      65,   199,     0,   201,     0,   200,   202,    33,    34,   201,
       0,     0,   202,   203,   204,     0,     0,     0,     0,   268,
     204,     0,    35,     0,     0,     0,     0,     0,    36,    37,
       0,     0,     0,    38,     0,   223,     0,    39,    40,    41,
     224,     0,   225,     0,     0,     0,     0,     0,     0,   226,
     227,     0,     0,   228,     0,   229,   230,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   231,     0,   232,     0,     0,     0,     0,     0,     0,
       0,     0,    45,     0,     0,     0,     0,     0,     0,    47,
       0,     0,     0,     0,     0,     0,     0,   233
};

static const yytype_int16 yycheck[] =
{
      27,    33,    29,   145,    62,   202,   149,    34,   121,    76,
       7,     9,   130,    11,    41,     7,   192,    84,   194,    94,
     127,     7,   129,   160,    10,    52,   202,     7,     7,    87,
      42,    43,   322,    40,     0,    42,    21,   224,   225,    71,
      60,   116,    40,    40,    42,    42,   233,     0,    40,    75,
      42,    78,    78,    17,    40,    40,    42,    42,    85,    86,
      40,    40,    42,    42,    91,   355,    93,    79,    66,   176,
     177,   178,   179,   180,   181,     7,     6,   184,   185,    48,
     222,    47,   109,   190,   191,   112,    45,   114,   264,   265,
     266,   267,    10,    10,    17,     8,   123,    87,    88,    87,
     237,    14,   278,   210,   211,   212,   213,   214,    40,    75,
      42,   186,    47,   250,   221,   257,   234,   235,   236,    49,
      47,   188,    40,    40,    42,    42,    39,   240,    79,    85,
      10,     6,   275,    68,   331,   242,    21,    87,    13,    51,
      75,    68,    54,    73,    21,    87,    58,    77,    75,    23,
      51,    15,   328,   329,    23,   331,    86,    87,    88,     6,
     187,   337,    37,    23,     6,   272,    40,    87,    42,   276,
     277,    40,    87,    42,     9,    37,    87,    87,   285,    87,
      40,   239,    42,     7,    15,    10,    82,    38,   215,    10,
      13,     6,    10,     8,    83,    15,    10,   373,    15,   231,
      83,    13,    10,     7,     7,   381,    87,    12,    38,    72,
     317,    12,   319,    28,    29,    30,   323,    32,    33,    34,
       6,    80,   398,    10,     7,     6,   368,     6,     6,    44,
      87,     6,     6,   409,    49,    50,     6,    52,     6,     6,
       6,    37,    57,    37,    59,     6,   273,     6,     6,    64,
      65,     6,    67,     6,    69,   362,    71,     6,    73,    74,
      37,    76,    77,    17,    80,    80,    16,     7,   300,    80,
      83,    86,    87,    88,   223,    21,   383,   226,   227,   228,
     229,   230,   389,    10,   391,    70,    38,     6,    87,     8,
       6,     6,   399,     6,     6,    21,    10,    40,    80,    56,
      56,    20,    10,   410,     7,     7,    82,   414,     7,    28,
      29,    30,   419,    32,    33,    34,   343,     7,    37,    83,
      83,     7,    10,    10,     7,    44,     7,    38,    38,     7,
      49,    50,    51,    52,     7,    54,    55,    21,    57,    21,
      59,    38,    61,    62,    63,    64,    65,    83,    67,     6,
      69,     8,    71,    83,    73,    74,    10,    76,    77,     7,
      40,    80,     7,    20,     7,     7,    83,    86,    87,    88,
     397,    28,    29,    30,    38,    32,    33,    34,    87,     7,
      37,    46,    38,    87,    80,    83,    81,    44,    82,    10,
       7,    68,    49,    50,    51,    52,    40,    54,    55,     7,
      57,    80,    59,    79,    61,    62,    63,    64,    65,    80,
      67,     6,    69,     8,    71,    83,    73,    74,   125,    76,
      77,    83,    80,    80,    83,    20,    26,    80,    83,    86,
      87,    88,    83,    28,    29,    30,    83,    32,    33,    34,
     381,   339,    37,   128,   150,   286,    80,    -1,   123,    44,
      89,    -1,    -1,    -1,    49,    50,    51,    52,    -1,    -1,
      55,    -1,    57,    -1,    59,    -1,    -1,    -1,    63,    64,
      65,    -1,    67,     6,    69,     8,    71,    -1,    73,    74,
      -1,    76,    77,    -1,    -1,    80,    -1,    20,    -1,    -1,
      -1,    86,    87,    88,    -1,    28,    29,    30,    -1,    32,
      33,    34,    -1,    -1,    37,    -1,    -1,    -1,    -1,    -1,
      -1,    44,    -1,    -1,    -1,    -1,    49,    50,    51,    52,
      -1,    -1,    -1,    -1,    57,    -1,    59,    -1,    -1,    -1,
      63,    64,    65,    -1,    67,    -1,    69,    -1,    71,    -1,
      73,    74,    -1,    76,    77,     5,     6,    80,    -1,    -1,
      -1,    -1,    -1,    86,    87,    88,    -1,    -1,     5,     6,
      20,    -1,    -1,    -1,    -1,    -1,    26,    27,    -1,    -1,
      -1,    31,     6,    20,    -1,    35,    36,    37,     6,    26,
      27,    41,    -1,    -1,    31,    -1,    20,    -1,    35,    36,
      37,    51,    20,    53,    41,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    37,    51,    -1,    53,    -1,    -1,    37,
      44,    -1,    -1,    -1,    -1,    49,    44,    -1,    -1,    -1,
      80,    49,    -1,    57,    84,    59,    -1,    87,    -1,    57,
      -1,    59,    -1,    80,    -1,    69,    -1,    84,    -1,    73,
      87,    69,    -1,    77,    -1,    73,    80,     5,     6,    77,
      -1,    -1,    80,    87,    88,    -1,    -1,    -1,    -1,    87,
      88,    -1,    20,    -1,    -1,    -1,    -1,    -1,    26,    27,
      -1,    -1,    -1,    31,    -1,     4,    -1,    35,    36,    37,
       9,    -1,    11,    -1,    -1,    -1,    -1,    -1,    -1,    18,
      19,    -1,    -1,    22,    -1,    24,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    80,    -1,    -1,    -1,    -1,    -1,    -1,    87,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    66
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    60,    90,    92,    45,     0,    95,    17,    48,    93,
      97,    79,    17,    47,    75,    96,    99,    85,    94,    75,
      78,    87,    51,    54,    58,    98,    10,    21,    87,    21,
      87,    51,    94,     5,     6,    20,    26,    27,    31,    35,
      36,    37,    41,    51,    53,    80,    84,    87,   128,   129,
     130,   131,    15,   128,     6,    87,   130,   128,    87,   133,
     134,   128,     6,    87,    91,    87,   128,   132,   135,   136,
      87,     9,   128,    87,   100,   101,    37,     7,    15,   108,
      10,    82,    38,   132,    10,    13,    15,    10,    83,    10,
      83,    13,   130,    15,    10,     7,    91,   128,   134,     7,
      91,   128,   128,   132,    87,   136,   128,   128,   101,    12,
     102,    38,    12,   128,    72,   103,     6,   128,   104,   105,
     128,    80,   101,    10,    97,     7,   105,    68,   102,     6,
       8,    20,    28,    29,    30,    32,    33,    34,    37,    44,
      49,    50,    51,    52,    54,    55,    57,    59,    61,    62,
      63,    64,    65,    67,    69,    71,    73,    74,    76,    77,
      80,    86,    87,    88,   117,   119,   122,   123,   124,   125,
     126,   127,   103,   117,   125,    87,     6,     6,     6,     6,
       6,     6,   117,   118,     6,     6,     6,    37,    37,   119,
       6,     6,     6,    20,    37,    44,    49,    57,    59,    69,
      73,    77,    80,    87,    88,   111,   120,   121,   121,   122,
       6,     6,     6,     6,    80,    37,    87,   115,   116,   118,
      83,    17,    16,     4,     9,    11,    18,    19,    22,    24,
      25,    40,    42,    66,     8,    14,    39,     6,    13,    37,
      80,     7,    21,   110,   117,   117,   117,   117,   117,   117,
      10,    38,   117,   117,   101,   128,    91,    70,   117,   117,
     111,    87,   111,   112,     6,     6,     6,     6,    87,   112,
     113,   114,    21,    40,    42,    10,    56,    56,    80,   117,
     117,   117,   117,   117,   128,    21,    10,    83,    83,   117,
     119,   123,   124,   124,   123,   123,   123,   123,   123,   130,
      40,   124,   125,   125,   125,   118,    87,    88,   132,    97,
     117,    82,     7,     7,     7,     7,     7,    10,   118,    10,
       7,     7,    38,    38,   119,     7,     7,     7,    10,    21,
     109,    10,    38,   111,   111,   111,   111,    21,    83,    10,
      83,   117,   128,    40,   121,   117,   117,   106,   107,   111,
       7,     7,     7,     7,    83,    38,   117,    87,   116,   130,
       7,    38,    68,   117,   117,    80,   127,   117,    46,   111,
     111,    82,   112,    10,     7,     7,     7,   111,    87,   114,
     128,    81,    83,    23,    42,    43,    79,   127,   117,    10,
       7,    68,   119,     7,   111,   107,   117,    40,    80,    80,
      83,   117,   117,     7,   128,   111,   117,     7,    83,    80,
      23,    83,   111,   117,    23,    83,   117,    83,    79,    80,
     117,    83
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    89,    90,    91,    91,    91,    92,    93,    94,    94,
      94,    95,    95,    96,    96,    96,    96,    96,    97,    97,
      98,    99,    99,   100,   101,   101,   101,   102,   102,   103,
     103,   104,   105,   105,   106,   107,   107,   107,   108,   108,
     109,   109,   110,   110,   111,   111,   111,   111,   111,   111,
     111,   111,   111,   111,   111,   111,   111,   111,   111,   111,
     111,   112,   112,   112,   113,   114,   114,   115,   116,   116,
     117,   117,   117,   117,   117,   117,   118,   118,   118,   119,
     119,   119,   120,   121,   121,   122,   122,   122,   122,   122,
     122,   122,   123,   123,   123,   123,   123,   123,   123,   123,
     123,   123,   124,   124,   124,   124,   125,   125,   125,   126,
     126,   126,   126,   126,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   127,   127,   127,   127,   127,
     127,   127,   128,   128,   128,   128,   128,   129,   129,   130,
     130,   130,   130,   130,   131,   131,   131,   131,   131,   131,
     131,   131,   132,   132,   132,   133,   134,   134,   134,   135,
     136,   136
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     0,     1,     3,     3,     3,     0,     1,
       3,     0,     3,    13,    17,     4,     4,     5,     0,     2,
       1,     0,     2,     3,     0,     1,     3,     0,     2,     0,
       2,     1,     1,     3,     3,     0,     1,     3,     0,     2,
       0,     2,     0,     2,     4,     3,     4,     4,     4,     3,
       3,     3,     6,     5,     1,     1,     1,     1,     4,     1,
       3,     0,     1,     3,     3,     1,     3,     3,     1,     3,
       3,     2,     4,     4,     5,     1,     0,     1,     3,     3,
       6,     1,     3,     1,     3,     3,     3,     3,     3,     3,
       3,     1,     3,     4,     8,     4,     5,     3,     3,     3,
       3,     1,     3,     3,     3,     1,     4,     2,     1,     4,
       4,     3,     3,     3,     3,     6,     4,     4,     4,     1,
       4,    10,     8,    16,     4,     4,     4,     4,     4,     4,
       4,     8,     5,     5,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     6,     4,     4,     1,     3,     1,     3,
       3,     3,     3,     1,     1,     1,     1,     1,     1,     2,
       1,     3,     0,     1,     3,     2,     0,     1,     3,     3,
       1,     3
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
#line 459 "Syntax.y"
                                              { (yyval.program_) = make_AProgram((yyvsp[-2].languagedecl_), reverseListExtension((yyvsp[-1].listextension_)), reverseListDecl((yyvsp[0].listdecl_))); result->program_ = (yyval.program_); }
#line 1929 "Parser.c"
    break;

  case 3: /* ListStellaIdent: %empty  */
#line 461 "Syntax.y"
                              { (yyval.liststellaident_) = 0; result->liststellaident_ = (yyval.liststellaident_); }
#line 1935 "Parser.c"
    break;

  case 4: /* ListStellaIdent: T_StellaIdent  */
#line 462 "Syntax.y"
                  { (yyval.liststellaident_) = make_ListStellaIdent((yyvsp[0]._string), 0); result->liststellaident_ = (yyval.liststellaident_); }
#line 1941 "Parser.c"
    break;

  case 5: /* ListStellaIdent: T_StellaIdent _COMMA ListStellaIdent  */
#line 463 "Syntax.y"
                                         { (yyval.liststellaident_) = make_ListStellaIdent((yyvsp[-2]._string), (yyvsp[0].liststellaident_)); result->liststellaident_ = (yyval.liststellaident_); }
#line 1947 "Parser.c"
    break;

  case 6: /* LanguageDecl: _KW_language _KW_core _SEMI  */
#line 465 "Syntax.y"
                                           { (yyval.languagedecl_) = make_LanguageCore(); result->languagedecl_ = (yyval.languagedecl_); }
#line 1953 "Parser.c"
    break;

  case 7: /* Extension: _KW_extend _KW_with ListExtensionName  */
#line 467 "Syntax.y"
                                                  { (yyval.extension_) = make_AnExtension((yyvsp[0].listextensionname_)); result->extension_ = (yyval.extension_); }
#line 1959 "Parser.c"
    break;

  case 8: /* ListExtensionName: %empty  */
#line 469 "Syntax.y"
                                { (yyval.listextensionname_) = 0; result->listextensionname_ = (yyval.listextensionname_); }
#line 1965 "Parser.c"
    break;

  case 9: /* ListExtensionName: T_ExtensionName  */
#line 470 "Syntax.y"
                    { (yyval.listextensionname_) = make_ListExtensionName((yyvsp[0]._string), 0); result->listextensionname_ = (yyval.listextensionname_); }
#line 1971 "Parser.c"
    break;

  case 10: /* ListExtensionName: T_ExtensionName _COMMA ListExtensionName  */
#line 471 "Syntax.y"
                                             { (yyval.listextensionname_) = make_ListExtensionName((yyvsp[-2]._string), (yyvsp[0].listextensionname_)); result->listextensionname_ = (yyval.listextensionname_); }
#line 1977 "Parser.c"
    break;

  case 11: /* ListExtension: %empty  */
#line 473 "Syntax.y"
                            { (yyval.listextension_) = 0; result->listextension_ = (yyval.listextension_); }
#line 1983 "Parser.c"
    break;

  case 12: /* ListExtension: ListExtension Extension _SEMI  */
#line 474 "Syntax.y"
                                  { (yyval.listextension_) = make_ListExtension((yyvsp[-1].extension_), (yyvsp[-2].listextension_)); result->listextension_ = (yyval.listextension_); }
#line 1989 "Parser.c"
    break;

  case 13: /* Decl: ListAnnotation _KW_fn T_StellaIdent _LPAREN ListParamDecl _RPAREN ReturnType ThrowType _LBRACE ListDecl _KW_return Expr _RBRACE  */
#line 476 "Syntax.y"
                                                                                                                                       { (yyval.decl_) = make_DeclFun(reverseListAnnotation((yyvsp[-12].listannotation_)), (yyvsp[-10]._string), (yyvsp[-8].listparamdecl_), (yyvsp[-6].returntype_), (yyvsp[-5].throwtype_), reverseListDecl((yyvsp[-3].listdecl_)), (yyvsp[-1].expr_)); result->decl_ = (yyval.decl_); }
#line 1995 "Parser.c"
    break;

  case 14: /* Decl: ListAnnotation _KW_generic _KW_fn T_StellaIdent _LBRACK ListStellaIdent _RBRACK _LPAREN ListParamDecl _RPAREN ReturnType ThrowType _LBRACE ListDecl _KW_return Expr _RBRACE  */
#line 477 "Syntax.y"
                                                                                                                                                                                { (yyval.decl_) = make_DeclFunGeneric(reverseListAnnotation((yyvsp[-16].listannotation_)), (yyvsp[-13]._string), (yyvsp[-11].liststellaident_), (yyvsp[-8].listparamdecl_), (yyvsp[-6].returntype_), (yyvsp[-5].throwtype_), reverseListDecl((yyvsp[-3].listdecl_)), (yyvsp[-1].expr_)); result->decl_ = (yyval.decl_); }
#line 2001 "Parser.c"
    break;

  case 15: /* Decl: _KW_type T_StellaIdent _EQ Type  */
#line 478 "Syntax.y"
                                    { (yyval.decl_) = make_DeclTypeAlias((yyvsp[-2]._string), (yyvsp[0].type_)); result->decl_ = (yyval.decl_); }
#line 2007 "Parser.c"
    break;

  case 16: /* Decl: _KW_exception _KW_type _EQ Type  */
#line 479 "Syntax.y"
                                    { (yyval.decl_) = make_DeclExceptionType((yyvsp[0].type_)); result->decl_ = (yyval.decl_); }
#line 2013 "Parser.c"
    break;

  case 17: /* Decl: _KW_exception _KW_variant T_StellaIdent _COLON Type  */
#line 480 "Syntax.y"
                                                        { (yyval.decl_) = make_DeclExceptionVariant((yyvsp[-2]._string), (yyvsp[0].type_)); result->decl_ = (yyval.decl_); }
#line 2019 "Parser.c"
    break;

  case 18: /* ListDecl: %empty  */
#line 482 "Syntax.y"
                       { (yyval.listdecl_) = 0; result->listdecl_ = (yyval.listdecl_); }
#line 2025 "Parser.c"
    break;

  case 19: /* ListDecl: ListDecl Decl  */
#line 483 "Syntax.y"
                  { (yyval.listdecl_) = make_ListDecl((yyvsp[0].decl_), (yyvsp[-1].listdecl_)); result->listdecl_ = (yyval.listdecl_); }
#line 2031 "Parser.c"
    break;

  case 20: /* Annotation: _KW_inline  */
#line 490 "Syntax.y"
                        { (yyval.annotation_) = make_InlineAnnotation(); result->annotation_ = (yyval.annotation_); }
#line 2037 "Parser.c"
    break;

  case 21: /* ListAnnotation: %empty  */
#line 492 "Syntax.y"
                             { (yyval.listannotation_) = 0; result->listannotation_ = (yyval.listannotation_); }
#line 2043 "Parser.c"
    break;

  case 22: /* ListAnnotation: ListAnnotation Annotation  */
#line 493 "Syntax.y"
                              { (yyval.listannotation_) = make_ListAnnotation((yyvsp[0].annotation_), (yyvsp[-1].listannotation_)); result->listannotation_ = (yyval.listannotation_); }
#line 2049 "Parser.c"
    break;

  case 23: /* ParamDecl: T_StellaIdent _COLON Type  */
#line 495 "Syntax.y"
                                      { (yyval.paramdecl_) = make_AParamDecl((yyvsp[-2]._string), (yyvsp[0].type_)); result->paramdecl_ = (yyval.paramdecl_); }
#line 2055 "Parser.c"
    break;

  case 24: /* ListParamDecl: %empty  */
#line 497 "Syntax.y"
                            { (yyval.listparamdecl_) = 0; result->listparamdecl_ = (yyval.listparamdecl_); }
#line 2061 "Parser.c"
    break;

  case 25: /* ListParamDecl: ParamDecl  */
#line 498 "Syntax.y"
              { (yyval.listparamdecl_) = make_ListParamDecl((yyvsp[0].paramdecl_), 0); result->listparamdecl_ = (yyval.listparamdecl_); }
#line 2067 "Parser.c"
    break;

  case 26: /* ListParamDecl: ParamDecl _COMMA ListParamDecl  */
#line 499 "Syntax.y"
                                   { (yyval.listparamdecl_) = make_ListParamDecl((yyvsp[-2].paramdecl_), (yyvsp[0].listparamdecl_)); result->listparamdecl_ = (yyval.listparamdecl_); }
#line 2073 "Parser.c"
    break;

  case 27: /* ReturnType: %empty  */
#line 501 "Syntax.y"
                         { (yyval.returntype_) = make_NoReturnType(); result->returntype_ = (yyval.returntype_); }
#line 2079 "Parser.c"
    break;

  case 28: /* ReturnType: _RARROW Type  */
#line 502 "Syntax.y"
                 { (yyval.returntype_) = make_SomeReturnType((yyvsp[0].type_)); result->returntype_ = (yyval.returntype_); }
#line 2085 "Parser.c"
    break;

  case 29: /* ThrowType: %empty  */
#line 504 "Syntax.y"
                        { (yyval.throwtype_) = make_NoThrowType(); result->throwtype_ = (yyval.throwtype_); }
#line 2091 "Parser.c"
    break;

  case 30: /* ThrowType: _KW_throws ListType9  */
#line 505 "Syntax.y"
                         { (yyval.throwtype_) = make_SomeThrowType((yyvsp[0].listtype_)); result->throwtype_ = (yyval.throwtype_); }
#line 2097 "Parser.c"
    break;

  case 31: /* Type9: Type  */
#line 507 "Syntax.y"
             { (yyval.type_) = (yyvsp[0].type_); result->type_ = (yyval.type_); }
#line 2103 "Parser.c"
    break;

  case 32: /* ListType9: Type9  */
#line 509 "Syntax.y"
                  { (yyval.listtype_) = make_ListType((yyvsp[0].type_), 0); result->listtype_ = (yyval.listtype_); }
#line 2109 "Parser.c"
    break;

  case 33: /* ListType9: Type9 _COMMA ListType9  */
#line 510 "Syntax.y"
                           { (yyval.listtype_) = make_ListType((yyvsp[-2].type_), (yyvsp[0].listtype_)); result->listtype_ = (yyval.listtype_); }
#line 2115 "Parser.c"
    break;

  case 34: /* MatchCase: Pattern _RDARROW Expr  */
#line 512 "Syntax.y"
                                  { (yyval.matchcase_) = make_AMatchCase((yyvsp[-2].pattern_), (yyvsp[0].expr_)); result->matchcase_ = (yyval.matchcase_); }
#line 2121 "Parser.c"
    break;

  case 35: /* ListMatchCase: %empty  */
#line 514 "Syntax.y"
                            { (yyval.listmatchcase_) = 0; result->listmatchcase_ = (yyval.listmatchcase_); }
#line 2127 "Parser.c"
    break;

  case 36: /* ListMatchCase: MatchCase  */
#line 515 "Syntax.y"
              { (yyval.listmatchcase_) = make_ListMatchCase((yyvsp[0].matchcase_), 0); result->listmatchcase_ = (yyval.listmatchcase_); }
#line 2133 "Parser.c"
    break;

  case 37: /* ListMatchCase: MatchCase _BAR ListMatchCase  */
#line 516 "Syntax.y"
                                 { (yyval.listmatchcase_) = make_ListMatchCase((yyvsp[-2].matchcase_), (yyvsp[0].listmatchcase_)); result->listmatchcase_ = (yyval.listmatchcase_); }
#line 2139 "Parser.c"
    break;

  case 38: /* OptionalTyping: %empty  */
#line 518 "Syntax.y"
                             { (yyval.optionaltyping_) = make_NoTyping(); result->optionaltyping_ = (yyval.optionaltyping_); }
#line 2145 "Parser.c"
    break;

  case 39: /* OptionalTyping: _COLON Type  */
#line 519 "Syntax.y"
                { (yyval.optionaltyping_) = make_SomeTyping((yyvsp[0].type_)); result->optionaltyping_ = (yyval.optionaltyping_); }
#line 2151 "Parser.c"
    break;

  case 40: /* PatternData: %empty  */
#line 521 "Syntax.y"
                          { (yyval.patterndata_) = make_NoPatternData(); result->patterndata_ = (yyval.patterndata_); }
#line 2157 "Parser.c"
    break;

  case 41: /* PatternData: _EQ Pattern  */
#line 522 "Syntax.y"
                { (yyval.patterndata_) = make_SomePatternData((yyvsp[0].pattern_)); result->patterndata_ = (yyval.patterndata_); }
#line 2163 "Parser.c"
    break;

  case 42: /* ExprData: %empty  */
#line 524 "Syntax.y"
                       { (yyval.exprdata_) = make_NoExprData(); result->exprdata_ = (yyval.exprdata_); }
#line 2169 "Parser.c"
    break;

  case 43: /* ExprData: _EQ Expr  */
#line 525 "Syntax.y"
             { (yyval.exprdata_) = make_SomeExprData((yyvsp[0].expr_)); result->exprdata_ = (yyval.exprdata_); }
#line 2175 "Parser.c"
    break;

  case 44: /* Pattern: Pattern _KW_cast _KW_as Type  */
#line 527 "Syntax.y"
                                       { (yyval.pattern_) = make_PatternCastAs((yyvsp[-3].pattern_), (yyvsp[0].type_)); result->pattern_ = (yyval.pattern_); }
#line 2181 "Parser.c"
    break;

  case 45: /* Pattern: Pattern _KW_as Type  */
#line 528 "Syntax.y"
                        { (yyval.pattern_) = make_PatternAsc((yyvsp[-2].pattern_), (yyvsp[0].type_)); result->pattern_ = (yyval.pattern_); }
#line 2187 "Parser.c"
    break;

  case 46: /* Pattern: _SYMB_13 T_StellaIdent PatternData _SYMB_14  */
#line 529 "Syntax.y"
                                                { (yyval.pattern_) = make_PatternVariant((yyvsp[-2]._string), (yyvsp[-1].patterndata_)); result->pattern_ = (yyval.pattern_); }
#line 2193 "Parser.c"
    break;

  case 47: /* Pattern: _KW_inl _LPAREN Pattern _RPAREN  */
#line 530 "Syntax.y"
                                    { (yyval.pattern_) = make_PatternInl((yyvsp[-1].pattern_)); result->pattern_ = (yyval.pattern_); }
#line 2199 "Parser.c"
    break;

  case 48: /* Pattern: _KW_inr _LPAREN Pattern _RPAREN  */
#line 531 "Syntax.y"
                                    { (yyval.pattern_) = make_PatternInr((yyvsp[-1].pattern_)); result->pattern_ = (yyval.pattern_); }
#line 2205 "Parser.c"
    break;

  case 49: /* Pattern: _LBRACE ListPattern _RBRACE  */
#line 532 "Syntax.y"
                                { (yyval.pattern_) = make_PatternTuple((yyvsp[-1].listpattern_)); result->pattern_ = (yyval.pattern_); }
#line 2211 "Parser.c"
    break;

  case 50: /* Pattern: _LBRACE ListLabelledPattern _RBRACE  */
#line 533 "Syntax.y"
                                        { (yyval.pattern_) = make_PatternRecord((yyvsp[-1].listlabelledpattern_)); result->pattern_ = (yyval.pattern_); }
#line 2217 "Parser.c"
    break;

  case 51: /* Pattern: _LBRACK ListPattern _RBRACK  */
#line 534 "Syntax.y"
                                { (yyval.pattern_) = make_PatternList((yyvsp[-1].listpattern_)); result->pattern_ = (yyval.pattern_); }
#line 2223 "Parser.c"
    break;

  case 52: /* Pattern: _KW_cons _LPAREN Pattern _COMMA Pattern _RPAREN  */
#line 535 "Syntax.y"
                                                    { (yyval.pattern_) = make_PatternCons((yyvsp[-3].pattern_), (yyvsp[-1].pattern_)); result->pattern_ = (yyval.pattern_); }
#line 2229 "Parser.c"
    break;

  case 53: /* Pattern: _LPAREN Pattern _COMMA Pattern _RPAREN  */
#line 536 "Syntax.y"
                                           { (yyval.pattern_) = make_patternCons((yyvsp[-3].pattern_), (yyvsp[-1].pattern_)); result->pattern_ = (yyval.pattern_); }
#line 2235 "Parser.c"
    break;

  case 54: /* Pattern: _KW_false  */
#line 537 "Syntax.y"
              { (yyval.pattern_) = make_PatternFalse(); result->pattern_ = (yyval.pattern_); }
#line 2241 "Parser.c"
    break;

  case 55: /* Pattern: _KW_true  */
#line 538 "Syntax.y"
             { (yyval.pattern_) = make_PatternTrue(); result->pattern_ = (yyval.pattern_); }
#line 2247 "Parser.c"
    break;

  case 56: /* Pattern: _KW_unit  */
#line 539 "Syntax.y"
             { (yyval.pattern_) = make_PatternUnit(); result->pattern_ = (yyval.pattern_); }
#line 2253 "Parser.c"
    break;

  case 57: /* Pattern: _INTEGER_  */
#line 540 "Syntax.y"
              { (yyval.pattern_) = make_PatternInt((yyvsp[0]._int)); result->pattern_ = (yyval.pattern_); }
#line 2259 "Parser.c"
    break;

  case 58: /* Pattern: _KW_succ _LPAREN Pattern _RPAREN  */
#line 541 "Syntax.y"
                                     { (yyval.pattern_) = make_PatternSucc((yyvsp[-1].pattern_)); result->pattern_ = (yyval.pattern_); }
#line 2265 "Parser.c"
    break;

  case 59: /* Pattern: T_StellaIdent  */
#line 542 "Syntax.y"
                  { (yyval.pattern_) = make_PatternVar((yyvsp[0]._string)); result->pattern_ = (yyval.pattern_); }
#line 2271 "Parser.c"
    break;

  case 60: /* Pattern: _LPAREN Pattern _RPAREN  */
#line 543 "Syntax.y"
                            { (yyval.pattern_) = (yyvsp[-1].pattern_); result->pattern_ = (yyval.pattern_); }
#line 2277 "Parser.c"
    break;

  case 61: /* ListPattern: %empty  */
#line 545 "Syntax.y"
                          { (yyval.listpattern_) = 0; result->listpattern_ = (yyval.listpattern_); }
#line 2283 "Parser.c"
    break;

  case 62: /* ListPattern: Pattern  */
#line 546 "Syntax.y"
            { (yyval.listpattern_) = make_ListPattern((yyvsp[0].pattern_), 0); result->listpattern_ = (yyval.listpattern_); }
#line 2289 "Parser.c"
    break;

  case 63: /* ListPattern: Pattern _COMMA ListPattern  */
#line 547 "Syntax.y"
                               { (yyval.listpattern_) = make_ListPattern((yyvsp[-2].pattern_), (yyvsp[0].listpattern_)); result->listpattern_ = (yyval.listpattern_); }
#line 2295 "Parser.c"
    break;

  case 64: /* LabelledPattern: T_StellaIdent _EQ Pattern  */
#line 549 "Syntax.y"
                                            { (yyval.labelledpattern_) = make_ALabelledPattern((yyvsp[-2]._string), (yyvsp[0].pattern_)); result->labelledpattern_ = (yyval.labelledpattern_); }
#line 2301 "Parser.c"
    break;

  case 65: /* ListLabelledPattern: LabelledPattern  */
#line 551 "Syntax.y"
                                      { (yyval.listlabelledpattern_) = make_ListLabelledPattern((yyvsp[0].labelledpattern_), 0); result->listlabelledpattern_ = (yyval.listlabelledpattern_); }
#line 2307 "Parser.c"
    break;

  case 66: /* ListLabelledPattern: LabelledPattern _COMMA ListLabelledPattern  */
#line 552 "Syntax.y"
                                               { (yyval.listlabelledpattern_) = make_ListLabelledPattern((yyvsp[-2].labelledpattern_), (yyvsp[0].listlabelledpattern_)); result->listlabelledpattern_ = (yyval.listlabelledpattern_); }
#line 2313 "Parser.c"
    break;

  case 67: /* Binding: T_StellaIdent _EQ Expr  */
#line 554 "Syntax.y"
                                 { (yyval.binding_) = make_ABinding((yyvsp[-2]._string), (yyvsp[0].expr_)); result->binding_ = (yyval.binding_); }
#line 2319 "Parser.c"
    break;

  case 68: /* ListBinding: Binding  */
#line 556 "Syntax.y"
                      { (yyval.listbinding_) = make_ListBinding((yyvsp[0].binding_), 0); result->listbinding_ = (yyval.listbinding_); }
#line 2325 "Parser.c"
    break;

  case 69: /* ListBinding: Binding _COMMA ListBinding  */
#line 557 "Syntax.y"
                               { (yyval.listbinding_) = make_ListBinding((yyvsp[-2].binding_), (yyvsp[0].listbinding_)); result->listbinding_ = (yyval.listbinding_); }
#line 2331 "Parser.c"
    break;

  case 70: /* Expr: Expr1 _SEMI Expr  */
#line 559 "Syntax.y"
                        { (yyval.expr_) = make_Sequence((yyvsp[-2].expr_), (yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 2337 "Parser.c"
    break;

  case 71: /* Expr: Expr1 _SEMI  */
#line 560 "Syntax.y"
                { (yyval.expr_) = (yyvsp[-1].expr_); result->expr_ = (yyval.expr_); }
#line 2343 "Parser.c"
    break;

  case 72: /* Expr: _KW_let ListPatternBinding _KW_in Expr  */
#line 561 "Syntax.y"
                                           { (yyval.expr_) = make_Let((yyvsp[-2].listpatternbinding_), (yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 2349 "Parser.c"
    break;

  case 73: /* Expr: _KW_letrec ListPatternBinding _KW_in Expr  */
#line 562 "Syntax.y"
                                              { (yyval.expr_) = make_LetRec((yyvsp[-2].listpatternbinding_), (yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 2355 "Parser.c"
    break;

  case 74: /* Expr: _KW_generic _LBRACK ListStellaIdent _RBRACK Expr  */
#line 563 "Syntax.y"
                                                     { (yyval.expr_) = make_TypeAbstraction((yyvsp[-2].liststellaident_), (yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 2361 "Parser.c"
    break;

  case 75: /* Expr: Expr1  */
#line 564 "Syntax.y"
          { (yyval.expr_) = (yyvsp[0].expr_); result->expr_ = (yyval.expr_); }
#line 2367 "Parser.c"
    break;

  case 76: /* ListExpr: %empty  */
#line 566 "Syntax.y"
                       { (yyval.listexpr_) = 0; result->listexpr_ = (yyval.listexpr_); }
#line 2373 "Parser.c"
    break;

  case 77: /* ListExpr: Expr  */
#line 567 "Syntax.y"
         { (yyval.listexpr_) = make_ListExpr((yyvsp[0].expr_), 0); result->listexpr_ = (yyval.listexpr_); }
#line 2379 "Parser.c"
    break;

  case 78: /* ListExpr: Expr _COMMA ListExpr  */
#line 568 "Syntax.y"
                         { (yyval.listexpr_) = make_ListExpr((yyvsp[-2].expr_), (yyvsp[0].listexpr_)); result->listexpr_ = (yyval.listexpr_); }
#line 2385 "Parser.c"
    break;

  case 79: /* Expr1: Expr2 _COLONEQ Expr1  */
#line 570 "Syntax.y"
                             { (yyval.expr_) = make_Assign((yyvsp[-2].expr_), (yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 2391 "Parser.c"
    break;

  case 80: /* Expr1: _KW_if Expr1 _KW_then Expr1 _KW_else Expr1  */
#line 571 "Syntax.y"
                                               { (yyval.expr_) = make_If((yyvsp[-4].expr_), (yyvsp[-2].expr_), (yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 2397 "Parser.c"
    break;

  case 81: /* Expr1: Expr2  */
#line 572 "Syntax.y"
          { (yyval.expr_) = (yyvsp[0].expr_); result->expr_ = (yyval.expr_); }
#line 2403 "Parser.c"
    break;

  case 82: /* PatternBinding: Pattern _EQ Expr  */
#line 574 "Syntax.y"
                                  { (yyval.patternbinding_) = make_APatternBinding((yyvsp[-2].pattern_), (yyvsp[0].expr_)); result->patternbinding_ = (yyval.patternbinding_); }
#line 2409 "Parser.c"
    break;

  case 83: /* ListPatternBinding: PatternBinding  */
#line 576 "Syntax.y"
                                    { (yyval.listpatternbinding_) = make_ListPatternBinding((yyvsp[0].patternbinding_), 0); result->listpatternbinding_ = (yyval.listpatternbinding_); }
#line 2415 "Parser.c"
    break;

  case 84: /* ListPatternBinding: PatternBinding _COMMA ListPatternBinding  */
#line 577 "Syntax.y"
                                             { (yyval.listpatternbinding_) = make_ListPatternBinding((yyvsp[-2].patternbinding_), (yyvsp[0].listpatternbinding_)); result->listpatternbinding_ = (yyval.listpatternbinding_); }
#line 2421 "Parser.c"
    break;

  case 85: /* Expr2: Expr3 _LT Expr3  */
#line 579 "Syntax.y"
                        { (yyval.expr_) = make_LessThan((yyvsp[-2].expr_), (yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 2427 "Parser.c"
    break;

  case 86: /* Expr2: Expr3 _LDARROW Expr3  */
#line 580 "Syntax.y"
                         { (yyval.expr_) = make_LessThanOrEqual((yyvsp[-2].expr_), (yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 2433 "Parser.c"
    break;

  case 87: /* Expr2: Expr3 _GT Expr3  */
#line 581 "Syntax.y"
                    { (yyval.expr_) = make_GreaterThan((yyvsp[-2].expr_), (yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 2439 "Parser.c"
    break;

  case 88: /* Expr2: Expr3 _GTEQ Expr3  */
#line 582 "Syntax.y"
                      { (yyval.expr_) = make_GreaterThanOrEqual((yyvsp[-2].expr_), (yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 2445 "Parser.c"
    break;

  case 89: /* Expr2: Expr3 _DEQ Expr3  */
#line 583 "Syntax.y"
                     { (yyval.expr_) = make_Equal((yyvsp[-2].expr_), (yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 2451 "Parser.c"
    break;

  case 90: /* Expr2: Expr3 _BANGEQ Expr3  */
#line 584 "Syntax.y"
                        { (yyval.expr_) = make_NotEqual((yyvsp[-2].expr_), (yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 2457 "Parser.c"
    break;

  case 91: /* Expr2: Expr3  */
#line 585 "Syntax.y"
          { (yyval.expr_) = (yyvsp[0].expr_); result->expr_ = (yyval.expr_); }
#line 2463 "Parser.c"
    break;

  case 92: /* Expr3: Expr3 _KW_as Type2  */
#line 590 "Syntax.y"
                           { (yyval.expr_) = make_TypeAsc((yyvsp[-2].expr_), (yyvsp[0].type_)); result->expr_ = (yyval.expr_); }
#line 2469 "Parser.c"
    break;

  case 93: /* Expr3: Expr3 _KW_cast _KW_as Type2  */
#line 591 "Syntax.y"
                                { (yyval.expr_) = make_TypeCast((yyvsp[-3].expr_), (yyvsp[0].type_)); result->expr_ = (yyval.expr_); }
#line 2475 "Parser.c"
    break;

  case 94: /* Expr3: _KW_fn _LPAREN ListParamDecl _RPAREN _LBRACE _KW_return Expr _RBRACE  */
#line 592 "Syntax.y"
                                                                         { (yyval.expr_) = make_Abstraction((yyvsp[-5].listparamdecl_), (yyvsp[-1].expr_)); result->expr_ = (yyval.expr_); }
#line 2481 "Parser.c"
    break;

  case 95: /* Expr3: _SYMB_13 T_StellaIdent ExprData _SYMB_14  */
#line 593 "Syntax.y"
                                             { (yyval.expr_) = make_Variant((yyvsp[-2]._string), (yyvsp[-1].exprdata_)); result->expr_ = (yyval.expr_); }
#line 2487 "Parser.c"
    break;

  case 96: /* Expr3: _KW_match Expr2 _LBRACE ListMatchCase _RBRACE  */
#line 594 "Syntax.y"
                                                  { (yyval.expr_) = make_Match((yyvsp[-3].expr_), (yyvsp[-1].listmatchcase_)); result->expr_ = (yyval.expr_); }
#line 2493 "Parser.c"
    break;

  case 97: /* Expr3: _LBRACK ListExpr _RBRACK  */
#line 595 "Syntax.y"
                             { (yyval.expr_) = make_List((yyvsp[-1].listexpr_)); result->expr_ = (yyval.expr_); }
#line 2499 "Parser.c"
    break;

  case 98: /* Expr3: Expr3 _PLUS Expr4  */
#line 596 "Syntax.y"
                      { (yyval.expr_) = make_Add((yyvsp[-2].expr_), (yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 2505 "Parser.c"
    break;

  case 99: /* Expr3: Expr3 _MINUS Expr4  */
#line 597 "Syntax.y"
                       { (yyval.expr_) = make_Subtract((yyvsp[-2].expr_), (yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 2511 "Parser.c"
    break;

  case 100: /* Expr3: Expr3 _KW_or Expr4  */
#line 598 "Syntax.y"
                       { (yyval.expr_) = make_LogicOr((yyvsp[-2].expr_), (yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 2517 "Parser.c"
    break;

  case 101: /* Expr3: Expr4  */
#line 599 "Syntax.y"
          { (yyval.expr_) = (yyvsp[0].expr_); result->expr_ = (yyval.expr_); }
#line 2523 "Parser.c"
    break;

  case 102: /* Expr4: Expr4 _STAR Expr5  */
#line 601 "Syntax.y"
                          { (yyval.expr_) = make_Multiply((yyvsp[-2].expr_), (yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 2529 "Parser.c"
    break;

  case 103: /* Expr4: Expr4 _SLASH Expr5  */
#line 602 "Syntax.y"
                       { (yyval.expr_) = make_Divide((yyvsp[-2].expr_), (yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 2535 "Parser.c"
    break;

  case 104: /* Expr4: Expr4 _KW_and Expr5  */
#line 603 "Syntax.y"
                        { (yyval.expr_) = make_LogicAnd((yyvsp[-2].expr_), (yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 2541 "Parser.c"
    break;

  case 105: /* Expr4: Expr5  */
#line 604 "Syntax.y"
          { (yyval.expr_) = (yyvsp[0].expr_); result->expr_ = (yyval.expr_); }
#line 2547 "Parser.c"
    break;

  case 106: /* Expr5: _KW_new _LPAREN Expr _RPAREN  */
#line 606 "Syntax.y"
                                     { (yyval.expr_) = make_Ref((yyvsp[-1].expr_)); result->expr_ = (yyval.expr_); }
#line 2553 "Parser.c"
    break;

  case 107: /* Expr5: _STAR Expr5  */
#line 607 "Syntax.y"
                { (yyval.expr_) = make_Deref((yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 2559 "Parser.c"
    break;

  case 108: /* Expr5: Expr6  */
#line 608 "Syntax.y"
          { (yyval.expr_) = (yyvsp[0].expr_); result->expr_ = (yyval.expr_); }
#line 2565 "Parser.c"
    break;

  case 109: /* Expr6: Expr6 _LPAREN ListExpr _RPAREN  */
#line 610 "Syntax.y"
                                       { (yyval.expr_) = make_Application((yyvsp[-3].expr_), (yyvsp[-1].listexpr_)); result->expr_ = (yyval.expr_); }
#line 2571 "Parser.c"
    break;

  case 110: /* Expr6: Expr6 _LBRACK ListType _RBRACK  */
#line 611 "Syntax.y"
                                   { (yyval.expr_) = make_TypeApplication((yyvsp[-3].expr_), (yyvsp[-1].listtype_)); result->expr_ = (yyval.expr_); }
#line 2577 "Parser.c"
    break;

  case 111: /* Expr6: Expr6 _DOT T_StellaIdent  */
#line 612 "Syntax.y"
                             { (yyval.expr_) = make_DotRecord((yyvsp[-2].expr_), (yyvsp[0]._string)); result->expr_ = (yyval.expr_); }
#line 2583 "Parser.c"
    break;

  case 112: /* Expr6: Expr6 _DOT _INTEGER_  */
#line 613 "Syntax.y"
                         { (yyval.expr_) = make_DotTuple((yyvsp[-2].expr_), (yyvsp[0]._int)); result->expr_ = (yyval.expr_); }
#line 2589 "Parser.c"
    break;

  case 113: /* Expr6: _LBRACE ListExpr _RBRACE  */
#line 614 "Syntax.y"
                             { (yyval.expr_) = make_Tuple((yyvsp[-1].listexpr_)); result->expr_ = (yyval.expr_); }
#line 2595 "Parser.c"
    break;

  case 114: /* Expr6: _LBRACE ListBinding _RBRACE  */
#line 615 "Syntax.y"
                                { (yyval.expr_) = make_Record((yyvsp[-1].listbinding_)); result->expr_ = (yyval.expr_); }
#line 2601 "Parser.c"
    break;

  case 115: /* Expr6: _KW_cons _LPAREN Expr _COMMA Expr _RPAREN  */
#line 616 "Syntax.y"
                                              { (yyval.expr_) = make_ConsList((yyvsp[-3].expr_), (yyvsp[-1].expr_)); result->expr_ = (yyval.expr_); }
#line 2607 "Parser.c"
    break;

  case 116: /* Expr6: _SYMB_27 _LPAREN Expr _RPAREN  */
#line 617 "Syntax.y"
                                  { (yyval.expr_) = make_Head((yyvsp[-1].expr_)); result->expr_ = (yyval.expr_); }
#line 2613 "Parser.c"
    break;

  case 117: /* Expr6: _SYMB_28 _LPAREN Expr _RPAREN  */
#line 618 "Syntax.y"
                                  { (yyval.expr_) = make_IsEmpty((yyvsp[-1].expr_)); result->expr_ = (yyval.expr_); }
#line 2619 "Parser.c"
    break;

  case 118: /* Expr6: _SYMB_29 _LPAREN Expr _RPAREN  */
#line 619 "Syntax.y"
                                  { (yyval.expr_) = make_Tail((yyvsp[-1].expr_)); result->expr_ = (yyval.expr_); }
#line 2625 "Parser.c"
    break;

  case 119: /* Expr6: _SYMB_30  */
#line 620 "Syntax.y"
             { (yyval.expr_) = make_Panic(); result->expr_ = (yyval.expr_); }
#line 2631 "Parser.c"
    break;

  case 120: /* Expr6: _KW_throw _LPAREN Expr _RPAREN  */
#line 621 "Syntax.y"
                                   { (yyval.expr_) = make_Throw((yyvsp[-1].expr_)); result->expr_ = (yyval.expr_); }
#line 2637 "Parser.c"
    break;

  case 121: /* Expr6: _KW_try _LBRACE Expr _RBRACE _KW_catch _LBRACE Pattern _RDARROW Expr _RBRACE  */
#line 622 "Syntax.y"
                                                                                 { (yyval.expr_) = make_TryCatch((yyvsp[-7].expr_), (yyvsp[-3].pattern_), (yyvsp[-1].expr_)); result->expr_ = (yyval.expr_); }
#line 2643 "Parser.c"
    break;

  case 122: /* Expr6: _KW_try _LBRACE Expr _RBRACE _KW_with _LBRACE Expr _RBRACE  */
#line 623 "Syntax.y"
                                                               { (yyval.expr_) = make_TryWith((yyvsp[-5].expr_), (yyvsp[-1].expr_)); result->expr_ = (yyval.expr_); }
#line 2649 "Parser.c"
    break;

  case 123: /* Expr6: _KW_try _LBRACE Expr _RBRACE _KW_cast _KW_as Type _LBRACE Pattern _RDARROW Expr _RBRACE _KW_with _LBRACE Expr _RBRACE  */
#line 624 "Syntax.y"
                                                                                                                          { (yyval.expr_) = make_TryCastAs((yyvsp[-13].expr_), (yyvsp[-9].type_), (yyvsp[-7].pattern_), (yyvsp[-5].expr_), (yyvsp[-1].expr_)); result->expr_ = (yyval.expr_); }
#line 2655 "Parser.c"
    break;

  case 124: /* Expr6: _KW_inl _LPAREN Expr _RPAREN  */
#line 625 "Syntax.y"
                                 { (yyval.expr_) = make_Inl((yyvsp[-1].expr_)); result->expr_ = (yyval.expr_); }
#line 2661 "Parser.c"
    break;

  case 125: /* Expr6: _KW_inr _LPAREN Expr _RPAREN  */
#line 626 "Syntax.y"
                                 { (yyval.expr_) = make_Inr((yyvsp[-1].expr_)); result->expr_ = (yyval.expr_); }
#line 2667 "Parser.c"
    break;

  case 126: /* Expr6: _KW_succ _LPAREN Expr _RPAREN  */
#line 627 "Syntax.y"
                                  { (yyval.expr_) = make_Succ((yyvsp[-1].expr_)); result->expr_ = (yyval.expr_); }
#line 2673 "Parser.c"
    break;

  case 127: /* Expr6: _KW_not _LPAREN Expr _RPAREN  */
#line 628 "Syntax.y"
                                 { (yyval.expr_) = make_LogicNot((yyvsp[-1].expr_)); result->expr_ = (yyval.expr_); }
#line 2679 "Parser.c"
    break;

  case 128: /* Expr6: _SYMB_31 _LPAREN Expr _RPAREN  */
#line 629 "Syntax.y"
                                  { (yyval.expr_) = make_Pred((yyvsp[-1].expr_)); result->expr_ = (yyval.expr_); }
#line 2685 "Parser.c"
    break;

  case 129: /* Expr6: _SYMB_32 _LPAREN Expr _RPAREN  */
#line 630 "Syntax.y"
                                  { (yyval.expr_) = make_IsZero((yyvsp[-1].expr_)); result->expr_ = (yyval.expr_); }
#line 2691 "Parser.c"
    break;

  case 130: /* Expr6: _KW_fix _LPAREN Expr _RPAREN  */
#line 631 "Syntax.y"
                                 { (yyval.expr_) = make_Fix((yyvsp[-1].expr_)); result->expr_ = (yyval.expr_); }
#line 2697 "Parser.c"
    break;

  case 131: /* Expr6: _SYMB_33 _LPAREN Expr _COMMA Expr _COMMA Expr _RPAREN  */
#line 632 "Syntax.y"
                                                          { (yyval.expr_) = make_NatRec((yyvsp[-5].expr_), (yyvsp[-3].expr_), (yyvsp[-1].expr_)); result->expr_ = (yyval.expr_); }
#line 2703 "Parser.c"
    break;

  case 132: /* Expr6: _KW_fold _LBRACK Type _RBRACK Expr7  */
#line 633 "Syntax.y"
                                        { (yyval.expr_) = make_Fold((yyvsp[-2].type_), (yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 2709 "Parser.c"
    break;

  case 133: /* Expr6: _KW_unfold _LBRACK Type _RBRACK Expr7  */
#line 634 "Syntax.y"
                                          { (yyval.expr_) = make_Unfold((yyvsp[-2].type_), (yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 2715 "Parser.c"
    break;

  case 134: /* Expr6: Expr7  */
#line 635 "Syntax.y"
          { (yyval.expr_) = (yyvsp[0].expr_); result->expr_ = (yyval.expr_); }
#line 2721 "Parser.c"
    break;

  case 135: /* Expr7: _KW_true  */
#line 637 "Syntax.y"
                 { (yyval.expr_) = make_ConstTrue(); result->expr_ = (yyval.expr_); }
#line 2727 "Parser.c"
    break;

  case 136: /* Expr7: _KW_false  */
#line 638 "Syntax.y"
              { (yyval.expr_) = make_ConstFalse(); result->expr_ = (yyval.expr_); }
#line 2733 "Parser.c"
    break;

  case 137: /* Expr7: _KW_unit  */
#line 639 "Syntax.y"
             { (yyval.expr_) = make_ConstUnit(); result->expr_ = (yyval.expr_); }
#line 2739 "Parser.c"
    break;

  case 138: /* Expr7: _INTEGER_  */
#line 640 "Syntax.y"
              { (yyval.expr_) = make_ConstInt((yyvsp[0]._int)); result->expr_ = (yyval.expr_); }
#line 2745 "Parser.c"
    break;

  case 139: /* Expr7: T_MemoryAddress  */
#line 641 "Syntax.y"
                    { (yyval.expr_) = make_ConstMemory((yyvsp[0]._string)); result->expr_ = (yyval.expr_); }
#line 2751 "Parser.c"
    break;

  case 140: /* Expr7: T_StellaIdent  */
#line 642 "Syntax.y"
                  { (yyval.expr_) = make_Var((yyvsp[0]._string)); result->expr_ = (yyval.expr_); }
#line 2757 "Parser.c"
    break;

  case 141: /* Expr7: _LPAREN Expr _RPAREN  */
#line 643 "Syntax.y"
                         { (yyval.expr_) = (yyvsp[-1].expr_); result->expr_ = (yyval.expr_); }
#line 2763 "Parser.c"
    break;

  case 142: /* Type: _KW_auto  */
#line 645 "Syntax.y"
                { (yyval.type_) = make_TypeAuto(); result->type_ = (yyval.type_); }
#line 2769 "Parser.c"
    break;

  case 143: /* Type: _KW_fn _LPAREN ListType _RPAREN _RARROW Type  */
#line 646 "Syntax.y"
                                                 { (yyval.type_) = make_TypeFun((yyvsp[-3].listtype_), (yyvsp[0].type_)); result->type_ = (yyval.type_); }
#line 2775 "Parser.c"
    break;

  case 144: /* Type: _KW_forall ListStellaIdent _DOT Type  */
#line 647 "Syntax.y"
                                         { (yyval.type_) = make_TypeForAll((yyvsp[-2].liststellaident_), (yyvsp[0].type_)); result->type_ = (yyval.type_); }
#line 2781 "Parser.c"
    break;

  case 145: /* Type: _KW_80 T_StellaIdent _DOT Type  */
#line 648 "Syntax.y"
                                   { (yyval.type_) = make_TypeRec((yyvsp[-2]._string), (yyvsp[0].type_)); result->type_ = (yyval.type_); }
#line 2787 "Parser.c"
    break;

  case 146: /* Type: Type1  */
#line 649 "Syntax.y"
          { (yyval.type_) = (yyvsp[0].type_); result->type_ = (yyval.type_); }
#line 2793 "Parser.c"
    break;

  case 147: /* Type1: Type2 _PLUS Type2  */
#line 651 "Syntax.y"
                          { (yyval.type_) = make_TypeSum((yyvsp[-2].type_), (yyvsp[0].type_)); result->type_ = (yyval.type_); }
#line 2799 "Parser.c"
    break;

  case 148: /* Type1: Type2  */
#line 652 "Syntax.y"
          { (yyval.type_) = (yyvsp[0].type_); result->type_ = (yyval.type_); }
#line 2805 "Parser.c"
    break;

  case 149: /* Type2: _LBRACE ListType _RBRACE  */
#line 654 "Syntax.y"
                                 { (yyval.type_) = make_TypeTuple((yyvsp[-1].listtype_)); result->type_ = (yyval.type_); }
#line 2811 "Parser.c"
    break;

  case 150: /* Type2: _LBRACE ListRecordFieldType _RBRACE  */
#line 655 "Syntax.y"
                                        { (yyval.type_) = make_TypeRecord((yyvsp[-1].listrecordfieldtype_)); result->type_ = (yyval.type_); }
#line 2817 "Parser.c"
    break;

  case 151: /* Type2: _SYMB_13 ListVariantFieldType _SYMB_14  */
#line 656 "Syntax.y"
                                           { (yyval.type_) = make_TypeVariant((yyvsp[-1].listvariantfieldtype_)); result->type_ = (yyval.type_); }
#line 2823 "Parser.c"
    break;

  case 152: /* Type2: _LBRACK Type _RBRACK  */
#line 657 "Syntax.y"
                         { (yyval.type_) = make_TypeList((yyvsp[-1].type_)); result->type_ = (yyval.type_); }
#line 2829 "Parser.c"
    break;

  case 153: /* Type2: Type3  */
#line 658 "Syntax.y"
          { (yyval.type_) = (yyvsp[0].type_); result->type_ = (yyval.type_); }
#line 2835 "Parser.c"
    break;

  case 154: /* Type3: _KW_Bool  */
#line 660 "Syntax.y"
                 { (yyval.type_) = make_TypeBool(); result->type_ = (yyval.type_); }
#line 2841 "Parser.c"
    break;

  case 155: /* Type3: _KW_Nat  */
#line 661 "Syntax.y"
            { (yyval.type_) = make_TypeNat(); result->type_ = (yyval.type_); }
#line 2847 "Parser.c"
    break;

  case 156: /* Type3: _KW_Unit  */
#line 662 "Syntax.y"
             { (yyval.type_) = make_TypeUnit(); result->type_ = (yyval.type_); }
#line 2853 "Parser.c"
    break;

  case 157: /* Type3: _KW_Top  */
#line 663 "Syntax.y"
            { (yyval.type_) = make_TypeTop(); result->type_ = (yyval.type_); }
#line 2859 "Parser.c"
    break;

  case 158: /* Type3: _KW_Bot  */
#line 664 "Syntax.y"
            { (yyval.type_) = make_TypeBottom(); result->type_ = (yyval.type_); }
#line 2865 "Parser.c"
    break;

  case 159: /* Type3: _AMP Type2  */
#line 665 "Syntax.y"
               { (yyval.type_) = make_TypeRef((yyvsp[0].type_)); result->type_ = (yyval.type_); }
#line 2871 "Parser.c"
    break;

  case 160: /* Type3: T_StellaIdent  */
#line 666 "Syntax.y"
                  { (yyval.type_) = make_TypeVar((yyvsp[0]._string)); result->type_ = (yyval.type_); }
#line 2877 "Parser.c"
    break;

  case 161: /* Type3: _LPAREN Type _RPAREN  */
#line 667 "Syntax.y"
                         { (yyval.type_) = (yyvsp[-1].type_); result->type_ = (yyval.type_); }
#line 2883 "Parser.c"
    break;

  case 162: /* ListType: %empty  */
#line 669 "Syntax.y"
                       { (yyval.listtype_) = 0; result->listtype_ = (yyval.listtype_); }
#line 2889 "Parser.c"
    break;

  case 163: /* ListType: Type  */
#line 670 "Syntax.y"
         { (yyval.listtype_) = make_ListType((yyvsp[0].type_), 0); result->listtype_ = (yyval.listtype_); }
#line 2895 "Parser.c"
    break;

  case 164: /* ListType: Type _COMMA ListType  */
#line 671 "Syntax.y"
                         { (yyval.listtype_) = make_ListType((yyvsp[-2].type_), (yyvsp[0].listtype_)); result->listtype_ = (yyval.listtype_); }
#line 2901 "Parser.c"
    break;

  case 165: /* VariantFieldType: T_StellaIdent OptionalTyping  */
#line 673 "Syntax.y"
                                                { (yyval.variantfieldtype_) = make_AVariantFieldType((yyvsp[-1]._string), (yyvsp[0].optionaltyping_)); result->variantfieldtype_ = (yyval.variantfieldtype_); }
#line 2907 "Parser.c"
    break;

  case 166: /* ListVariantFieldType: %empty  */
#line 675 "Syntax.y"
                                   { (yyval.listvariantfieldtype_) = 0; result->listvariantfieldtype_ = (yyval.listvariantfieldtype_); }
#line 2913 "Parser.c"
    break;

  case 167: /* ListVariantFieldType: VariantFieldType  */
#line 676 "Syntax.y"
                     { (yyval.listvariantfieldtype_) = make_ListVariantFieldType((yyvsp[0].variantfieldtype_), 0); result->listvariantfieldtype_ = (yyval.listvariantfieldtype_); }
#line 2919 "Parser.c"
    break;

  case 168: /* ListVariantFieldType: VariantFieldType _COMMA ListVariantFieldType  */
#line 677 "Syntax.y"
                                                 { (yyval.listvariantfieldtype_) = make_ListVariantFieldType((yyvsp[-2].variantfieldtype_), (yyvsp[0].listvariantfieldtype_)); result->listvariantfieldtype_ = (yyval.listvariantfieldtype_); }
#line 2925 "Parser.c"
    break;

  case 169: /* RecordFieldType: T_StellaIdent _COLON Type  */
#line 679 "Syntax.y"
                                            { (yyval.recordfieldtype_) = make_ARecordFieldType((yyvsp[-2]._string), (yyvsp[0].type_)); result->recordfieldtype_ = (yyval.recordfieldtype_); }
#line 2931 "Parser.c"
    break;

  case 170: /* ListRecordFieldType: RecordFieldType  */
#line 681 "Syntax.y"
                                      { (yyval.listrecordfieldtype_) = make_ListRecordFieldType((yyvsp[0].recordfieldtype_), 0); result->listrecordfieldtype_ = (yyval.listrecordfieldtype_); }
#line 2937 "Parser.c"
    break;

  case 171: /* ListRecordFieldType: RecordFieldType _COMMA ListRecordFieldType  */
#line 682 "Syntax.y"
                                               { (yyval.listrecordfieldtype_) = make_ListRecordFieldType((yyvsp[-2].recordfieldtype_), (yyvsp[0].listrecordfieldtype_)); result->listrecordfieldtype_ = (yyval.listrecordfieldtype_); }
#line 2943 "Parser.c"
    break;


#line 2947 "Parser.c"

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

#line 687 "Syntax.y"



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



