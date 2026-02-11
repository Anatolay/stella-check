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
ListLabelledEffect reverseListLabelledEffect(ListLabelledEffect l)
{
  ListLabelledEffect prev = 0;
  ListLabelledEffect tmp = 0;
  while (l)
  {
    tmp = l->listlabelledeffect_;
    l->listlabelledeffect_ = prev;
    prev = l;
    l = tmp;
  }
  return prev;
}
ListModality reverseListModality(ListModality l)
{
  ListModality prev = 0;
  ListModality tmp = 0;
  while (l)
  {
    tmp = l->listmodality_;
    l->listmodality_ = prev;
    prev = l;
    l = tmp;
  }
  return prev;
}
ListHandler reverseListHandler(ListHandler l)
{
  ListHandler prev = 0;
  ListHandler tmp = 0;
  while (l)
  {
    tmp = l->listhandler_;
    l->listhandler_ = prev;
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

#line 353 "Parser.c"

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
  YYSYMBOL__KW_abs = 39,                   /* _KW_abs  */
  YYSYMBOL__KW_and = 40,                   /* _KW_and  */
  YYSYMBOL__KW_as = 41,                    /* _KW_as  */
  YYSYMBOL__KW_auto = 42,                  /* _KW_auto  */
  YYSYMBOL__KW_cast = 43,                  /* _KW_cast  */
  YYSYMBOL__KW_catch = 44,                 /* _KW_catch  */
  YYSYMBOL__KW_cons = 45,                  /* _KW_cons  */
  YYSYMBOL__KW_core = 46,                  /* _KW_core  */
  YYSYMBOL__KW_do = 47,                    /* _KW_do  */
  YYSYMBOL__KW_else = 48,                  /* _KW_else  */
  YYSYMBOL__KW_exception = 49,             /* _KW_exception  */
  YYSYMBOL__KW_extend = 50,                /* _KW_extend  */
  YYSYMBOL__KW_false = 51,                 /* _KW_false  */
  YYSYMBOL__KW_fix = 52,                   /* _KW_fix  */
  YYSYMBOL__KW_fn = 53,                    /* _KW_fn  */
  YYSYMBOL__KW_fold = 54,                  /* _KW_fold  */
  YYSYMBOL__KW_forall = 55,                /* _KW_forall  */
  YYSYMBOL__KW_generic = 56,               /* _KW_generic  */
  YYSYMBOL__KW_handle = 57,                /* _KW_handle  */
  YYSYMBOL__KW_if = 58,                    /* _KW_if  */
  YYSYMBOL__KW_in = 59,                    /* _KW_in  */
  YYSYMBOL__KW_inl = 60,                   /* _KW_inl  */
  YYSYMBOL__KW_inline = 61,                /* _KW_inline  */
  YYSYMBOL__KW_inr = 62,                   /* _KW_inr  */
  YYSYMBOL__KW_language = 63,              /* _KW_language  */
  YYSYMBOL__KW_let = 64,                   /* _KW_let  */
  YYSYMBOL__KW_letrec = 65,                /* _KW_letrec  */
  YYSYMBOL__KW_lock = 66,                  /* _KW_lock  */
  YYSYMBOL__KW_match = 67,                 /* _KW_match  */
  YYSYMBOL__KW_mod = 68,                   /* _KW_mod  */
  YYSYMBOL__KW_new = 69,                   /* _KW_new  */
  YYSYMBOL__KW_not = 70,                   /* _KW_not  */
  YYSYMBOL__KW_or = 71,                    /* _KW_or  */
  YYSYMBOL__SYMB_30 = 72,                  /* _SYMB_30  */
  YYSYMBOL__KW_rel = 73,                   /* _KW_rel  */
  YYSYMBOL__KW_return = 74,                /* _KW_return  */
  YYSYMBOL__KW_succ = 75,                  /* _KW_succ  */
  YYSYMBOL__KW_then = 76,                  /* _KW_then  */
  YYSYMBOL__KW_throw = 77,                 /* _KW_throw  */
  YYSYMBOL__KW_throws = 78,                /* _KW_throws  */
  YYSYMBOL__KW_true = 79,                  /* _KW_true  */
  YYSYMBOL__KW_try = 80,                   /* _KW_try  */
  YYSYMBOL__KW_type = 81,                  /* _KW_type  */
  YYSYMBOL__KW_unfold = 82,                /* _KW_unfold  */
  YYSYMBOL__KW_unit = 83,                  /* _KW_unit  */
  YYSYMBOL__KW_variant = 84,               /* _KW_variant  */
  YYSYMBOL__KW_with = 85,                  /* _KW_with  */
  YYSYMBOL__LBRACE = 86,                   /* _LBRACE  */
  YYSYMBOL__BAR = 87,                      /* _BAR  */
  YYSYMBOL__SYMB_14 = 88,                  /* _SYMB_14  */
  YYSYMBOL__RBRACE = 89,                   /* _RBRACE  */
  YYSYMBOL__KW_86 = 90,                    /* _KW_86  */
  YYSYMBOL_T_ExtensionName = 91,           /* T_ExtensionName  */
  YYSYMBOL_T_MemoryAddress = 92,           /* T_MemoryAddress  */
  YYSYMBOL_T_StellaIdent = 93,             /* T_StellaIdent  */
  YYSYMBOL__INTEGER_ = 94,                 /* _INTEGER_  */
  YYSYMBOL_YYACCEPT = 95,                  /* $accept  */
  YYSYMBOL_Program = 96,                   /* Program  */
  YYSYMBOL_ListStellaIdent = 97,           /* ListStellaIdent  */
  YYSYMBOL_LanguageDecl = 98,              /* LanguageDecl  */
  YYSYMBOL_Extension = 99,                 /* Extension  */
  YYSYMBOL_ListExtensionName = 100,        /* ListExtensionName  */
  YYSYMBOL_ListExtension = 101,            /* ListExtension  */
  YYSYMBOL_Decl = 102,                     /* Decl  */
  YYSYMBOL_ListDecl = 103,                 /* ListDecl  */
  YYSYMBOL_Annotation = 104,               /* Annotation  */
  YYSYMBOL_ListAnnotation = 105,           /* ListAnnotation  */
  YYSYMBOL_ParamDecl = 106,                /* ParamDecl  */
  YYSYMBOL_ListParamDecl = 107,            /* ListParamDecl  */
  YYSYMBOL_ReturnType = 108,               /* ReturnType  */
  YYSYMBOL_ThrowType = 109,                /* ThrowType  */
  YYSYMBOL_Type9 = 110,                    /* Type9  */
  YYSYMBOL_ListType9 = 111,                /* ListType9  */
  YYSYMBOL_MatchCase = 112,                /* MatchCase  */
  YYSYMBOL_ListMatchCase = 113,            /* ListMatchCase  */
  YYSYMBOL_OptionalTyping = 114,           /* OptionalTyping  */
  YYSYMBOL_PatternData = 115,              /* PatternData  */
  YYSYMBOL_ExprData = 116,                 /* ExprData  */
  YYSYMBOL_Pattern = 117,                  /* Pattern  */
  YYSYMBOL_ListPattern = 118,              /* ListPattern  */
  YYSYMBOL_LabelledPattern = 119,          /* LabelledPattern  */
  YYSYMBOL_ListLabelledPattern = 120,      /* ListLabelledPattern  */
  YYSYMBOL_Binding = 121,                  /* Binding  */
  YYSYMBOL_ListBinding = 122,              /* ListBinding  */
  YYSYMBOL_Expr = 123,                     /* Expr  */
  YYSYMBOL_ListExpr = 124,                 /* ListExpr  */
  YYSYMBOL_Expr1 = 125,                    /* Expr1  */
  YYSYMBOL_PatternBinding = 126,           /* PatternBinding  */
  YYSYMBOL_ListPatternBinding = 127,       /* ListPatternBinding  */
  YYSYMBOL_Expr2 = 128,                    /* Expr2  */
  YYSYMBOL_LabelledEffect = 129,           /* LabelledEffect  */
  YYSYMBOL_ListLabelledEffect = 130,       /* ListLabelledEffect  */
  YYSYMBOL_Modality = 131,                 /* Modality  */
  YYSYMBOL_ListModality = 132,             /* ListModality  */
  YYSYMBOL_Expr3 = 133,                    /* Expr3  */
  YYSYMBOL_Expr4 = 134,                    /* Expr4  */
  YYSYMBOL_Expr5 = 135,                    /* Expr5  */
  YYSYMBOL_Expr6 = 136,                    /* Expr6  */
  YYSYMBOL_Expr7 = 137,                    /* Expr7  */
  YYSYMBOL_Handler = 138,                  /* Handler  */
  YYSYMBOL_ListHandler = 139,              /* ListHandler  */
  YYSYMBOL_Type = 140,                     /* Type  */
  YYSYMBOL_Type1 = 141,                    /* Type1  */
  YYSYMBOL_Type2 = 142,                    /* Type2  */
  YYSYMBOL_Type3 = 143,                    /* Type3  */
  YYSYMBOL_ListType = 144,                 /* ListType  */
  YYSYMBOL_VariantFieldType = 145,         /* VariantFieldType  */
  YYSYMBOL_ListVariantFieldType = 146,     /* ListVariantFieldType  */
  YYSYMBOL_RecordFieldType = 147,          /* RecordFieldType  */
  YYSYMBOL_ListRecordFieldType = 148       /* ListRecordFieldType  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;


/* Second part of user prologue.  */
#line 349 "Syntax.y"

void yyerror(YYLTYPE *loc, yyscan_t scanner, YYSTYPE *result, const char *msg)
{
  fprintf(stderr, "error: %d,%d: %s at %s\n",
    loc->first_line, loc->first_column, msg, syntax_get_text(scanner));
}

int yyparse(yyscan_t scanner, YYSTYPE *result);

extern int yylex(YYSTYPE *lvalp, YYLTYPE *llocp, yyscan_t scanner);

#line 547 "Parser.c"


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
#define YYLAST   816

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  95
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  54
/* YYNRULES -- Number of rules.  */
#define YYNRULES  189
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  498

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   349


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
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   516,   516,   518,   519,   520,   522,   524,   526,   527,
     528,   530,   531,   533,   534,   535,   536,   537,   538,   540,
     541,   548,   550,   551,   553,   555,   556,   557,   559,   560,
     562,   563,   565,   567,   568,   570,   572,   573,   574,   576,
     577,   579,   580,   582,   583,   585,   586,   587,   588,   589,
     590,   591,   592,   593,   594,   595,   596,   597,   598,   599,
     600,   601,   603,   604,   605,   607,   609,   610,   612,   614,
     615,   617,   618,   619,   620,   621,   622,   624,   625,   626,
     628,   629,   630,   632,   634,   635,   637,   638,   639,   640,
     641,   642,   643,   648,   650,   651,   652,   654,   655,   656,
     658,   659,   661,   662,   663,   664,   665,   666,   667,   668,
     669,   670,   671,   673,   674,   675,   676,   678,   679,   680,
     682,   683,   684,   685,   686,   687,   688,   689,   690,   691,
     692,   693,   694,   695,   696,   697,   698,   699,   700,   701,
     702,   703,   704,   705,   706,   707,   708,   709,   711,   712,
     713,   714,   715,   716,   717,   719,   720,   722,   723,   725,
     726,   727,   728,   729,   730,   732,   733,   735,   736,   737,
     738,   739,   741,   742,   743,   744,   745,   746,   747,   748,
     750,   751,   752,   754,   756,   757,   758,   760,   762,   763
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
  "_RBRACK", "_KW_abs", "_KW_and", "_KW_as", "_KW_auto", "_KW_cast",
  "_KW_catch", "_KW_cons", "_KW_core", "_KW_do", "_KW_else",
  "_KW_exception", "_KW_extend", "_KW_false", "_KW_fix", "_KW_fn",
  "_KW_fold", "_KW_forall", "_KW_generic", "_KW_handle", "_KW_if",
  "_KW_in", "_KW_inl", "_KW_inline", "_KW_inr", "_KW_language", "_KW_let",
  "_KW_letrec", "_KW_lock", "_KW_match", "_KW_mod", "_KW_new", "_KW_not",
  "_KW_or", "_SYMB_30", "_KW_rel", "_KW_return", "_KW_succ", "_KW_then",
  "_KW_throw", "_KW_throws", "_KW_true", "_KW_try", "_KW_type",
  "_KW_unfold", "_KW_unit", "_KW_variant", "_KW_with", "_LBRACE", "_BAR",
  "_SYMB_14", "_RBRACE", "_KW_86", "T_ExtensionName", "T_MemoryAddress",
  "T_StellaIdent", "_INTEGER_", "$accept", "Program", "ListStellaIdent",
  "LanguageDecl", "Extension", "ListExtensionName", "ListExtension",
  "Decl", "ListDecl", "Annotation", "ListAnnotation", "ParamDecl",
  "ListParamDecl", "ReturnType", "ThrowType", "Type9", "ListType9",
  "MatchCase", "ListMatchCase", "OptionalTyping", "PatternData",
  "ExprData", "Pattern", "ListPattern", "LabelledPattern",
  "ListLabelledPattern", "Binding", "ListBinding", "Expr", "ListExpr",
  "Expr1", "PatternBinding", "ListPatternBinding", "Expr2",
  "LabelledEffect", "ListLabelledEffect", "Modality", "ListModality",
  "Expr3", "Expr4", "Expr5", "Expr6", "Expr7", "Handler", "ListHandler",
  "Type", "Type1", "Type2", "Type3", "ListType", "VariantFieldType",
  "ListVariantFieldType", "RecordFieldType", "ListRecordFieldType", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-350)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-3)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -38,    -4,    45,  -350,    39,  -350,    20,  -350,    15,    86,
      12,    18,  -350,   -43,    14,  -350,   154,   142,  -350,   133,
      66,   147,    70,   119,  -350,   139,  -350,    18,   672,   167,
     672,   184,   102,    75,  -350,   130,   672,   113,  -350,  -350,
    -350,  -350,  -350,   215,  -350,   187,   116,   684,   120,  -350,
    -350,  -350,   199,  -350,   672,  -350,   121,   181,   201,  -350,
     206,   207,   188,   672,  -350,   218,   212,   219,   145,   196,
     198,   672,   229,   230,   232,   234,   156,   243,   166,   245,
     130,  -350,   241,   250,   254,   116,   169,   116,    75,   211,
    -350,   672,  -350,   113,  -350,   672,  -350,   258,   116,   672,
     672,   672,  -350,   173,  -350,   672,  -350,   672,   121,   255,
     233,   260,   270,   259,   200,  -350,   192,  -350,  -350,  -350,
     274,  -350,  -350,  -350,  -350,   232,  -350,  -350,  -350,  -350,
     672,   216,   290,   672,   169,  -350,   169,   293,   672,  -350,
     672,   214,   121,  -350,  -350,   280,   121,  -350,   296,  -350,
    -350,  -350,   300,  -350,   302,   672,    79,   255,   255,  -350,
     321,   216,   216,   321,   593,   220,   309,   311,   312,   313,
     314,   315,   321,   317,   231,  -350,   319,   320,   299,   301,
     244,   457,   331,   333,   685,   685,   525,   303,   336,   339,
    -350,   341,   342,  -350,   271,   322,  -350,   389,  -350,  -350,
    -350,   267,   345,   348,   273,    29,  -350,    16,  -350,   279,
     281,   362,  -350,   349,   321,   321,   321,   321,   321,   321,
     361,   338,   321,   374,   321,   121,   672,   116,   321,   306,
     321,   321,   685,   291,   685,   381,  -350,   386,   388,   393,
    -350,  -350,   722,  -350,  -350,   137,   392,   346,   347,   324,
      75,   321,   321,   321,   321,   321,   672,   387,   401,   323,
     327,  -350,   321,   457,   525,   593,   593,   525,   525,   525,
     525,   525,   130,   379,   593,   593,   593,   593,   321,    23,
     672,  -350,  -350,  -350,   321,   340,   417,   420,   422,   423,
     424,   425,   321,  -350,   427,   321,   426,   431,   394,   406,
     350,   457,   441,   443,    21,   434,   101,   414,   685,   685,
     685,   685,   439,   373,   460,   378,   321,   672,   432,   685,
     321,   321,   685,   436,   469,   471,   472,   473,   395,   450,
     321,   399,  -350,  -350,  -350,  -350,    25,    29,    29,    25,
      25,    25,    25,    25,  -350,   130,    29,  -350,  -350,  -350,
     486,  -350,  -350,   458,   100,   115,  -350,  -350,  -350,  -350,
    -350,  -350,  -350,   321,  -350,   321,   488,  -350,   411,   180,
     321,   413,   451,  -350,  -350,  -350,   685,   685,   412,   685,
    -350,   128,    32,    33,    37,   685,  -350,   408,  -350,  -350,
    -350,   672,  -350,  -350,  -350,   416,   418,   132,   419,  -350,
    -350,  -350,  -350,   -27,   180,  -350,   387,  -350,  -350,  -350,
    -350,   321,   321,   496,   505,  -350,   442,  -350,  -350,   435,
     457,    47,    63,  -350,  -350,   685,  -350,  -350,  -350,    63,
     439,  -350,  -350,   685,  -350,   321,   321,   477,   437,   444,
    -350,   433,   446,   321,  -350,   321,    13,  -350,  -350,    58,
    -350,  -350,   449,   672,   685,   321,  -350,  -350,   506,   452,
     169,   685,   503,   453,  -350,  -350,   461,   161,   455,  -350,
    -350,   518,   158,    13,  -350,   685,   321,  -350,   685,   321,
    -350,   162,   459,   136,  -350,   321,  -350,   463,   474,   539,
     467,   548,   475,   321,   321,  -350,   476,  -350
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,    11,     0,     1,    19,     6,     0,     0,
      22,     8,    12,     0,     0,    20,     0,     9,     7,     0,
       0,     0,     0,     0,    21,     0,    23,     8,     0,     0,
       0,     0,     0,     0,    10,     0,     0,   184,   172,   176,
     173,   175,   174,     0,   160,     0,     3,   180,     0,   178,
      17,   164,   166,   171,     0,    16,    25,     0,     0,    97,
       0,   100,     0,     0,   177,     0,    39,   185,     0,     0,
       0,   180,     4,     0,   178,   181,     0,   188,     0,     0,
       0,    18,     0,    26,     0,     3,    94,     3,     0,     0,
     179,     0,   183,   184,   169,     0,   170,     0,     3,     0,
       0,   180,   167,     0,   168,     0,   165,     0,    25,    28,
       0,     0,    95,     0,     0,   101,     0,    40,   186,   159,
       0,     5,   162,   187,   182,     0,   189,   163,    24,    27,
       0,    30,     0,     0,    94,    98,    94,     0,     0,    29,
       0,     0,    25,    93,    96,     0,    25,   161,    33,    31,
      32,    19,     0,    99,     0,     0,    22,    28,    28,    34,
       0,    30,    30,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    77,     0,     0,   149,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     130,     0,     0,   148,     0,     0,   150,    77,   152,   153,
     151,     0,    76,    82,    92,   112,   116,   119,   147,     0,
       0,     0,   118,    43,     0,     0,     0,     0,     0,     0,
      78,     0,     0,     0,     0,    25,     0,     3,     0,     0,
       0,     0,     0,     0,    62,     0,    55,     0,     0,     0,
      56,    57,    62,    60,    58,     0,    84,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   153,    69,     0,
       0,    13,    72,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    77,     0,
     180,    19,    19,   154,     0,     0,     0,     0,     0,     0,
       0,     0,    77,   108,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    41,    63,     0,     0,     0,
       0,     0,    60,     0,    66,     0,     0,     0,     0,     0,
       0,     0,    36,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   125,   124,    71,    80,    91,   109,   110,    86,
      87,    90,    88,    89,   102,     0,   111,   113,   114,   115,
       0,   122,   123,     0,    22,    22,    44,   106,   127,   128,
     129,   140,   139,     0,    79,     0,     0,   143,     0,     0,
       0,     0,     0,   135,   136,    61,     0,     0,     0,    62,
      52,     0,     0,     0,     0,     0,    50,     0,    51,    83,
      46,     0,    85,    73,    74,    37,     0,     0,     0,   117,
     138,   137,   131,     0,     0,    68,     0,    70,   103,   120,
     121,     0,     0,     0,     0,   141,     0,   145,    75,     0,
       0,     0,    42,    47,    64,     0,    48,    49,    59,    65,
       0,    67,    45,    36,   107,     0,     0,     0,     0,     0,
     146,     0,     0,     0,   126,     0,     0,    81,    54,     0,
      38,    35,     0,     0,     0,     0,    14,    15,     0,     0,
       0,     0,     0,     0,    53,   105,     0,     0,     0,   144,
     104,     0,     0,   157,   142,     0,     0,   133,     0,     0,
     158,     0,     0,     0,   155,     0,   132,     0,     0,     0,
       0,     0,     0,     0,     0,   156,     0,   134
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -350,  -350,   -80,  -350,  -350,   537,  -350,  -350,  -142,  -350,
    -350,  -350,   -94,  -107,  -102,  -350,   428,  -350,   134,  -350,
    -350,  -350,  -185,  -236,  -350,   179,  -350,   237,  -133,  -184,
    -171,  -350,  -174,   383,   111,   -21,   -39,   485,    64,  -242,
    -143,  -350,  -349,  -350,   107,   -28,  -350,   -34,  -350,   -68,
    -350,   481,  -350,   478
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,    73,     3,     9,    18,     6,    15,    10,    26,
      16,    83,    84,   131,   141,   148,   149,   395,   396,    92,
     378,   285,   245,   307,   314,   315,   258,   259,   220,   221,
     202,   246,   247,   203,   112,   113,    61,    62,   204,   205,
     206,   207,   208,   462,   463,    75,    51,    52,    53,    76,
      67,    68,    77,    78
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      50,    64,    55,    97,    69,   110,   313,   114,    65,   156,
     229,   248,    -2,   260,   129,    70,   437,   438,   121,   460,
     417,   212,   278,   337,   338,     1,    81,   201,   375,   279,
     211,   376,   346,   124,   265,    70,   266,   275,    19,   426,
     427,    20,     4,   276,   428,     5,   106,   304,   152,   306,
     161,   162,   154,   280,   448,   440,     7,   306,   439,   209,
     210,    13,   317,   117,   318,   464,   272,   119,   273,   277,
       8,   122,   123,   317,   317,   318,   318,   127,   317,   128,
     318,   286,   287,   288,   289,   290,   291,   461,   317,   294,
     318,   296,   335,    14,   350,   300,   274,   302,   303,   317,
      11,   318,   139,    12,   317,   143,   318,    21,   364,    17,
     147,   379,   150,   144,    58,   145,   351,   352,   324,   325,
     326,   327,   328,   381,   382,   383,   384,   150,    13,   334,
     372,   297,   347,   348,   349,    35,    36,   397,   425,   354,
     355,    59,   317,   424,   318,   392,   487,   299,    60,    13,
      37,   356,    27,   160,    28,   435,    38,    39,   316,    29,
      14,    40,   366,    31,    13,    41,    42,    63,    30,   317,
     479,   318,    32,   317,   411,   318,    33,   317,   317,   318,
     318,    14,    54,   389,   476,   485,   163,   393,   394,   412,
      56,   421,   422,    71,   306,    57,    14,   405,   298,   317,
     429,   318,   317,   317,   318,   318,    66,    22,    80,    72,
      23,   323,   353,    79,    82,    24,    47,    88,    85,    86,
      35,    36,    25,    49,    87,    90,    89,    91,   329,    93,
     413,   175,   414,    94,    95,    37,    96,   418,   344,    98,
     449,    38,    39,    99,   101,   102,    40,   100,   397,   447,
      41,    42,    43,   103,    58,   104,   107,    44,   105,   193,
     108,   109,   111,   196,   116,   120,   125,   130,    45,   467,
      46,   132,   198,   199,   200,   133,   472,   264,   441,   442,
     134,    59,   265,   135,   266,   137,   138,   136,    60,   390,
     481,   267,   268,   483,   140,   269,   142,   270,   271,   146,
     151,    47,   451,   452,   153,    48,   155,   157,    49,   158,
     458,   408,   459,   213,   272,   214,   273,   215,   216,   217,
     218,   219,   468,   222,   223,   224,   225,   163,   336,   164,
     228,   339,   340,   341,   342,   343,   226,   230,   227,   231,
     250,   165,   251,   482,   274,   252,   484,   253,   254,   166,
     167,   168,   488,   169,   170,   171,   261,   255,   172,   256,
     495,   496,   262,   432,   263,   281,   173,   282,   174,   283,
     284,   292,   175,   176,   177,   178,   293,   179,   180,   181,
     295,   182,   301,   183,   305,   184,   185,   308,   186,   187,
     188,   189,   309,   190,   310,   163,   191,   164,   192,   311,
     193,   194,   319,   195,   196,   320,   321,   197,   330,   165,
     322,   331,   332,   198,   199,   200,   333,   166,   167,   168,
     345,   169,   170,   171,   358,   466,   172,   359,   357,   360,
     361,   362,   369,   367,   173,   363,   174,   365,   368,   371,
     175,   176,   177,   178,   370,   179,   180,   181,   373,   182,
     374,   183,   380,   184,   185,   377,   186,   187,   188,   189,
     385,   190,   386,   163,   191,   164,   192,   388,   193,   194,
     387,   195,   196,   391,   398,   197,   399,   165,   400,   401,
     402,   198,   257,   200,   403,   166,   167,   168,   404,   169,
     170,   171,   406,   409,   172,   415,   410,   416,   419,   420,
     423,   430,   173,   433,   174,   436,   443,   434,   175,   176,
     177,   178,   444,   469,   180,   181,   445,   182,   453,   183,
     473,   446,   456,   454,   186,   187,   188,   189,   478,   190,
     455,   163,   191,   164,   192,   457,   193,   194,   465,   195,
     196,   470,   474,   197,   477,   165,   491,   475,   486,   198,
     199,   200,   492,   166,   167,   168,   489,   169,   170,   171,
     493,   494,   172,   490,    34,   497,   431,   450,   407,   249,
     173,   471,   174,   115,   118,     0,   175,   176,   177,   178,
     480,   126,   180,   159,     0,   182,     0,   183,     0,     0,
       0,     0,   186,   187,   188,   189,     0,   190,     0,   163,
     191,   164,   192,     0,   193,   194,     0,   195,   196,     0,
       0,   197,     0,     0,     0,     0,     0,   198,   199,   200,
       0,   166,   167,   168,     0,   169,   170,   171,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   173,     0,
     174,     0,     0,     0,   175,   176,     0,   178,     0,     0,
     180,     0,     0,   182,     0,   183,     0,     0,     0,     0,
       0,     0,   188,   189,     0,   190,     0,     0,   191,     0,
     192,     0,   193,   194,     0,   195,   196,    35,    36,   197,
       0,     0,     0,     0,     0,   198,   199,   200,     0,    35,
      36,   232,    37,     0,     0,     0,     0,     0,    38,    39,
       0,     0,     0,    40,    37,   233,     0,    41,    42,    43,
      38,    39,     0,     0,    44,    40,     0,     0,     0,    41,
      42,    43,   234,     0,     0,    45,    44,    46,   232,     0,
     235,     0,     0,     0,     0,     0,   236,    45,     0,    46,
       0,     0,   233,     0,     0,   237,     0,   238,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    47,   234,
     239,     0,    48,     0,   240,    49,     0,   235,   241,     0,
      47,   242,     0,   236,    48,     0,     0,    74,   243,   244,
       0,     0,   237,     0,   238,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   239,     0,     0,
       0,   240,     0,     0,     0,   241,     0,     0,   242,     0,
       0,     0,     0,     0,     0,   312,   244
};

static const yytype_int16 yycheck[] =
{
      28,    35,    30,    71,    43,    85,   242,    87,    36,   151,
     181,   185,     0,   197,   108,    43,    43,    44,    98,     6,
     369,   164,     6,   265,   266,    63,    54,   160,     7,    13,
     163,    10,   274,   101,     9,    63,    11,     8,    81,     7,
       7,    84,    46,    14,     7,     0,    80,   232,   142,   234,
     157,   158,   146,    37,     7,   404,    17,   242,    85,   161,
     162,    49,    41,    91,    43,     7,    41,    95,    43,    40,
      50,    99,   100,    41,    41,    43,    43,   105,    41,   107,
      43,   214,   215,   216,   217,   218,   219,    74,    41,   222,
      43,   224,   263,    81,   278,   228,    71,   230,   231,    41,
      85,    43,   130,    17,    41,   133,    43,    93,   292,    91,
     138,    10,   140,   134,    39,   136,    93,    94,   251,   252,
     253,   254,   255,   308,   309,   310,   311,   155,    49,   262,
     301,   225,   275,   276,   277,     5,     6,   322,    10,   281,
     282,    66,    41,   379,    43,   319,    10,   227,    73,    49,
      20,   284,    10,    74,    21,    23,    26,    27,    21,    93,
      81,    31,   295,    93,    49,    35,    36,    37,    21,    41,
      12,    43,    53,    41,    74,    43,    37,    41,    41,    43,
      43,    81,    15,   316,    23,    23,     6,   320,   321,    74,
       6,   376,   377,     6,   379,    93,    81,   330,   226,    41,
     385,    43,    41,    41,    43,    43,    93,    53,     9,    93,
      56,   250,   280,    93,    93,    61,    86,    10,    37,    18,
       5,     6,    68,    93,    18,     7,    38,    15,   256,    10,
     363,    51,   365,    88,    38,    20,    38,   370,   272,    10,
     425,    26,    27,    13,    10,    89,    31,    15,   433,   420,
      35,    36,    37,    10,    39,    89,    15,    42,    13,    79,
      10,     7,    93,    83,    53,     7,    93,    12,    53,   454,
      55,    38,    92,    93,    94,    15,   461,     4,   411,   412,
      10,    66,     9,    24,    11,    93,    12,    87,    73,   317,
     475,    18,    19,   478,    78,    22,     6,    24,    25,     6,
      86,    86,   435,   436,    24,    90,    10,     7,    93,     7,
     443,   345,   445,    93,    41,     6,    43,     6,     6,     6,
       6,     6,   455,     6,    93,     6,     6,     6,   264,     8,
      86,   267,   268,   269,   270,   271,    37,     6,    37,     6,
      37,    20,     6,   476,    71,     6,   479,     6,     6,    28,
      29,    30,   485,    32,    33,    34,    89,    86,    37,    37,
     493,   494,    17,   391,    16,    86,    45,    86,    47,     7,
      21,    10,    51,    52,    53,    54,    38,    56,    57,    58,
       6,    60,    76,    62,    93,    64,    65,     6,    67,    68,
      69,    70,     6,    72,     6,     6,    75,     8,    77,     6,
      79,    80,    10,    82,    83,    59,    59,    86,    21,    20,
      86,    10,    89,    92,    93,    94,    89,    28,    29,    30,
      41,    32,    33,    34,     7,   453,    37,     7,    88,     7,
       7,     7,    38,     7,    45,    10,    47,    10,     7,    89,
      51,    52,    53,    54,    38,    56,    57,    58,     7,    60,
       7,    62,    38,    64,    65,    21,    67,    68,    69,    70,
      21,    72,    89,     6,    75,     8,    77,    89,    79,    80,
      10,    82,    83,    41,    38,    86,     7,    20,     7,     7,
       7,    92,    93,    94,    89,    28,    29,    30,    38,    32,
      33,    34,    93,     7,    37,     7,    38,    86,    85,    48,
      88,    93,    45,    87,    47,    86,    10,    89,    51,    52,
      53,    54,     7,     7,    57,    58,    74,    60,    41,    62,
      17,    86,    89,    86,    67,    68,    69,    70,    10,    72,
      86,     6,    75,     8,    77,    89,    79,    80,    89,    82,
      83,    89,    89,    86,    89,    20,     7,    86,    89,    92,
      93,    94,    85,    28,    29,    30,    93,    32,    33,    34,
      12,    86,    37,    89,    27,    89,   387,   433,   331,   186,
      45,   460,    47,    88,    93,    -1,    51,    52,    53,    54,
     473,   103,    57,   155,    -1,    60,    -1,    62,    -1,    -1,
      -1,    -1,    67,    68,    69,    70,    -1,    72,    -1,     6,
      75,     8,    77,    -1,    79,    80,    -1,    82,    83,    -1,
      -1,    86,    -1,    -1,    -1,    -1,    -1,    92,    93,    94,
      -1,    28,    29,    30,    -1,    32,    33,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,
      47,    -1,    -1,    -1,    51,    52,    -1,    54,    -1,    -1,
      57,    -1,    -1,    60,    -1,    62,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    70,    -1,    72,    -1,    -1,    75,    -1,
      77,    -1,    79,    80,    -1,    82,    83,     5,     6,    86,
      -1,    -1,    -1,    -1,    -1,    92,    93,    94,    -1,     5,
       6,     6,    20,    -1,    -1,    -1,    -1,    -1,    26,    27,
      -1,    -1,    -1,    31,    20,    20,    -1,    35,    36,    37,
      26,    27,    -1,    -1,    42,    31,    -1,    -1,    -1,    35,
      36,    37,    37,    -1,    -1,    53,    42,    55,     6,    -1,
      45,    -1,    -1,    -1,    -1,    -1,    51,    53,    -1,    55,
      -1,    -1,    20,    -1,    -1,    60,    -1,    62,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    37,
      75,    -1,    90,    -1,    79,    93,    -1,    45,    83,    -1,
      86,    86,    -1,    51,    90,    -1,    -1,    93,    93,    94,
      -1,    -1,    60,    -1,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    -1,    -1,
      -1,    79,    -1,    -1,    -1,    83,    -1,    -1,    86,    -1,
      -1,    -1,    -1,    -1,    -1,    93,    94
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    63,    96,    98,    46,     0,   101,    17,    50,    99,
     103,    85,    17,    49,    81,   102,   105,    91,   100,    81,
      84,    93,    53,    56,    61,    68,   104,    10,    21,    93,
      21,    93,    53,    37,   100,     5,     6,    20,    26,    27,
      31,    35,    36,    37,    42,    53,    55,    86,    90,    93,
     140,   141,   142,   143,    15,   140,     6,    93,    39,    66,
      73,   131,   132,    37,   142,   140,    93,   145,   146,   131,
     140,     6,    93,    97,    93,   140,   144,   147,   148,    93,
       9,   140,    93,   106,   107,    37,    18,    18,    10,    38,
       7,    15,   114,    10,    88,    38,    38,   144,    10,    13,
      15,    10,    89,    10,    89,    13,   142,    15,    10,     7,
      97,    93,   129,   130,    97,   132,    53,   140,   146,   140,
       7,    97,   140,   140,   144,    93,   148,   140,   140,   107,
      12,   108,    38,    15,    10,    24,    87,    93,    12,   140,
      78,   109,     6,   140,   130,   130,     6,   140,   110,   111,
     140,    86,   107,    24,   107,    10,   103,     7,     7,   111,
      74,   108,   108,     6,     8,    20,    28,    29,    30,    32,
      33,    34,    37,    45,    47,    51,    52,    53,    54,    56,
      57,    58,    60,    62,    64,    65,    67,    68,    69,    70,
      72,    75,    77,    79,    80,    82,    83,    86,    92,    93,
      94,   123,   125,   128,   133,   134,   135,   136,   137,   109,
     109,   123,   135,    93,     6,     6,     6,     6,     6,     6,
     123,   124,     6,    93,     6,     6,    37,    37,    86,   125,
       6,     6,     6,    20,    37,    45,    51,    60,    62,    75,
      79,    83,    86,    93,    94,   117,   126,   127,   127,   128,
      37,     6,     6,     6,     6,    86,    37,    93,   121,   122,
     124,    89,    17,    16,     4,     9,    11,    18,    19,    22,
      24,    25,    41,    43,    71,     8,    14,    40,     6,    13,
      37,    86,    86,     7,    21,   116,   123,   123,   123,   123,
     123,   123,    10,    38,   123,     6,   123,   107,   140,    97,
     123,    76,   123,   123,   117,    93,   117,   118,     6,     6,
       6,     6,    93,   118,   119,   120,    21,    41,    43,    10,
      59,    59,    86,   131,   123,   123,   123,   123,   123,   140,
      21,    10,    89,    89,   123,   125,   133,   134,   134,   133,
     133,   133,   133,   133,   142,    41,   134,   135,   135,   135,
     124,    93,    94,   144,   103,   103,   123,    88,     7,     7,
       7,     7,     7,    10,   124,    10,   123,     7,     7,    38,
      38,    89,   125,     7,     7,     7,    10,    21,   115,    10,
      38,   117,   117,   117,   117,    21,    89,    10,    89,   123,
     140,    41,   127,   123,   123,   112,   113,   117,    38,     7,
       7,     7,     7,    89,    38,   123,    93,   122,   142,     7,
      38,    74,    74,   123,   123,     7,    86,   137,   123,    85,
      48,   117,   117,    88,   118,    10,     7,     7,     7,   117,
      93,   120,   140,    87,    89,    23,    86,    43,    44,    85,
     137,   123,   123,    10,     7,    74,    86,   125,     7,   117,
     113,   123,   123,    41,    86,    86,    89,    89,   123,   123,
       6,    74,   138,   139,     7,    89,   140,   117,   123,     7,
      89,   129,   117,    17,    89,    86,    23,    89,    10,    12,
     139,   117,   123,   117,   123,    23,    89,    10,   123,    93,
      89,     7,    85,    12,    86,   123,   123,    89
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    95,    96,    97,    97,    97,    98,    99,   100,   100,
     100,   101,   101,   102,   102,   102,   102,   102,   102,   103,
     103,   104,   105,   105,   106,   107,   107,   107,   108,   108,
     109,   109,   110,   111,   111,   112,   113,   113,   113,   114,
     114,   115,   115,   116,   116,   117,   117,   117,   117,   117,
     117,   117,   117,   117,   117,   117,   117,   117,   117,   117,
     117,   117,   118,   118,   118,   119,   120,   120,   121,   122,
     122,   123,   123,   123,   123,   123,   123,   124,   124,   124,
     125,   125,   125,   126,   127,   127,   128,   128,   128,   128,
     128,   128,   128,   129,   130,   130,   130,   131,   131,   131,
     132,   132,   133,   133,   133,   133,   133,   133,   133,   133,
     133,   133,   133,   134,   134,   134,   134,   135,   135,   135,
     136,   136,   136,   136,   136,   136,   136,   136,   136,   136,
     136,   136,   136,   136,   136,   136,   136,   136,   136,   136,
     136,   136,   136,   136,   136,   136,   136,   136,   137,   137,
     137,   137,   137,   137,   137,   138,   138,   139,   139,   140,
     140,   140,   140,   140,   140,   141,   141,   142,   142,   142,
     142,   142,   143,   143,   143,   143,   143,   143,   143,   143,
     144,   144,   144,   145,   146,   146,   146,   147,   148,   148
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
       3,     3,     1,     3,     0,     1,     3,     1,     4,     6,
       1,     3,     3,     4,     8,     7,     4,     5,     3,     3,
       3,     3,     1,     3,     3,     3,     1,     4,     2,     1,
       4,     4,     3,     3,     3,     3,     6,     4,     4,     4,
       1,     4,    10,     8,    16,     4,     4,     4,     4,     4,
       4,     5,     8,     4,     8,     5,     5,     1,     1,     1,
       1,     1,     1,     1,     3,     4,     9,     2,     3,     4,
       1,     6,     4,     4,     1,     3,     1,     3,     3,     3,
       3,     1,     1,     1,     1,     1,     1,     2,     1,     3,
       0,     1,     3,     2,     0,     1,     3,     3,     1,     3
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
#line 516 "Syntax.y"
                                              { (yyval.program_) = make_AProgram((yyvsp[-2].languagedecl_), reverseListExtension((yyvsp[-1].listextension_)), reverseListDecl((yyvsp[0].listdecl_))); result->program_ = (yyval.program_); }
#line 2024 "Parser.c"
    break;

  case 3: /* ListStellaIdent: %empty  */
#line 518 "Syntax.y"
                              { (yyval.liststellaident_) = 0; result->liststellaident_ = (yyval.liststellaident_); }
#line 2030 "Parser.c"
    break;

  case 4: /* ListStellaIdent: T_StellaIdent  */
#line 519 "Syntax.y"
                  { (yyval.liststellaident_) = make_ListStellaIdent((yyvsp[0]._string), 0); result->liststellaident_ = (yyval.liststellaident_); }
#line 2036 "Parser.c"
    break;

  case 5: /* ListStellaIdent: T_StellaIdent _COMMA ListStellaIdent  */
#line 520 "Syntax.y"
                                         { (yyval.liststellaident_) = make_ListStellaIdent((yyvsp[-2]._string), (yyvsp[0].liststellaident_)); result->liststellaident_ = (yyval.liststellaident_); }
#line 2042 "Parser.c"
    break;

  case 6: /* LanguageDecl: _KW_language _KW_core _SEMI  */
#line 522 "Syntax.y"
                                           { (yyval.languagedecl_) = make_LanguageCore(); result->languagedecl_ = (yyval.languagedecl_); }
#line 2048 "Parser.c"
    break;

  case 7: /* Extension: _KW_extend _KW_with ListExtensionName  */
#line 524 "Syntax.y"
                                                  { (yyval.extension_) = make_AnExtension((yyvsp[0].listextensionname_)); result->extension_ = (yyval.extension_); }
#line 2054 "Parser.c"
    break;

  case 8: /* ListExtensionName: %empty  */
#line 526 "Syntax.y"
                                { (yyval.listextensionname_) = 0; result->listextensionname_ = (yyval.listextensionname_); }
#line 2060 "Parser.c"
    break;

  case 9: /* ListExtensionName: T_ExtensionName  */
#line 527 "Syntax.y"
                    { (yyval.listextensionname_) = make_ListExtensionName((yyvsp[0]._string), 0); result->listextensionname_ = (yyval.listextensionname_); }
#line 2066 "Parser.c"
    break;

  case 10: /* ListExtensionName: T_ExtensionName _COMMA ListExtensionName  */
#line 528 "Syntax.y"
                                             { (yyval.listextensionname_) = make_ListExtensionName((yyvsp[-2]._string), (yyvsp[0].listextensionname_)); result->listextensionname_ = (yyval.listextensionname_); }
#line 2072 "Parser.c"
    break;

  case 11: /* ListExtension: %empty  */
#line 530 "Syntax.y"
                            { (yyval.listextension_) = 0; result->listextension_ = (yyval.listextension_); }
#line 2078 "Parser.c"
    break;

  case 12: /* ListExtension: ListExtension Extension _SEMI  */
#line 531 "Syntax.y"
                                  { (yyval.listextension_) = make_ListExtension((yyvsp[-1].extension_), (yyvsp[-2].listextension_)); result->listextension_ = (yyval.listextension_); }
#line 2084 "Parser.c"
    break;

  case 13: /* Decl: ListAnnotation _KW_fn T_StellaIdent _LPAREN ListParamDecl _RPAREN ReturnType ThrowType _LBRACE ListDecl _KW_return Expr _RBRACE  */
#line 533 "Syntax.y"
                                                                                                                                       { (yyval.decl_) = make_DeclFun(reverseListAnnotation((yyvsp[-12].listannotation_)), (yyvsp[-10]._string), (yyvsp[-8].listparamdecl_), (yyvsp[-6].returntype_), (yyvsp[-5].throwtype_), reverseListDecl((yyvsp[-3].listdecl_)), (yyvsp[-1].expr_)); result->decl_ = (yyval.decl_); }
#line 2090 "Parser.c"
    break;

  case 14: /* Decl: ListAnnotation _KW_generic _KW_fn T_StellaIdent _LBRACK ListStellaIdent _RBRACK _LPAREN ListParamDecl _RPAREN ReturnType ThrowType _LBRACE ListDecl _KW_return Expr _RBRACE  */
#line 534 "Syntax.y"
                                                                                                                                                                                { (yyval.decl_) = make_DeclFunGeneric(reverseListAnnotation((yyvsp[-16].listannotation_)), (yyvsp[-13]._string), (yyvsp[-11].liststellaident_), (yyvsp[-8].listparamdecl_), (yyvsp[-6].returntype_), (yyvsp[-5].throwtype_), reverseListDecl((yyvsp[-3].listdecl_)), (yyvsp[-1].expr_)); result->decl_ = (yyval.decl_); }
#line 2096 "Parser.c"
    break;

  case 15: /* Decl: ListAnnotation _KW_mod _LBRACK ListModality _RBRACK _KW_fn T_StellaIdent _LPAREN ListParamDecl _RPAREN ReturnType ThrowType _LBRACE ListDecl _KW_return Expr _RBRACE  */
#line 535 "Syntax.y"
                                                                                                                                                                         { (yyval.decl_) = make_DeclFunMod(reverseListAnnotation((yyvsp[-16].listannotation_)), (yyvsp[-13].listmodality_), (yyvsp[-10]._string), (yyvsp[-8].listparamdecl_), (yyvsp[-6].returntype_), (yyvsp[-5].throwtype_), reverseListDecl((yyvsp[-3].listdecl_)), (yyvsp[-1].expr_)); result->decl_ = (yyval.decl_); }
#line 2102 "Parser.c"
    break;

  case 16: /* Decl: _KW_type T_StellaIdent _EQ Type  */
#line 536 "Syntax.y"
                                    { (yyval.decl_) = make_DeclTypeAlias((yyvsp[-2]._string), (yyvsp[0].type_)); result->decl_ = (yyval.decl_); }
#line 2108 "Parser.c"
    break;

  case 17: /* Decl: _KW_exception _KW_type _EQ Type  */
#line 537 "Syntax.y"
                                    { (yyval.decl_) = make_DeclExceptionType((yyvsp[0].type_)); result->decl_ = (yyval.decl_); }
#line 2114 "Parser.c"
    break;

  case 18: /* Decl: _KW_exception _KW_variant T_StellaIdent _COLON Type  */
#line 538 "Syntax.y"
                                                        { (yyval.decl_) = make_DeclExceptionVariant((yyvsp[-2]._string), (yyvsp[0].type_)); result->decl_ = (yyval.decl_); }
#line 2120 "Parser.c"
    break;

  case 19: /* ListDecl: %empty  */
#line 540 "Syntax.y"
                       { (yyval.listdecl_) = 0; result->listdecl_ = (yyval.listdecl_); }
#line 2126 "Parser.c"
    break;

  case 20: /* ListDecl: ListDecl Decl  */
#line 541 "Syntax.y"
                  { (yyval.listdecl_) = make_ListDecl((yyvsp[0].decl_), (yyvsp[-1].listdecl_)); result->listdecl_ = (yyval.listdecl_); }
#line 2132 "Parser.c"
    break;

  case 21: /* Annotation: _KW_inline  */
#line 548 "Syntax.y"
                        { (yyval.annotation_) = make_InlineAnnotation(); result->annotation_ = (yyval.annotation_); }
#line 2138 "Parser.c"
    break;

  case 22: /* ListAnnotation: %empty  */
#line 550 "Syntax.y"
                             { (yyval.listannotation_) = 0; result->listannotation_ = (yyval.listannotation_); }
#line 2144 "Parser.c"
    break;

  case 23: /* ListAnnotation: ListAnnotation Annotation  */
#line 551 "Syntax.y"
                              { (yyval.listannotation_) = make_ListAnnotation((yyvsp[0].annotation_), (yyvsp[-1].listannotation_)); result->listannotation_ = (yyval.listannotation_); }
#line 2150 "Parser.c"
    break;

  case 24: /* ParamDecl: T_StellaIdent _COLON Type  */
#line 553 "Syntax.y"
                                      { (yyval.paramdecl_) = make_AParamDecl((yyvsp[-2]._string), (yyvsp[0].type_)); result->paramdecl_ = (yyval.paramdecl_); }
#line 2156 "Parser.c"
    break;

  case 25: /* ListParamDecl: %empty  */
#line 555 "Syntax.y"
                            { (yyval.listparamdecl_) = 0; result->listparamdecl_ = (yyval.listparamdecl_); }
#line 2162 "Parser.c"
    break;

  case 26: /* ListParamDecl: ParamDecl  */
#line 556 "Syntax.y"
              { (yyval.listparamdecl_) = make_ListParamDecl((yyvsp[0].paramdecl_), 0); result->listparamdecl_ = (yyval.listparamdecl_); }
#line 2168 "Parser.c"
    break;

  case 27: /* ListParamDecl: ParamDecl _COMMA ListParamDecl  */
#line 557 "Syntax.y"
                                   { (yyval.listparamdecl_) = make_ListParamDecl((yyvsp[-2].paramdecl_), (yyvsp[0].listparamdecl_)); result->listparamdecl_ = (yyval.listparamdecl_); }
#line 2174 "Parser.c"
    break;

  case 28: /* ReturnType: %empty  */
#line 559 "Syntax.y"
                         { (yyval.returntype_) = make_NoReturnType(); result->returntype_ = (yyval.returntype_); }
#line 2180 "Parser.c"
    break;

  case 29: /* ReturnType: _RARROW Type  */
#line 560 "Syntax.y"
                 { (yyval.returntype_) = make_SomeReturnType((yyvsp[0].type_)); result->returntype_ = (yyval.returntype_); }
#line 2186 "Parser.c"
    break;

  case 30: /* ThrowType: %empty  */
#line 562 "Syntax.y"
                        { (yyval.throwtype_) = make_NoThrowType(); result->throwtype_ = (yyval.throwtype_); }
#line 2192 "Parser.c"
    break;

  case 31: /* ThrowType: _KW_throws ListType9  */
#line 563 "Syntax.y"
                         { (yyval.throwtype_) = make_SomeThrowType((yyvsp[0].listtype_)); result->throwtype_ = (yyval.throwtype_); }
#line 2198 "Parser.c"
    break;

  case 32: /* Type9: Type  */
#line 565 "Syntax.y"
             { (yyval.type_) = (yyvsp[0].type_); result->type_ = (yyval.type_); }
#line 2204 "Parser.c"
    break;

  case 33: /* ListType9: Type9  */
#line 567 "Syntax.y"
                  { (yyval.listtype_) = make_ListType((yyvsp[0].type_), 0); result->listtype_ = (yyval.listtype_); }
#line 2210 "Parser.c"
    break;

  case 34: /* ListType9: Type9 _COMMA ListType9  */
#line 568 "Syntax.y"
                           { (yyval.listtype_) = make_ListType((yyvsp[-2].type_), (yyvsp[0].listtype_)); result->listtype_ = (yyval.listtype_); }
#line 2216 "Parser.c"
    break;

  case 35: /* MatchCase: Pattern _RDARROW Expr  */
#line 570 "Syntax.y"
                                  { (yyval.matchcase_) = make_AMatchCase((yyvsp[-2].pattern_), (yyvsp[0].expr_)); result->matchcase_ = (yyval.matchcase_); }
#line 2222 "Parser.c"
    break;

  case 36: /* ListMatchCase: %empty  */
#line 572 "Syntax.y"
                            { (yyval.listmatchcase_) = 0; result->listmatchcase_ = (yyval.listmatchcase_); }
#line 2228 "Parser.c"
    break;

  case 37: /* ListMatchCase: MatchCase  */
#line 573 "Syntax.y"
              { (yyval.listmatchcase_) = make_ListMatchCase((yyvsp[0].matchcase_), 0); result->listmatchcase_ = (yyval.listmatchcase_); }
#line 2234 "Parser.c"
    break;

  case 38: /* ListMatchCase: MatchCase _BAR ListMatchCase  */
#line 574 "Syntax.y"
                                 { (yyval.listmatchcase_) = make_ListMatchCase((yyvsp[-2].matchcase_), (yyvsp[0].listmatchcase_)); result->listmatchcase_ = (yyval.listmatchcase_); }
#line 2240 "Parser.c"
    break;

  case 39: /* OptionalTyping: %empty  */
#line 576 "Syntax.y"
                             { (yyval.optionaltyping_) = make_NoTyping(); result->optionaltyping_ = (yyval.optionaltyping_); }
#line 2246 "Parser.c"
    break;

  case 40: /* OptionalTyping: _COLON Type  */
#line 577 "Syntax.y"
                { (yyval.optionaltyping_) = make_SomeTyping((yyvsp[0].type_)); result->optionaltyping_ = (yyval.optionaltyping_); }
#line 2252 "Parser.c"
    break;

  case 41: /* PatternData: %empty  */
#line 579 "Syntax.y"
                          { (yyval.patterndata_) = make_NoPatternData(); result->patterndata_ = (yyval.patterndata_); }
#line 2258 "Parser.c"
    break;

  case 42: /* PatternData: _EQ Pattern  */
#line 580 "Syntax.y"
                { (yyval.patterndata_) = make_SomePatternData((yyvsp[0].pattern_)); result->patterndata_ = (yyval.patterndata_); }
#line 2264 "Parser.c"
    break;

  case 43: /* ExprData: %empty  */
#line 582 "Syntax.y"
                       { (yyval.exprdata_) = make_NoExprData(); result->exprdata_ = (yyval.exprdata_); }
#line 2270 "Parser.c"
    break;

  case 44: /* ExprData: _EQ Expr  */
#line 583 "Syntax.y"
             { (yyval.exprdata_) = make_SomeExprData((yyvsp[0].expr_)); result->exprdata_ = (yyval.exprdata_); }
#line 2276 "Parser.c"
    break;

  case 45: /* Pattern: Pattern _KW_cast _KW_as Type  */
#line 585 "Syntax.y"
                                       { (yyval.pattern_) = make_PatternCastAs((yyvsp[-3].pattern_), (yyvsp[0].type_)); result->pattern_ = (yyval.pattern_); }
#line 2282 "Parser.c"
    break;

  case 46: /* Pattern: Pattern _KW_as Type  */
#line 586 "Syntax.y"
                        { (yyval.pattern_) = make_PatternAsc((yyvsp[-2].pattern_), (yyvsp[0].type_)); result->pattern_ = (yyval.pattern_); }
#line 2288 "Parser.c"
    break;

  case 47: /* Pattern: _SYMB_13 T_StellaIdent PatternData _SYMB_14  */
#line 587 "Syntax.y"
                                                { (yyval.pattern_) = make_PatternVariant((yyvsp[-2]._string), (yyvsp[-1].patterndata_)); result->pattern_ = (yyval.pattern_); }
#line 2294 "Parser.c"
    break;

  case 48: /* Pattern: _KW_inl _LPAREN Pattern _RPAREN  */
#line 588 "Syntax.y"
                                    { (yyval.pattern_) = make_PatternInl((yyvsp[-1].pattern_)); result->pattern_ = (yyval.pattern_); }
#line 2300 "Parser.c"
    break;

  case 49: /* Pattern: _KW_inr _LPAREN Pattern _RPAREN  */
#line 589 "Syntax.y"
                                    { (yyval.pattern_) = make_PatternInr((yyvsp[-1].pattern_)); result->pattern_ = (yyval.pattern_); }
#line 2306 "Parser.c"
    break;

  case 50: /* Pattern: _LBRACE ListPattern _RBRACE  */
#line 590 "Syntax.y"
                                { (yyval.pattern_) = make_PatternTuple((yyvsp[-1].listpattern_)); result->pattern_ = (yyval.pattern_); }
#line 2312 "Parser.c"
    break;

  case 51: /* Pattern: _LBRACE ListLabelledPattern _RBRACE  */
#line 591 "Syntax.y"
                                        { (yyval.pattern_) = make_PatternRecord((yyvsp[-1].listlabelledpattern_)); result->pattern_ = (yyval.pattern_); }
#line 2318 "Parser.c"
    break;

  case 52: /* Pattern: _LBRACK ListPattern _RBRACK  */
#line 592 "Syntax.y"
                                { (yyval.pattern_) = make_PatternList((yyvsp[-1].listpattern_)); result->pattern_ = (yyval.pattern_); }
#line 2324 "Parser.c"
    break;

  case 53: /* Pattern: _KW_cons _LPAREN Pattern _COMMA Pattern _RPAREN  */
#line 593 "Syntax.y"
                                                    { (yyval.pattern_) = make_PatternCons((yyvsp[-3].pattern_), (yyvsp[-1].pattern_)); result->pattern_ = (yyval.pattern_); }
#line 2330 "Parser.c"
    break;

  case 54: /* Pattern: _LPAREN Pattern _COMMA Pattern _RPAREN  */
#line 594 "Syntax.y"
                                           { (yyval.pattern_) = make_patternCons((yyvsp[-3].pattern_), (yyvsp[-1].pattern_)); result->pattern_ = (yyval.pattern_); }
#line 2336 "Parser.c"
    break;

  case 55: /* Pattern: _KW_false  */
#line 595 "Syntax.y"
              { (yyval.pattern_) = make_PatternFalse(); result->pattern_ = (yyval.pattern_); }
#line 2342 "Parser.c"
    break;

  case 56: /* Pattern: _KW_true  */
#line 596 "Syntax.y"
             { (yyval.pattern_) = make_PatternTrue(); result->pattern_ = (yyval.pattern_); }
#line 2348 "Parser.c"
    break;

  case 57: /* Pattern: _KW_unit  */
#line 597 "Syntax.y"
             { (yyval.pattern_) = make_PatternUnit(); result->pattern_ = (yyval.pattern_); }
#line 2354 "Parser.c"
    break;

  case 58: /* Pattern: _INTEGER_  */
#line 598 "Syntax.y"
              { (yyval.pattern_) = make_PatternInt((yyvsp[0]._int)); result->pattern_ = (yyval.pattern_); }
#line 2360 "Parser.c"
    break;

  case 59: /* Pattern: _KW_succ _LPAREN Pattern _RPAREN  */
#line 599 "Syntax.y"
                                     { (yyval.pattern_) = make_PatternSucc((yyvsp[-1].pattern_)); result->pattern_ = (yyval.pattern_); }
#line 2366 "Parser.c"
    break;

  case 60: /* Pattern: T_StellaIdent  */
#line 600 "Syntax.y"
                  { (yyval.pattern_) = make_PatternVar((yyvsp[0]._string)); result->pattern_ = (yyval.pattern_); }
#line 2372 "Parser.c"
    break;

  case 61: /* Pattern: _LPAREN Pattern _RPAREN  */
#line 601 "Syntax.y"
                            { (yyval.pattern_) = (yyvsp[-1].pattern_); result->pattern_ = (yyval.pattern_); }
#line 2378 "Parser.c"
    break;

  case 62: /* ListPattern: %empty  */
#line 603 "Syntax.y"
                          { (yyval.listpattern_) = 0; result->listpattern_ = (yyval.listpattern_); }
#line 2384 "Parser.c"
    break;

  case 63: /* ListPattern: Pattern  */
#line 604 "Syntax.y"
            { (yyval.listpattern_) = make_ListPattern((yyvsp[0].pattern_), 0); result->listpattern_ = (yyval.listpattern_); }
#line 2390 "Parser.c"
    break;

  case 64: /* ListPattern: Pattern _COMMA ListPattern  */
#line 605 "Syntax.y"
                               { (yyval.listpattern_) = make_ListPattern((yyvsp[-2].pattern_), (yyvsp[0].listpattern_)); result->listpattern_ = (yyval.listpattern_); }
#line 2396 "Parser.c"
    break;

  case 65: /* LabelledPattern: T_StellaIdent _EQ Pattern  */
#line 607 "Syntax.y"
                                            { (yyval.labelledpattern_) = make_ALabelledPattern((yyvsp[-2]._string), (yyvsp[0].pattern_)); result->labelledpattern_ = (yyval.labelledpattern_); }
#line 2402 "Parser.c"
    break;

  case 66: /* ListLabelledPattern: LabelledPattern  */
#line 609 "Syntax.y"
                                      { (yyval.listlabelledpattern_) = make_ListLabelledPattern((yyvsp[0].labelledpattern_), 0); result->listlabelledpattern_ = (yyval.listlabelledpattern_); }
#line 2408 "Parser.c"
    break;

  case 67: /* ListLabelledPattern: LabelledPattern _COMMA ListLabelledPattern  */
#line 610 "Syntax.y"
                                               { (yyval.listlabelledpattern_) = make_ListLabelledPattern((yyvsp[-2].labelledpattern_), (yyvsp[0].listlabelledpattern_)); result->listlabelledpattern_ = (yyval.listlabelledpattern_); }
#line 2414 "Parser.c"
    break;

  case 68: /* Binding: T_StellaIdent _EQ Expr  */
#line 612 "Syntax.y"
                                 { (yyval.binding_) = make_ABinding((yyvsp[-2]._string), (yyvsp[0].expr_)); result->binding_ = (yyval.binding_); }
#line 2420 "Parser.c"
    break;

  case 69: /* ListBinding: Binding  */
#line 614 "Syntax.y"
                      { (yyval.listbinding_) = make_ListBinding((yyvsp[0].binding_), 0); result->listbinding_ = (yyval.listbinding_); }
#line 2426 "Parser.c"
    break;

  case 70: /* ListBinding: Binding _COMMA ListBinding  */
#line 615 "Syntax.y"
                               { (yyval.listbinding_) = make_ListBinding((yyvsp[-2].binding_), (yyvsp[0].listbinding_)); result->listbinding_ = (yyval.listbinding_); }
#line 2432 "Parser.c"
    break;

  case 71: /* Expr: Expr1 _SEMI Expr  */
#line 617 "Syntax.y"
                        { (yyval.expr_) = make_Sequence((yyvsp[-2].expr_), (yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 2438 "Parser.c"
    break;

  case 72: /* Expr: Expr1 _SEMI  */
#line 618 "Syntax.y"
                { (yyval.expr_) = (yyvsp[-1].expr_); result->expr_ = (yyval.expr_); }
#line 2444 "Parser.c"
    break;

  case 73: /* Expr: _KW_let ListPatternBinding _KW_in Expr  */
#line 619 "Syntax.y"
                                           { (yyval.expr_) = make_Let((yyvsp[-2].listpatternbinding_), (yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 2450 "Parser.c"
    break;

  case 74: /* Expr: _KW_letrec ListPatternBinding _KW_in Expr  */
#line 620 "Syntax.y"
                                              { (yyval.expr_) = make_LetRec((yyvsp[-2].listpatternbinding_), (yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 2456 "Parser.c"
    break;

  case 75: /* Expr: _KW_generic _LBRACK ListStellaIdent _RBRACK Expr  */
#line 621 "Syntax.y"
                                                     { (yyval.expr_) = make_TypeAbstraction((yyvsp[-2].liststellaident_), (yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 2462 "Parser.c"
    break;

  case 76: /* Expr: Expr1  */
#line 622 "Syntax.y"
          { (yyval.expr_) = (yyvsp[0].expr_); result->expr_ = (yyval.expr_); }
#line 2468 "Parser.c"
    break;

  case 77: /* ListExpr: %empty  */
#line 624 "Syntax.y"
                       { (yyval.listexpr_) = 0; result->listexpr_ = (yyval.listexpr_); }
#line 2474 "Parser.c"
    break;

  case 78: /* ListExpr: Expr  */
#line 625 "Syntax.y"
         { (yyval.listexpr_) = make_ListExpr((yyvsp[0].expr_), 0); result->listexpr_ = (yyval.listexpr_); }
#line 2480 "Parser.c"
    break;

  case 79: /* ListExpr: Expr _COMMA ListExpr  */
#line 626 "Syntax.y"
                         { (yyval.listexpr_) = make_ListExpr((yyvsp[-2].expr_), (yyvsp[0].listexpr_)); result->listexpr_ = (yyval.listexpr_); }
#line 2486 "Parser.c"
    break;

  case 80: /* Expr1: Expr2 _COLONEQ Expr1  */
#line 628 "Syntax.y"
                             { (yyval.expr_) = make_Assign((yyvsp[-2].expr_), (yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 2492 "Parser.c"
    break;

  case 81: /* Expr1: _KW_if Expr1 _KW_then Expr1 _KW_else Expr1  */
#line 629 "Syntax.y"
                                               { (yyval.expr_) = make_If((yyvsp[-4].expr_), (yyvsp[-2].expr_), (yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 2498 "Parser.c"
    break;

  case 82: /* Expr1: Expr2  */
#line 630 "Syntax.y"
          { (yyval.expr_) = (yyvsp[0].expr_); result->expr_ = (yyval.expr_); }
#line 2504 "Parser.c"
    break;

  case 83: /* PatternBinding: Pattern _EQ Expr  */
#line 632 "Syntax.y"
                                  { (yyval.patternbinding_) = make_APatternBinding((yyvsp[-2].pattern_), (yyvsp[0].expr_)); result->patternbinding_ = (yyval.patternbinding_); }
#line 2510 "Parser.c"
    break;

  case 84: /* ListPatternBinding: PatternBinding  */
#line 634 "Syntax.y"
                                    { (yyval.listpatternbinding_) = make_ListPatternBinding((yyvsp[0].patternbinding_), 0); result->listpatternbinding_ = (yyval.listpatternbinding_); }
#line 2516 "Parser.c"
    break;

  case 85: /* ListPatternBinding: PatternBinding _COMMA ListPatternBinding  */
#line 635 "Syntax.y"
                                             { (yyval.listpatternbinding_) = make_ListPatternBinding((yyvsp[-2].patternbinding_), (yyvsp[0].listpatternbinding_)); result->listpatternbinding_ = (yyval.listpatternbinding_); }
#line 2522 "Parser.c"
    break;

  case 86: /* Expr2: Expr3 _LT Expr3  */
#line 637 "Syntax.y"
                        { (yyval.expr_) = make_LessThan((yyvsp[-2].expr_), (yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 2528 "Parser.c"
    break;

  case 87: /* Expr2: Expr3 _LDARROW Expr3  */
#line 638 "Syntax.y"
                         { (yyval.expr_) = make_LessThanOrEqual((yyvsp[-2].expr_), (yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 2534 "Parser.c"
    break;

  case 88: /* Expr2: Expr3 _GT Expr3  */
#line 639 "Syntax.y"
                    { (yyval.expr_) = make_GreaterThan((yyvsp[-2].expr_), (yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 2540 "Parser.c"
    break;

  case 89: /* Expr2: Expr3 _GTEQ Expr3  */
#line 640 "Syntax.y"
                      { (yyval.expr_) = make_GreaterThanOrEqual((yyvsp[-2].expr_), (yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 2546 "Parser.c"
    break;

  case 90: /* Expr2: Expr3 _DEQ Expr3  */
#line 641 "Syntax.y"
                     { (yyval.expr_) = make_Equal((yyvsp[-2].expr_), (yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 2552 "Parser.c"
    break;

  case 91: /* Expr2: Expr3 _BANGEQ Expr3  */
#line 642 "Syntax.y"
                        { (yyval.expr_) = make_NotEqual((yyvsp[-2].expr_), (yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 2558 "Parser.c"
    break;

  case 92: /* Expr2: Expr3  */
#line 643 "Syntax.y"
          { (yyval.expr_) = (yyvsp[0].expr_); result->expr_ = (yyval.expr_); }
#line 2564 "Parser.c"
    break;

  case 93: /* LabelledEffect: T_StellaIdent _COLON Type  */
#line 648 "Syntax.y"
                                           { (yyval.labelledeffect_) = make_ALabelledEffect((yyvsp[-2]._string), (yyvsp[0].type_)); result->labelledeffect_ = (yyval.labelledeffect_); }
#line 2570 "Parser.c"
    break;

  case 94: /* ListLabelledEffect: %empty  */
#line 650 "Syntax.y"
                                 { (yyval.listlabelledeffect_) = 0; result->listlabelledeffect_ = (yyval.listlabelledeffect_); }
#line 2576 "Parser.c"
    break;

  case 95: /* ListLabelledEffect: LabelledEffect  */
#line 651 "Syntax.y"
                   { (yyval.listlabelledeffect_) = make_ListLabelledEffect((yyvsp[0].labelledeffect_), 0); result->listlabelledeffect_ = (yyval.listlabelledeffect_); }
#line 2582 "Parser.c"
    break;

  case 96: /* ListLabelledEffect: LabelledEffect _COMMA ListLabelledEffect  */
#line 652 "Syntax.y"
                                             { (yyval.listlabelledeffect_) = make_ListLabelledEffect((yyvsp[-2].labelledeffect_), (yyvsp[0].listlabelledeffect_)); result->listlabelledeffect_ = (yyval.listlabelledeffect_); }
#line 2588 "Parser.c"
    break;

  case 97: /* Modality: _KW_lock  */
#line 654 "Syntax.y"
                    { (yyval.modality_) = make_ModalityLock(); result->modality_ = (yyval.modality_); }
#line 2594 "Parser.c"
    break;

  case 98: /* Modality: _KW_abs _LT ListLabelledEffect _GT  */
#line 655 "Syntax.y"
                                       { (yyval.modality_) = make_ModalityAbs((yyvsp[-1].listlabelledeffect_)); result->modality_ = (yyval.modality_); }
#line 2600 "Parser.c"
    break;

  case 99: /* Modality: _KW_rel _LT ListStellaIdent _BAR ListLabelledEffect _GT  */
#line 656 "Syntax.y"
                                                            { (yyval.modality_) = make_ModalityRel((yyvsp[-3].liststellaident_), (yyvsp[-1].listlabelledeffect_)); result->modality_ = (yyval.modality_); }
#line 2606 "Parser.c"
    break;

  case 100: /* ListModality: Modality  */
#line 658 "Syntax.y"
                        { (yyval.listmodality_) = make_ListModality((yyvsp[0].modality_), 0); result->listmodality_ = (yyval.listmodality_); }
#line 2612 "Parser.c"
    break;

  case 101: /* ListModality: Modality _COMMA ListModality  */
#line 659 "Syntax.y"
                                 { (yyval.listmodality_) = make_ListModality((yyvsp[-2].modality_), (yyvsp[0].listmodality_)); result->listmodality_ = (yyval.listmodality_); }
#line 2618 "Parser.c"
    break;

  case 102: /* Expr3: Expr3 _KW_as Type2  */
#line 661 "Syntax.y"
                           { (yyval.expr_) = make_TypeAsc((yyvsp[-2].expr_), (yyvsp[0].type_)); result->expr_ = (yyval.expr_); }
#line 2624 "Parser.c"
    break;

  case 103: /* Expr3: Expr3 _KW_cast _KW_as Type2  */
#line 662 "Syntax.y"
                                { (yyval.expr_) = make_TypeCast((yyvsp[-3].expr_), (yyvsp[0].type_)); result->expr_ = (yyval.expr_); }
#line 2630 "Parser.c"
    break;

  case 104: /* Expr3: _KW_fn _LPAREN ListParamDecl _RPAREN _LBRACE _KW_return Expr _RBRACE  */
#line 663 "Syntax.y"
                                                                         { (yyval.expr_) = make_Abstraction((yyvsp[-5].listparamdecl_), (yyvsp[-1].expr_)); result->expr_ = (yyval.expr_); }
#line 2636 "Parser.c"
    break;

  case 105: /* Expr3: _KW_mod _LBRACK Modality _RBRACK _LBRACE Expr _RBRACE  */
#line 664 "Syntax.y"
                                                          { (yyval.expr_) = make_ModBox((yyvsp[-4].modality_), (yyvsp[-1].expr_)); result->expr_ = (yyval.expr_); }
#line 2642 "Parser.c"
    break;

  case 106: /* Expr3: _SYMB_13 T_StellaIdent ExprData _SYMB_14  */
#line 665 "Syntax.y"
                                             { (yyval.expr_) = make_Variant((yyvsp[-2]._string), (yyvsp[-1].exprdata_)); result->expr_ = (yyval.expr_); }
#line 2648 "Parser.c"
    break;

  case 107: /* Expr3: _KW_match Expr2 _LBRACE ListMatchCase _RBRACE  */
#line 666 "Syntax.y"
                                                  { (yyval.expr_) = make_Match((yyvsp[-3].expr_), (yyvsp[-1].listmatchcase_)); result->expr_ = (yyval.expr_); }
#line 2654 "Parser.c"
    break;

  case 108: /* Expr3: _LBRACK ListExpr _RBRACK  */
#line 667 "Syntax.y"
                             { (yyval.expr_) = make_List((yyvsp[-1].listexpr_)); result->expr_ = (yyval.expr_); }
#line 2660 "Parser.c"
    break;

  case 109: /* Expr3: Expr3 _PLUS Expr4  */
#line 668 "Syntax.y"
                      { (yyval.expr_) = make_Add((yyvsp[-2].expr_), (yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 2666 "Parser.c"
    break;

  case 110: /* Expr3: Expr3 _MINUS Expr4  */
#line 669 "Syntax.y"
                       { (yyval.expr_) = make_Subtract((yyvsp[-2].expr_), (yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 2672 "Parser.c"
    break;

  case 111: /* Expr3: Expr3 _KW_or Expr4  */
#line 670 "Syntax.y"
                       { (yyval.expr_) = make_LogicOr((yyvsp[-2].expr_), (yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 2678 "Parser.c"
    break;

  case 112: /* Expr3: Expr4  */
#line 671 "Syntax.y"
          { (yyval.expr_) = (yyvsp[0].expr_); result->expr_ = (yyval.expr_); }
#line 2684 "Parser.c"
    break;

  case 113: /* Expr4: Expr4 _STAR Expr5  */
#line 673 "Syntax.y"
                          { (yyval.expr_) = make_Multiply((yyvsp[-2].expr_), (yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 2690 "Parser.c"
    break;

  case 114: /* Expr4: Expr4 _SLASH Expr5  */
#line 674 "Syntax.y"
                       { (yyval.expr_) = make_Divide((yyvsp[-2].expr_), (yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 2696 "Parser.c"
    break;

  case 115: /* Expr4: Expr4 _KW_and Expr5  */
#line 675 "Syntax.y"
                        { (yyval.expr_) = make_LogicAnd((yyvsp[-2].expr_), (yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 2702 "Parser.c"
    break;

  case 116: /* Expr4: Expr5  */
#line 676 "Syntax.y"
          { (yyval.expr_) = (yyvsp[0].expr_); result->expr_ = (yyval.expr_); }
#line 2708 "Parser.c"
    break;

  case 117: /* Expr5: _KW_new _LPAREN Expr _RPAREN  */
#line 678 "Syntax.y"
                                     { (yyval.expr_) = make_Ref((yyvsp[-1].expr_)); result->expr_ = (yyval.expr_); }
#line 2714 "Parser.c"
    break;

  case 118: /* Expr5: _STAR Expr5  */
#line 679 "Syntax.y"
                { (yyval.expr_) = make_Deref((yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 2720 "Parser.c"
    break;

  case 119: /* Expr5: Expr6  */
#line 680 "Syntax.y"
          { (yyval.expr_) = (yyvsp[0].expr_); result->expr_ = (yyval.expr_); }
#line 2726 "Parser.c"
    break;

  case 120: /* Expr6: Expr6 _LPAREN ListExpr _RPAREN  */
#line 682 "Syntax.y"
                                       { (yyval.expr_) = make_Application((yyvsp[-3].expr_), (yyvsp[-1].listexpr_)); result->expr_ = (yyval.expr_); }
#line 2732 "Parser.c"
    break;

  case 121: /* Expr6: Expr6 _LBRACK ListType _RBRACK  */
#line 683 "Syntax.y"
                                   { (yyval.expr_) = make_TypeApplication((yyvsp[-3].expr_), (yyvsp[-1].listtype_)); result->expr_ = (yyval.expr_); }
#line 2738 "Parser.c"
    break;

  case 122: /* Expr6: Expr6 _DOT T_StellaIdent  */
#line 684 "Syntax.y"
                             { (yyval.expr_) = make_DotRecord((yyvsp[-2].expr_), (yyvsp[0]._string)); result->expr_ = (yyval.expr_); }
#line 2744 "Parser.c"
    break;

  case 123: /* Expr6: Expr6 _DOT _INTEGER_  */
#line 685 "Syntax.y"
                         { (yyval.expr_) = make_DotTuple((yyvsp[-2].expr_), (yyvsp[0]._int)); result->expr_ = (yyval.expr_); }
#line 2750 "Parser.c"
    break;

  case 124: /* Expr6: _LBRACE ListExpr _RBRACE  */
#line 686 "Syntax.y"
                             { (yyval.expr_) = make_Tuple((yyvsp[-1].listexpr_)); result->expr_ = (yyval.expr_); }
#line 2756 "Parser.c"
    break;

  case 125: /* Expr6: _LBRACE ListBinding _RBRACE  */
#line 687 "Syntax.y"
                                { (yyval.expr_) = make_Record((yyvsp[-1].listbinding_)); result->expr_ = (yyval.expr_); }
#line 2762 "Parser.c"
    break;

  case 126: /* Expr6: _KW_cons _LPAREN Expr _COMMA Expr _RPAREN  */
#line 688 "Syntax.y"
                                              { (yyval.expr_) = make_ConsList((yyvsp[-3].expr_), (yyvsp[-1].expr_)); result->expr_ = (yyval.expr_); }
#line 2768 "Parser.c"
    break;

  case 127: /* Expr6: _SYMB_27 _LPAREN Expr _RPAREN  */
#line 689 "Syntax.y"
                                  { (yyval.expr_) = make_Head((yyvsp[-1].expr_)); result->expr_ = (yyval.expr_); }
#line 2774 "Parser.c"
    break;

  case 128: /* Expr6: _SYMB_28 _LPAREN Expr _RPAREN  */
#line 690 "Syntax.y"
                                  { (yyval.expr_) = make_IsEmpty((yyvsp[-1].expr_)); result->expr_ = (yyval.expr_); }
#line 2780 "Parser.c"
    break;

  case 129: /* Expr6: _SYMB_29 _LPAREN Expr _RPAREN  */
#line 691 "Syntax.y"
                                  { (yyval.expr_) = make_Tail((yyvsp[-1].expr_)); result->expr_ = (yyval.expr_); }
#line 2786 "Parser.c"
    break;

  case 130: /* Expr6: _SYMB_30  */
#line 692 "Syntax.y"
             { (yyval.expr_) = make_Panic(); result->expr_ = (yyval.expr_); }
#line 2792 "Parser.c"
    break;

  case 131: /* Expr6: _KW_throw _LPAREN Expr _RPAREN  */
#line 693 "Syntax.y"
                                   { (yyval.expr_) = make_Throw((yyvsp[-1].expr_)); result->expr_ = (yyval.expr_); }
#line 2798 "Parser.c"
    break;

  case 132: /* Expr6: _KW_try _LBRACE Expr _RBRACE _KW_catch _LBRACE Pattern _RDARROW Expr _RBRACE  */
#line 694 "Syntax.y"
                                                                                 { (yyval.expr_) = make_TryCatch((yyvsp[-7].expr_), (yyvsp[-3].pattern_), (yyvsp[-1].expr_)); result->expr_ = (yyval.expr_); }
#line 2804 "Parser.c"
    break;

  case 133: /* Expr6: _KW_try _LBRACE Expr _RBRACE _KW_with _LBRACE Expr _RBRACE  */
#line 695 "Syntax.y"
                                                               { (yyval.expr_) = make_TryWith((yyvsp[-5].expr_), (yyvsp[-1].expr_)); result->expr_ = (yyval.expr_); }
#line 2810 "Parser.c"
    break;

  case 134: /* Expr6: _KW_try _LBRACE Expr _RBRACE _KW_cast _KW_as Type _LBRACE Pattern _RDARROW Expr _RBRACE _KW_with _LBRACE Expr _RBRACE  */
#line 696 "Syntax.y"
                                                                                                                          { (yyval.expr_) = make_TryCastAs((yyvsp[-13].expr_), (yyvsp[-9].type_), (yyvsp[-7].pattern_), (yyvsp[-5].expr_), (yyvsp[-1].expr_)); result->expr_ = (yyval.expr_); }
#line 2816 "Parser.c"
    break;

  case 135: /* Expr6: _KW_inl _LPAREN Expr _RPAREN  */
#line 697 "Syntax.y"
                                 { (yyval.expr_) = make_Inl((yyvsp[-1].expr_)); result->expr_ = (yyval.expr_); }
#line 2822 "Parser.c"
    break;

  case 136: /* Expr6: _KW_inr _LPAREN Expr _RPAREN  */
#line 698 "Syntax.y"
                                 { (yyval.expr_) = make_Inr((yyvsp[-1].expr_)); result->expr_ = (yyval.expr_); }
#line 2828 "Parser.c"
    break;

  case 137: /* Expr6: _KW_succ _LPAREN Expr _RPAREN  */
#line 699 "Syntax.y"
                                  { (yyval.expr_) = make_Succ((yyvsp[-1].expr_)); result->expr_ = (yyval.expr_); }
#line 2834 "Parser.c"
    break;

  case 138: /* Expr6: _KW_not _LPAREN Expr _RPAREN  */
#line 700 "Syntax.y"
                                 { (yyval.expr_) = make_LogicNot((yyvsp[-1].expr_)); result->expr_ = (yyval.expr_); }
#line 2840 "Parser.c"
    break;

  case 139: /* Expr6: _SYMB_31 _LPAREN Expr _RPAREN  */
#line 701 "Syntax.y"
                                  { (yyval.expr_) = make_Pred((yyvsp[-1].expr_)); result->expr_ = (yyval.expr_); }
#line 2846 "Parser.c"
    break;

  case 140: /* Expr6: _SYMB_32 _LPAREN Expr _RPAREN  */
#line 702 "Syntax.y"
                                  { (yyval.expr_) = make_IsZero((yyvsp[-1].expr_)); result->expr_ = (yyval.expr_); }
#line 2852 "Parser.c"
    break;

  case 141: /* Expr6: _KW_do T_StellaIdent _LPAREN Expr _RPAREN  */
#line 703 "Syntax.y"
                                              { (yyval.expr_) = make_ModDo((yyvsp[-3]._string), (yyvsp[-1].expr_)); result->expr_ = (yyval.expr_); }
#line 2858 "Parser.c"
    break;

  case 142: /* Expr6: _KW_handle _LBRACE Expr _RBRACE _KW_with _LBRACE ListHandler _RBRACE  */
#line 704 "Syntax.y"
                                                                         { (yyval.expr_) = make_ModHandle((yyvsp[-5].expr_), (yyvsp[-1].listhandler_)); result->expr_ = (yyval.expr_); }
#line 2864 "Parser.c"
    break;

  case 143: /* Expr6: _KW_fix _LPAREN Expr _RPAREN  */
#line 705 "Syntax.y"
                                 { (yyval.expr_) = make_Fix((yyvsp[-1].expr_)); result->expr_ = (yyval.expr_); }
#line 2870 "Parser.c"
    break;

  case 144: /* Expr6: _SYMB_33 _LPAREN Expr _COMMA Expr _COMMA Expr _RPAREN  */
#line 706 "Syntax.y"
                                                          { (yyval.expr_) = make_NatRec((yyvsp[-5].expr_), (yyvsp[-3].expr_), (yyvsp[-1].expr_)); result->expr_ = (yyval.expr_); }
#line 2876 "Parser.c"
    break;

  case 145: /* Expr6: _KW_fold _LBRACK Type _RBRACK Expr7  */
#line 707 "Syntax.y"
                                        { (yyval.expr_) = make_Fold((yyvsp[-2].type_), (yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 2882 "Parser.c"
    break;

  case 146: /* Expr6: _KW_unfold _LBRACK Type _RBRACK Expr7  */
#line 708 "Syntax.y"
                                          { (yyval.expr_) = make_Unfold((yyvsp[-2].type_), (yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 2888 "Parser.c"
    break;

  case 147: /* Expr6: Expr7  */
#line 709 "Syntax.y"
          { (yyval.expr_) = (yyvsp[0].expr_); result->expr_ = (yyval.expr_); }
#line 2894 "Parser.c"
    break;

  case 148: /* Expr7: _KW_true  */
#line 711 "Syntax.y"
                 { (yyval.expr_) = make_ConstTrue(); result->expr_ = (yyval.expr_); }
#line 2900 "Parser.c"
    break;

  case 149: /* Expr7: _KW_false  */
#line 712 "Syntax.y"
              { (yyval.expr_) = make_ConstFalse(); result->expr_ = (yyval.expr_); }
#line 2906 "Parser.c"
    break;

  case 150: /* Expr7: _KW_unit  */
#line 713 "Syntax.y"
             { (yyval.expr_) = make_ConstUnit(); result->expr_ = (yyval.expr_); }
#line 2912 "Parser.c"
    break;

  case 151: /* Expr7: _INTEGER_  */
#line 714 "Syntax.y"
              { (yyval.expr_) = make_ConstInt((yyvsp[0]._int)); result->expr_ = (yyval.expr_); }
#line 2918 "Parser.c"
    break;

  case 152: /* Expr7: T_MemoryAddress  */
#line 715 "Syntax.y"
                    { (yyval.expr_) = make_ConstMemory((yyvsp[0]._string)); result->expr_ = (yyval.expr_); }
#line 2924 "Parser.c"
    break;

  case 153: /* Expr7: T_StellaIdent  */
#line 716 "Syntax.y"
                  { (yyval.expr_) = make_Var((yyvsp[0]._string)); result->expr_ = (yyval.expr_); }
#line 2930 "Parser.c"
    break;

  case 154: /* Expr7: _LPAREN Expr _RPAREN  */
#line 717 "Syntax.y"
                         { (yyval.expr_) = (yyvsp[-1].expr_); result->expr_ = (yyval.expr_); }
#line 2936 "Parser.c"
    break;

  case 155: /* Handler: _KW_return Pattern _RARROW Expr  */
#line 719 "Syntax.y"
                                          { (yyval.handler_) = make_HandlerReturn((yyvsp[-2].pattern_), (yyvsp[0].expr_)); result->handler_ = (yyval.handler_); }
#line 2942 "Parser.c"
    break;

  case 156: /* Handler: _LPAREN LabelledEffect _COMMA Pattern _COMMA T_StellaIdent _RPAREN _RARROW Expr  */
#line 720 "Syntax.y"
                                                                                    { (yyval.handler_) = make_HandlerLabel((yyvsp[-7].labelledeffect_), (yyvsp[-5].pattern_), (yyvsp[-3]._string), (yyvsp[0].expr_)); result->handler_ = (yyval.handler_); }
#line 2948 "Parser.c"
    break;

  case 157: /* ListHandler: Handler _SEMI  */
#line 722 "Syntax.y"
                            { (yyval.listhandler_) = make_ListHandler((yyvsp[-1].handler_), 0); result->listhandler_ = (yyval.listhandler_); }
#line 2954 "Parser.c"
    break;

  case 158: /* ListHandler: Handler _SEMI ListHandler  */
#line 723 "Syntax.y"
                              { (yyval.listhandler_) = make_ListHandler((yyvsp[-2].handler_), (yyvsp[0].listhandler_)); result->listhandler_ = (yyval.listhandler_); }
#line 2960 "Parser.c"
    break;

  case 159: /* Type: _LBRACK Modality _RBRACK Type  */
#line 725 "Syntax.y"
                                     { (yyval.type_) = make_TypeMod((yyvsp[-2].modality_), (yyvsp[0].type_)); result->type_ = (yyval.type_); }
#line 2966 "Parser.c"
    break;

  case 160: /* Type: _KW_auto  */
#line 726 "Syntax.y"
             { (yyval.type_) = make_TypeAuto(); result->type_ = (yyval.type_); }
#line 2972 "Parser.c"
    break;

  case 161: /* Type: _KW_fn _LPAREN ListType _RPAREN _RARROW Type  */
#line 727 "Syntax.y"
                                                 { (yyval.type_) = make_TypeFun((yyvsp[-3].listtype_), (yyvsp[0].type_)); result->type_ = (yyval.type_); }
#line 2978 "Parser.c"
    break;

  case 162: /* Type: _KW_forall ListStellaIdent _DOT Type  */
#line 728 "Syntax.y"
                                         { (yyval.type_) = make_TypeForAll((yyvsp[-2].liststellaident_), (yyvsp[0].type_)); result->type_ = (yyval.type_); }
#line 2984 "Parser.c"
    break;

  case 163: /* Type: _KW_86 T_StellaIdent _DOT Type  */
#line 729 "Syntax.y"
                                   { (yyval.type_) = make_TypeRec((yyvsp[-2]._string), (yyvsp[0].type_)); result->type_ = (yyval.type_); }
#line 2990 "Parser.c"
    break;

  case 164: /* Type: Type1  */
#line 730 "Syntax.y"
          { (yyval.type_) = (yyvsp[0].type_); result->type_ = (yyval.type_); }
#line 2996 "Parser.c"
    break;

  case 165: /* Type1: Type2 _PLUS Type2  */
#line 732 "Syntax.y"
                          { (yyval.type_) = make_TypeSum((yyvsp[-2].type_), (yyvsp[0].type_)); result->type_ = (yyval.type_); }
#line 3002 "Parser.c"
    break;

  case 166: /* Type1: Type2  */
#line 733 "Syntax.y"
          { (yyval.type_) = (yyvsp[0].type_); result->type_ = (yyval.type_); }
#line 3008 "Parser.c"
    break;

  case 167: /* Type2: _LBRACE ListType _RBRACE  */
#line 735 "Syntax.y"
                                 { (yyval.type_) = make_TypeTuple((yyvsp[-1].listtype_)); result->type_ = (yyval.type_); }
#line 3014 "Parser.c"
    break;

  case 168: /* Type2: _LBRACE ListRecordFieldType _RBRACE  */
#line 736 "Syntax.y"
                                        { (yyval.type_) = make_TypeRecord((yyvsp[-1].listrecordfieldtype_)); result->type_ = (yyval.type_); }
#line 3020 "Parser.c"
    break;

  case 169: /* Type2: _SYMB_13 ListVariantFieldType _SYMB_14  */
#line 737 "Syntax.y"
                                           { (yyval.type_) = make_TypeVariant((yyvsp[-1].listvariantfieldtype_)); result->type_ = (yyval.type_); }
#line 3026 "Parser.c"
    break;

  case 170: /* Type2: _LBRACK Type _RBRACK  */
#line 738 "Syntax.y"
                         { (yyval.type_) = make_TypeList((yyvsp[-1].type_)); result->type_ = (yyval.type_); }
#line 3032 "Parser.c"
    break;

  case 171: /* Type2: Type3  */
#line 739 "Syntax.y"
          { (yyval.type_) = (yyvsp[0].type_); result->type_ = (yyval.type_); }
#line 3038 "Parser.c"
    break;

  case 172: /* Type3: _KW_Bool  */
#line 741 "Syntax.y"
                 { (yyval.type_) = make_TypeBool(); result->type_ = (yyval.type_); }
#line 3044 "Parser.c"
    break;

  case 173: /* Type3: _KW_Nat  */
#line 742 "Syntax.y"
            { (yyval.type_) = make_TypeNat(); result->type_ = (yyval.type_); }
#line 3050 "Parser.c"
    break;

  case 174: /* Type3: _KW_Unit  */
#line 743 "Syntax.y"
             { (yyval.type_) = make_TypeUnit(); result->type_ = (yyval.type_); }
#line 3056 "Parser.c"
    break;

  case 175: /* Type3: _KW_Top  */
#line 744 "Syntax.y"
            { (yyval.type_) = make_TypeTop(); result->type_ = (yyval.type_); }
#line 3062 "Parser.c"
    break;

  case 176: /* Type3: _KW_Bot  */
#line 745 "Syntax.y"
            { (yyval.type_) = make_TypeBottom(); result->type_ = (yyval.type_); }
#line 3068 "Parser.c"
    break;

  case 177: /* Type3: _AMP Type2  */
#line 746 "Syntax.y"
               { (yyval.type_) = make_TypeRef((yyvsp[0].type_)); result->type_ = (yyval.type_); }
#line 3074 "Parser.c"
    break;

  case 178: /* Type3: T_StellaIdent  */
#line 747 "Syntax.y"
                  { (yyval.type_) = make_TypeVar((yyvsp[0]._string)); result->type_ = (yyval.type_); }
#line 3080 "Parser.c"
    break;

  case 179: /* Type3: _LPAREN Type _RPAREN  */
#line 748 "Syntax.y"
                         { (yyval.type_) = (yyvsp[-1].type_); result->type_ = (yyval.type_); }
#line 3086 "Parser.c"
    break;

  case 180: /* ListType: %empty  */
#line 750 "Syntax.y"
                       { (yyval.listtype_) = 0; result->listtype_ = (yyval.listtype_); }
#line 3092 "Parser.c"
    break;

  case 181: /* ListType: Type  */
#line 751 "Syntax.y"
         { (yyval.listtype_) = make_ListType((yyvsp[0].type_), 0); result->listtype_ = (yyval.listtype_); }
#line 3098 "Parser.c"
    break;

  case 182: /* ListType: Type _COMMA ListType  */
#line 752 "Syntax.y"
                         { (yyval.listtype_) = make_ListType((yyvsp[-2].type_), (yyvsp[0].listtype_)); result->listtype_ = (yyval.listtype_); }
#line 3104 "Parser.c"
    break;

  case 183: /* VariantFieldType: T_StellaIdent OptionalTyping  */
#line 754 "Syntax.y"
                                                { (yyval.variantfieldtype_) = make_AVariantFieldType((yyvsp[-1]._string), (yyvsp[0].optionaltyping_)); result->variantfieldtype_ = (yyval.variantfieldtype_); }
#line 3110 "Parser.c"
    break;

  case 184: /* ListVariantFieldType: %empty  */
#line 756 "Syntax.y"
                                   { (yyval.listvariantfieldtype_) = 0; result->listvariantfieldtype_ = (yyval.listvariantfieldtype_); }
#line 3116 "Parser.c"
    break;

  case 185: /* ListVariantFieldType: VariantFieldType  */
#line 757 "Syntax.y"
                     { (yyval.listvariantfieldtype_) = make_ListVariantFieldType((yyvsp[0].variantfieldtype_), 0); result->listvariantfieldtype_ = (yyval.listvariantfieldtype_); }
#line 3122 "Parser.c"
    break;

  case 186: /* ListVariantFieldType: VariantFieldType _COMMA ListVariantFieldType  */
#line 758 "Syntax.y"
                                                 { (yyval.listvariantfieldtype_) = make_ListVariantFieldType((yyvsp[-2].variantfieldtype_), (yyvsp[0].listvariantfieldtype_)); result->listvariantfieldtype_ = (yyval.listvariantfieldtype_); }
#line 3128 "Parser.c"
    break;

  case 187: /* RecordFieldType: T_StellaIdent _COLON Type  */
#line 760 "Syntax.y"
                                            { (yyval.recordfieldtype_) = make_ARecordFieldType((yyvsp[-2]._string), (yyvsp[0].type_)); result->recordfieldtype_ = (yyval.recordfieldtype_); }
#line 3134 "Parser.c"
    break;

  case 188: /* ListRecordFieldType: RecordFieldType  */
#line 762 "Syntax.y"
                                      { (yyval.listrecordfieldtype_) = make_ListRecordFieldType((yyvsp[0].recordfieldtype_), 0); result->listrecordfieldtype_ = (yyval.listrecordfieldtype_); }
#line 3140 "Parser.c"
    break;

  case 189: /* ListRecordFieldType: RecordFieldType _COMMA ListRecordFieldType  */
#line 763 "Syntax.y"
                                               { (yyval.listrecordfieldtype_) = make_ListRecordFieldType((yyvsp[-2].recordfieldtype_), (yyvsp[0].listrecordfieldtype_)); result->listrecordfieldtype_ = (yyval.listrecordfieldtype_); }
#line 3146 "Parser.c"
    break;


#line 3150 "Parser.c"

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

#line 768 "Syntax.y"



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

/* Entrypoint: parse LabelledEffect from file. */
LabelledEffect pLabelledEffect(FILE *inp)
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
    return result.labelledeffect_;
  }
}

/* Entrypoint: parse LabelledEffect from string. */
LabelledEffect psLabelledEffect(const char *str)
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
    return result.labelledeffect_;
  }
}

/* Entrypoint: parse ListLabelledEffect from file. */
ListLabelledEffect pListLabelledEffect(FILE *inp)
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
    return result.listlabelledeffect_;
  }
}

/* Entrypoint: parse ListLabelledEffect from string. */
ListLabelledEffect psListLabelledEffect(const char *str)
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
    return result.listlabelledeffect_;
  }
}

/* Entrypoint: parse Modality from file. */
Modality pModality(FILE *inp)
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
    return result.modality_;
  }
}

/* Entrypoint: parse Modality from string. */
Modality psModality(const char *str)
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
    return result.modality_;
  }
}

/* Entrypoint: parse ListModality from file. */
ListModality pListModality(FILE *inp)
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
    return result.listmodality_;
  }
}

/* Entrypoint: parse ListModality from string. */
ListModality psListModality(const char *str)
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
    return result.listmodality_;
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

/* Entrypoint: parse Handler from file. */
Handler pHandler(FILE *inp)
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
    return result.handler_;
  }
}

/* Entrypoint: parse Handler from string. */
Handler psHandler(const char *str)
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
    return result.handler_;
  }
}

/* Entrypoint: parse ListHandler from file. */
ListHandler pListHandler(FILE *inp)
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
    return result.listhandler_;
  }
}

/* Entrypoint: parse ListHandler from string. */
ListHandler psListHandler(const char *str)
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
    return result.listhandler_;
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



