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
  YYSYMBOL__KW_letm = 65,                  /* _KW_letm  */
  YYSYMBOL__KW_letrec = 66,                /* _KW_letrec  */
  YYSYMBOL__KW_lock = 67,                  /* _KW_lock  */
  YYSYMBOL__KW_match = 68,                 /* _KW_match  */
  YYSYMBOL__KW_mod = 69,                   /* _KW_mod  */
  YYSYMBOL__KW_new = 70,                   /* _KW_new  */
  YYSYMBOL__KW_not = 71,                   /* _KW_not  */
  YYSYMBOL__KW_or = 72,                    /* _KW_or  */
  YYSYMBOL__SYMB_30 = 73,                  /* _SYMB_30  */
  YYSYMBOL__KW_rel = 74,                   /* _KW_rel  */
  YYSYMBOL__KW_return = 75,                /* _KW_return  */
  YYSYMBOL__KW_succ = 76,                  /* _KW_succ  */
  YYSYMBOL__KW_then = 77,                  /* _KW_then  */
  YYSYMBOL__KW_throw = 78,                 /* _KW_throw  */
  YYSYMBOL__KW_throws = 79,                /* _KW_throws  */
  YYSYMBOL__KW_true = 80,                  /* _KW_true  */
  YYSYMBOL__KW_try = 81,                   /* _KW_try  */
  YYSYMBOL__KW_type = 82,                  /* _KW_type  */
  YYSYMBOL__KW_unfold = 83,                /* _KW_unfold  */
  YYSYMBOL__KW_unit = 84,                  /* _KW_unit  */
  YYSYMBOL__KW_variant = 85,               /* _KW_variant  */
  YYSYMBOL__KW_with = 86,                  /* _KW_with  */
  YYSYMBOL__LBRACE = 87,                   /* _LBRACE  */
  YYSYMBOL__BAR = 88,                      /* _BAR  */
  YYSYMBOL__SYMB_14 = 89,                  /* _SYMB_14  */
  YYSYMBOL__RBRACE = 90,                   /* _RBRACE  */
  YYSYMBOL__KW_87 = 91,                    /* _KW_87  */
  YYSYMBOL_T_ExtensionName = 92,           /* T_ExtensionName  */
  YYSYMBOL_T_MemoryAddress = 93,           /* T_MemoryAddress  */
  YYSYMBOL_T_StellaIdent = 94,             /* T_StellaIdent  */
  YYSYMBOL__INTEGER_ = 95,                 /* _INTEGER_  */
  YYSYMBOL_YYACCEPT = 96,                  /* $accept  */
  YYSYMBOL_Program = 97,                   /* Program  */
  YYSYMBOL_ListStellaIdent = 98,           /* ListStellaIdent  */
  YYSYMBOL_LanguageDecl = 99,              /* LanguageDecl  */
  YYSYMBOL_Extension = 100,                /* Extension  */
  YYSYMBOL_ListExtensionName = 101,        /* ListExtensionName  */
  YYSYMBOL_ListExtension = 102,            /* ListExtension  */
  YYSYMBOL_Decl = 103,                     /* Decl  */
  YYSYMBOL_ListDecl = 104,                 /* ListDecl  */
  YYSYMBOL_Annotation = 105,               /* Annotation  */
  YYSYMBOL_ListAnnotation = 106,           /* ListAnnotation  */
  YYSYMBOL_ParamDecl = 107,                /* ParamDecl  */
  YYSYMBOL_ListParamDecl = 108,            /* ListParamDecl  */
  YYSYMBOL_ReturnType = 109,               /* ReturnType  */
  YYSYMBOL_ThrowType = 110,                /* ThrowType  */
  YYSYMBOL_Type9 = 111,                    /* Type9  */
  YYSYMBOL_ListType9 = 112,                /* ListType9  */
  YYSYMBOL_MatchCase = 113,                /* MatchCase  */
  YYSYMBOL_ListMatchCase = 114,            /* ListMatchCase  */
  YYSYMBOL_OptionalTyping = 115,           /* OptionalTyping  */
  YYSYMBOL_PatternData = 116,              /* PatternData  */
  YYSYMBOL_ExprData = 117,                 /* ExprData  */
  YYSYMBOL_Pattern = 118,                  /* Pattern  */
  YYSYMBOL_ListPattern = 119,              /* ListPattern  */
  YYSYMBOL_LabelledPattern = 120,          /* LabelledPattern  */
  YYSYMBOL_ListLabelledPattern = 121,      /* ListLabelledPattern  */
  YYSYMBOL_Binding = 122,                  /* Binding  */
  YYSYMBOL_ListBinding = 123,              /* ListBinding  */
  YYSYMBOL_Expr = 124,                     /* Expr  */
  YYSYMBOL_ListExpr = 125,                 /* ListExpr  */
  YYSYMBOL_Expr1 = 126,                    /* Expr1  */
  YYSYMBOL_PatternBinding = 127,           /* PatternBinding  */
  YYSYMBOL_ListPatternBinding = 128,       /* ListPatternBinding  */
  YYSYMBOL_Expr2 = 129,                    /* Expr2  */
  YYSYMBOL_LabelledEffect = 130,           /* LabelledEffect  */
  YYSYMBOL_ListLabelledEffect = 131,       /* ListLabelledEffect  */
  YYSYMBOL_Modality = 132,                 /* Modality  */
  YYSYMBOL_ListModality = 133,             /* ListModality  */
  YYSYMBOL_Expr3 = 134,                    /* Expr3  */
  YYSYMBOL_Expr4 = 135,                    /* Expr4  */
  YYSYMBOL_Expr5 = 136,                    /* Expr5  */
  YYSYMBOL_Expr6 = 137,                    /* Expr6  */
  YYSYMBOL_Expr7 = 138,                    /* Expr7  */
  YYSYMBOL_Handler = 139,                  /* Handler  */
  YYSYMBOL_ListHandler = 140,              /* ListHandler  */
  YYSYMBOL_Type = 141,                     /* Type  */
  YYSYMBOL_Type1 = 142,                    /* Type1  */
  YYSYMBOL_Type2 = 143,                    /* Type2  */
  YYSYMBOL_Type3 = 144,                    /* Type3  */
  YYSYMBOL_ListType = 145,                 /* ListType  */
  YYSYMBOL_VariantFieldType = 146,         /* VariantFieldType  */
  YYSYMBOL_ListVariantFieldType = 147,     /* ListVariantFieldType  */
  YYSYMBOL_RecordFieldType = 148,          /* RecordFieldType  */
  YYSYMBOL_ListRecordFieldType = 149       /* ListRecordFieldType  */
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

#line 548 "Parser.c"


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
#define YYLAST   789

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  96
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  54
/* YYNRULES -- Number of rules.  */
#define YYNRULES  191
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  507

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   350


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
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   517,   517,   519,   520,   521,   523,   525,   527,   528,
     529,   531,   532,   534,   535,   536,   537,   538,   539,   541,
     542,   549,   551,   552,   554,   556,   557,   558,   560,   561,
     563,   564,   566,   568,   569,   571,   573,   574,   575,   577,
     578,   580,   581,   583,   584,   586,   587,   588,   589,   590,
     591,   592,   593,   594,   595,   596,   597,   598,   599,   600,
     601,   602,   604,   605,   606,   608,   610,   611,   613,   615,
     616,   618,   619,   620,   621,   622,   623,   624,   626,   627,
     628,   630,   631,   632,   634,   636,   637,   639,   640,   641,
     642,   643,   644,   645,   650,   652,   653,   654,   656,   657,
     658,   660,   661,   663,   664,   665,   666,   667,   668,   669,
     670,   671,   672,   673,   675,   676,   677,   678,   680,   681,
     682,   684,   685,   686,   687,   688,   689,   690,   691,   692,
     693,   694,   695,   696,   697,   698,   699,   700,   701,   702,
     703,   704,   705,   706,   707,   708,   709,   710,   711,   713,
     714,   715,   716,   717,   718,   719,   721,   722,   724,   725,
     726,   728,   729,   730,   731,   732,   733,   735,   736,   738,
     739,   740,   741,   742,   744,   745,   746,   747,   748,   749,
     750,   751,   753,   754,   755,   757,   759,   760,   761,   763,
     765,   766
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
  "_KW_letm", "_KW_letrec", "_KW_lock", "_KW_match", "_KW_mod", "_KW_new",
  "_KW_not", "_KW_or", "_SYMB_30", "_KW_rel", "_KW_return", "_KW_succ",
  "_KW_then", "_KW_throw", "_KW_throws", "_KW_true", "_KW_try", "_KW_type",
  "_KW_unfold", "_KW_unit", "_KW_variant", "_KW_with", "_LBRACE", "_BAR",
  "_SYMB_14", "_RBRACE", "_KW_87", "T_ExtensionName", "T_MemoryAddress",
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

#define YYPACT_NINF (-357)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-3)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -1,    24,    74,  -357,    59,  -357,    37,  -357,     5,   138,
      29,    89,  -357,    21,   102,  -357,   163,   205,  -357,   200,
     142,   201,   146,   172,  -357,   204,  -357,    89,   208,   231,
     208,   241,   155,   -25,  -357,   283,   208,   170,  -357,  -357,
    -357,  -357,  -357,   110,  -357,   259,   173,   695,   175,  -357,
    -357,  -357,   257,  -357,   208,  -357,   176,   235,   258,  -357,
     260,   265,   244,   208,  -357,   276,   269,   275,   197,   249,
     252,   208,   282,   281,   285,   288,   218,   297,   227,   308,
     283,  -357,   307,   313,   317,   173,   233,   173,   -25,   277,
    -357,   208,  -357,   170,  -357,   208,  -357,   321,   173,   208,
     208,   208,  -357,   237,  -357,   208,  -357,   208,   176,   320,
     295,   322,   325,   318,   253,  -357,   250,  -357,  -357,  -357,
     331,  -357,  -357,  -357,  -357,   285,  -357,  -357,  -357,  -357,
     208,   266,   340,   208,   233,  -357,   233,   344,   208,  -357,
     208,   264,   176,  -357,  -357,   329,   176,  -357,   353,  -357,
    -357,  -357,   347,  -357,   357,   208,   -37,   320,   320,  -357,
     328,   266,   266,   328,   615,   278,   363,   365,   368,   370,
     372,   377,   328,   381,   301,  -357,   383,   385,   366,   373,
     315,   477,   394,   399,   217,   376,   217,   546,   380,   401,
     412,  -357,   413,   414,  -357,   337,   388,  -357,   408,  -357,
    -357,  -357,   336,   410,   416,    32,    25,  -357,   151,  -357,
     342,   343,   426,  -357,   418,   328,   328,   328,   328,   328,
     328,   424,   397,   328,   437,   328,   176,   208,   173,   328,
     367,   328,   328,   217,   352,   217,   441,  -357,   442,   443,
     444,  -357,  -357,   667,  -357,  -357,   137,   446,   392,   -25,
     393,   371,   -25,   328,   328,   328,   328,   328,   208,   433,
     447,   379,   390,  -357,   328,   477,   546,   615,   615,   546,
     546,   546,   546,   546,   283,   422,   615,   615,   615,   615,
     328,   -26,   208,  -357,  -357,  -357,   328,   378,   464,   468,
     475,   480,   483,   484,   328,  -357,   486,   328,   491,   492,
     455,   462,   423,   477,   497,   501,   107,   494,    12,   474,
     217,   217,   217,   217,   495,   427,   508,   429,   328,   208,
     479,   217,   328,   511,   328,   217,   485,   518,   519,   520,
     525,   448,   498,   328,   439,  -357,  -357,  -357,  -357,    23,
      25,    25,    23,    23,    23,    23,    23,  -357,   283,    25,
    -357,  -357,  -357,   533,  -357,  -357,   503,    91,   104,  -357,
    -357,  -357,  -357,  -357,  -357,  -357,   328,  -357,   328,   535,
    -357,   456,   245,   328,   458,   514,  -357,  -357,  -357,   217,
     217,   460,   217,  -357,   150,    85,   118,   128,   217,  -357,
     457,  -357,  -357,  -357,   208,  -357,  -357,   -25,  -357,   471,
     466,   159,   476,  -357,  -357,  -357,  -357,     3,   245,  -357,
     433,  -357,  -357,  -357,  -357,   328,   328,   555,   560,  -357,
     493,  -357,  -357,   482,   477,   131,   -23,  -357,  -357,   217,
    -357,  -357,  -357,   -23,   495,  -357,  -357,   539,   217,  -357,
     328,   328,   532,   499,   500,  -357,   502,   504,   328,  -357,
     328,    11,  -357,  -357,   149,   217,  -357,  -357,   505,   208,
     217,   328,  -357,  -357,   574,   506,   233,   217,   496,   512,
    -357,   523,  -357,   517,   162,   515,  -357,  -357,   575,    18,
      11,  -357,   328,   217,   328,  -357,   217,   328,  -357,  -357,
     186,   521,   165,  -357,   328,  -357,   507,   522,   581,   524,
     577,   526,   328,   328,  -357,   528,  -357
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,    11,     0,     1,    19,     6,     0,     0,
      22,     8,    12,     0,     0,    20,     0,     9,     7,     0,
       0,     0,     0,     0,    21,     0,    23,     8,     0,     0,
       0,     0,     0,     0,    10,     0,     0,   186,   174,   178,
     175,   177,   176,     0,   162,     0,     3,   182,     0,   180,
      17,   166,   168,   173,     0,    16,    25,     0,     0,    98,
       0,   101,     0,     0,   179,     0,    39,   187,     0,     0,
       0,   182,     4,     0,   180,   183,     0,   190,     0,     0,
       0,    18,     0,    26,     0,     3,    95,     3,     0,     0,
     181,     0,   185,   186,   171,     0,   172,     0,     3,     0,
       0,   182,   169,     0,   170,     0,   167,     0,    25,    28,
       0,     0,    96,     0,     0,   102,     0,    40,   188,   161,
       0,     5,   164,   189,   184,     0,   191,   165,    24,    27,
       0,    30,     0,     0,    95,    99,    95,     0,     0,    29,
       0,     0,    25,    94,    97,     0,    25,   163,    33,    31,
      32,    19,     0,   100,     0,     0,    22,    28,    28,    34,
       0,    30,    30,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    78,     0,     0,   150,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   131,     0,     0,   149,     0,     0,   151,    78,   153,
     154,   152,     0,    77,    83,    93,   113,   117,   120,   148,
       0,     0,     0,   119,    43,     0,     0,     0,     0,     0,
       0,    79,     0,     0,     0,     0,    25,     0,     3,     0,
       0,     0,     0,     0,     0,    62,     0,    55,     0,     0,
       0,    56,    57,    62,    60,    58,     0,    85,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   154,
      69,     0,     0,    13,    72,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      78,     0,   182,    19,    19,   155,     0,     0,     0,     0,
       0,     0,     0,     0,    78,   109,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    41,    63,     0,
       0,     0,     0,     0,    60,     0,    66,     0,     0,     0,
       0,     0,     0,     0,     0,    36,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   126,   125,    71,    81,    92,
     110,   111,    87,    88,    91,    89,    90,   103,     0,   112,
     114,   115,   116,     0,   123,   124,     0,    22,    22,    44,
     107,   128,   129,   130,   141,   140,     0,    80,     0,     0,
     144,     0,     0,     0,     0,     0,   136,   137,    61,     0,
       0,     0,    62,    52,     0,     0,     0,     0,     0,    50,
       0,    51,    84,    46,     0,    86,    73,     0,    74,    37,
       0,     0,     0,   118,   139,   138,   132,     0,     0,    68,
       0,    70,   104,   121,   122,     0,     0,     0,     0,   142,
       0,   146,    76,     0,     0,     0,    42,    47,    64,     0,
      48,    49,    59,    65,     0,    67,    45,     0,    36,   108,
       0,     0,     0,     0,     0,   147,     0,     0,     0,   127,
       0,   158,    82,    54,     0,     0,    38,    35,     0,     0,
       0,     0,    14,    15,     0,     0,     0,     0,   159,     0,
      53,     0,   106,     0,     0,     0,   145,   105,     0,     0,
     158,   143,     0,     0,     0,   134,     0,     0,   160,    75,
       0,     0,     0,   156,     0,   133,     0,     0,     0,     0,
       0,     0,     0,     0,   157,     0,   135
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -357,  -357,   -74,  -357,  -357,   563,  -357,  -357,  -141,  -357,
    -357,  -357,  -102,   -50,    33,  -357,   452,  -357,   171,  -357,
    -357,  -357,  -212,  -238,  -357,   230,  -357,   291,  -135,  -171,
    -172,  -357,  -182,   445,   168,   -76,   -42,   540,   -13,   -56,
    -145,  -357,  -356,  -357,   156,   -28,  -357,   -32,  -357,   -64,
    -357,   538,  -357,   534
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,    73,     3,     9,    18,     6,    15,    10,    26,
      16,    83,    84,   131,   141,   148,   149,   399,   400,    92,
     381,   287,   246,   309,   316,   317,   260,   261,   221,   222,
     203,   247,   248,   204,   112,   113,    61,    62,   205,   206,
     207,   208,   209,   468,   469,    75,    51,    52,    53,    76,
      67,    68,    77,    78
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      50,    69,    55,    64,   250,   315,   129,    97,    65,   230,
     156,   110,    13,   114,    58,    70,   421,   466,   319,   213,
     320,   306,   382,   308,   121,   202,    81,   262,   212,    -2,
     487,   308,   267,   277,   268,    70,   266,   124,   160,   278,
     152,   267,    59,   268,   154,    14,   442,   443,   106,    60,
     269,   270,   445,   319,   271,   320,   272,   273,   144,   319,
     145,   320,     1,   117,   274,   279,   275,   119,   354,   355,
       4,   122,   123,   274,     5,   275,     7,   127,    13,   128,
     288,   289,   290,   291,   292,   293,   467,     8,   296,   444,
     298,    11,   430,   338,   302,   276,   304,   305,   384,   385,
     386,   387,   139,    19,   276,   143,    20,   161,   162,   353,
     147,    14,   150,   401,   378,    35,    36,   379,   327,   328,
     329,   330,   331,   367,   299,   431,   319,   150,   320,   337,
      37,   375,   350,   351,   352,   432,    38,    39,   453,   395,
      13,    40,   357,   358,   428,    41,    42,    43,   319,    58,
     320,   359,    44,    13,   301,    12,   470,   280,   318,   319,
     429,   320,   369,    45,   281,    46,   415,   425,   426,   319,
     308,   320,   319,    14,   320,   496,   433,    59,   319,   416,
     320,    17,   440,   392,    60,   484,    14,   396,   282,   398,
     319,   319,   320,   320,   210,   211,    21,    47,   409,   300,
     319,    48,   320,   319,    49,   320,   319,   323,   320,   494,
     326,   340,   341,    35,    36,    27,    22,   454,   356,    23,
     349,    28,    30,   233,    24,    32,   401,   319,    37,   320,
     332,   417,    25,   418,    38,    39,    29,   234,   422,    40,
      31,    33,   347,    41,    42,    43,    54,    56,   474,    57,
      44,   163,   452,   339,   235,   479,   342,   343,   344,   345,
     346,    45,   236,    46,    66,    71,    80,    72,   237,    79,
      82,   490,    85,   471,   492,    88,    86,   238,    87,   239,
     446,   447,    89,    90,    91,    93,    94,    95,    35,    36,
      96,   393,    98,   240,    99,    47,   175,   241,   101,    48,
     100,   242,    49,    37,   243,   457,   458,   103,   102,    38,
      39,   244,   245,   464,    40,   465,   412,   104,    41,    42,
      63,   105,   107,   108,   109,   194,   475,   111,   120,   197,
     116,   125,   130,   132,   163,   134,   164,   133,   199,   200,
     201,   136,   135,   138,   137,   140,   142,   489,   165,   491,
     146,   151,   493,   153,   157,   437,   166,   167,   168,   497,
     169,   170,   171,   155,   158,   172,   436,   504,   505,   215,
      47,   216,   214,   173,   217,   174,   218,    49,   219,   175,
     176,   177,   178,   220,   179,   180,   181,   223,   182,   225,
     183,   226,   184,   185,   186,   224,   187,   188,   189,   190,
     231,   191,   229,   227,   192,   232,   193,   253,   194,   195,
     228,   196,   197,   249,   163,   198,   164,   252,   254,   255,
     256,   199,   200,   201,   257,   258,   263,   264,   165,   283,
     284,   473,   265,   285,   294,   295,   166,   167,   168,   286,
     169,   170,   171,   297,   303,   172,   307,   310,   311,   312,
     313,   322,   324,   173,   333,   174,   321,   334,   325,   175,
     176,   177,   178,   348,   179,   180,   181,   360,   182,   335,
     183,   361,   184,   185,   186,   362,   187,   188,   189,   190,
     336,   191,   363,   163,   192,   164,   193,   364,   194,   195,
     365,   196,   197,   372,   366,   198,   368,   165,   370,   371,
     373,   199,   259,   201,   376,   166,   167,   168,   377,   169,
     170,   171,   383,   374,   172,   380,   388,   389,   390,   391,
     394,   397,   173,   402,   174,   403,   404,   405,   175,   176,
     177,   178,   406,   410,   180,   181,   408,   182,   407,   183,
     413,   414,   419,   420,   423,   187,   188,   189,   190,   427,
     191,   434,   163,   192,   164,   193,   439,   194,   195,   438,
     196,   197,   424,   441,   198,   448,   165,   449,   450,   451,
     199,   200,   201,   459,   166,   167,   168,   455,   169,   170,
     171,   476,   482,   172,   480,   486,   460,   461,   500,   502,
      34,   173,   462,   174,   463,   472,   477,   175,   176,   177,
     178,   498,   481,   180,   483,   485,   182,   159,   183,   456,
     501,   495,   499,   503,   187,   188,   189,   190,   506,   191,
     435,   163,   192,   164,   193,   411,   194,   195,   115,   196,
     197,   118,   251,   198,   478,     0,   488,   126,     0,   199,
     200,   201,     0,   166,   167,   168,     0,   169,   170,   171,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     173,     0,   174,     0,     0,     0,   175,   176,     0,   178,
       0,     0,   180,   233,     0,   182,     0,   183,     0,     0,
       0,     0,     0,     0,     0,   189,   190,   234,   191,     0,
       0,   192,     0,   193,     0,   194,   195,     0,   196,   197,
      35,    36,   198,     0,   235,     0,     0,     0,   199,   200,
     201,     0,   236,     0,     0,    37,     0,     0,   237,     0,
       0,    38,    39,     0,     0,     0,    40,   238,     0,   239,
      41,    42,    43,     0,     0,     0,     0,    44,     0,     0,
       0,     0,     0,   240,     0,     0,     0,   241,    45,     0,
      46,   242,     0,     0,   243,     0,     0,     0,     0,     0,
       0,   314,   245,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    47,     0,     0,     0,    48,     0,     0,    74
};

static const yytype_int16 yycheck[] =
{
      28,    43,    30,    35,   186,   243,   108,    71,    36,   181,
     151,    85,    49,    87,    39,    43,   372,     6,    41,   164,
      43,   233,    10,   235,    98,   160,    54,   198,   163,     0,
      12,   243,     9,     8,    11,    63,     4,   101,    75,    14,
     142,     9,    67,    11,   146,    82,    43,    44,    80,    74,
      18,    19,   408,    41,    22,    43,    24,    25,   134,    41,
     136,    43,    63,    91,    41,    40,    43,    95,    94,    95,
      46,    99,   100,    41,     0,    43,    17,   105,    49,   107,
     215,   216,   217,   218,   219,   220,    75,    50,   223,    86,
     225,    86,     7,   265,   229,    72,   231,   232,   310,   311,
     312,   313,   130,    82,    72,   133,    85,   157,   158,   280,
     138,    82,   140,   325,     7,     5,     6,    10,   253,   254,
     255,   256,   257,   294,   226,     7,    41,   155,    43,   264,
      20,   303,   277,   278,   279,     7,    26,    27,     7,   321,
      49,    31,   283,   284,   382,    35,    36,    37,    41,    39,
      43,   286,    42,    49,   228,    17,     7,     6,    21,    41,
      10,    43,   297,    53,    13,    55,    75,   379,   380,    41,
     382,    43,    41,    82,    43,    10,   388,    67,    41,    75,
      43,    92,    23,   318,    74,    23,    82,   322,    37,   324,
      41,    41,    43,    43,   161,   162,    94,    87,   333,   227,
      41,    91,    43,    41,    94,    43,    41,   249,    43,    23,
     252,   267,   268,     5,     6,    10,    53,   429,   282,    56,
     276,    21,    21,     6,    61,    53,   438,    41,    20,    43,
     258,   366,    69,   368,    26,    27,    94,    20,   373,    31,
      94,    37,   274,    35,    36,    37,    15,     6,   460,    94,
      42,     6,   424,   266,    37,   467,   269,   270,   271,   272,
     273,    53,    45,    55,    94,     6,     9,    94,    51,    94,
      94,   483,    37,   455,   486,    10,    18,    60,    18,    62,
     415,   416,    38,     7,    15,    10,    89,    38,     5,     6,
      38,   319,    10,    76,    13,    87,    51,    80,    10,    91,
      15,    84,    94,    20,    87,   440,   441,    10,    90,    26,
      27,    94,    95,   448,    31,   450,   348,    90,    35,    36,
      37,    13,    15,    10,     7,    80,   461,    94,     7,    84,
      53,    94,    12,    38,     6,    10,     8,    15,    93,    94,
      95,    88,    24,    12,    94,    79,     6,   482,    20,   484,
       6,    87,   487,    24,     7,   397,    28,    29,    30,   494,
      32,    33,    34,    10,     7,    37,   394,   502,   503,     6,
      87,     6,    94,    45,     6,    47,     6,    94,     6,    51,
      52,    53,    54,     6,    56,    57,    58,     6,    60,     6,
      62,     6,    64,    65,    66,    94,    68,    69,    70,    71,
       6,    73,    87,    37,    76,     6,    78,     6,    80,    81,
      37,    83,    84,    37,     6,    87,     8,    37,     6,     6,
       6,    93,    94,    95,    87,    37,    90,    17,    20,    87,
      87,   459,    16,     7,    10,    38,    28,    29,    30,    21,
      32,    33,    34,     6,    77,    37,    94,     6,     6,     6,
       6,    59,    59,    45,    21,    47,    10,    10,    87,    51,
      52,    53,    54,    41,    56,    57,    58,    89,    60,    90,
      62,     7,    64,    65,    66,     7,    68,    69,    70,    71,
      90,    73,     7,     6,    76,     8,    78,     7,    80,    81,
       7,    83,    84,    38,    10,    87,    10,    20,     7,     7,
      38,    93,    94,    95,     7,    28,    29,    30,     7,    32,
      33,    34,    38,    90,    37,    21,    21,    90,    10,    90,
      41,    10,    45,    38,    47,     7,     7,     7,    51,    52,
      53,    54,     7,    94,    57,    58,    38,    60,    90,    62,
       7,    38,     7,    87,    86,    68,    69,    70,    71,    89,
      73,    94,     6,    76,     8,    78,    90,    80,    81,    88,
      83,    84,    48,    87,    87,    10,    20,     7,    75,    87,
      93,    94,    95,    41,    28,    29,    30,    38,    32,    33,
      34,     7,    59,    37,    88,    10,    87,    87,     7,    12,
      27,    45,    90,    47,    90,    90,    90,    51,    52,    53,
      54,    94,    90,    57,    87,    90,    60,   155,    62,   438,
      86,    90,    90,    87,    68,    69,    70,    71,    90,    73,
     390,     6,    76,     8,    78,   334,    80,    81,    88,    83,
      84,    93,   187,    87,   466,    -1,   480,   103,    -1,    93,
      94,    95,    -1,    28,    29,    30,    -1,    32,    33,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      45,    -1,    47,    -1,    -1,    -1,    51,    52,    -1,    54,
      -1,    -1,    57,     6,    -1,    60,    -1,    62,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    71,    20,    73,    -1,
      -1,    76,    -1,    78,    -1,    80,    81,    -1,    83,    84,
       5,     6,    87,    -1,    37,    -1,    -1,    -1,    93,    94,
      95,    -1,    45,    -1,    -1,    20,    -1,    -1,    51,    -1,
      -1,    26,    27,    -1,    -1,    -1,    31,    60,    -1,    62,
      35,    36,    37,    -1,    -1,    -1,    -1,    42,    -1,    -1,
      -1,    -1,    -1,    76,    -1,    -1,    -1,    80,    53,    -1,
      55,    84,    -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,
      -1,    94,    95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    87,    -1,    -1,    -1,    91,    -1,    -1,    94
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    63,    97,    99,    46,     0,   102,    17,    50,   100,
     104,    86,    17,    49,    82,   103,   106,    92,   101,    82,
      85,    94,    53,    56,    61,    69,   105,    10,    21,    94,
      21,    94,    53,    37,   101,     5,     6,    20,    26,    27,
      31,    35,    36,    37,    42,    53,    55,    87,    91,    94,
     141,   142,   143,   144,    15,   141,     6,    94,    39,    67,
      74,   132,   133,    37,   143,   141,    94,   146,   147,   132,
     141,     6,    94,    98,    94,   141,   145,   148,   149,    94,
       9,   141,    94,   107,   108,    37,    18,    18,    10,    38,
       7,    15,   115,    10,    89,    38,    38,   145,    10,    13,
      15,    10,    90,    10,    90,    13,   143,    15,    10,     7,
      98,    94,   130,   131,    98,   133,    53,   141,   147,   141,
       7,    98,   141,   141,   145,    94,   149,   141,   141,   108,
      12,   109,    38,    15,    10,    24,    88,    94,    12,   141,
      79,   110,     6,   141,   131,   131,     6,   141,   111,   112,
     141,    87,   108,    24,   108,    10,   104,     7,     7,   112,
      75,   109,   109,     6,     8,    20,    28,    29,    30,    32,
      33,    34,    37,    45,    47,    51,    52,    53,    54,    56,
      57,    58,    60,    62,    64,    65,    66,    68,    69,    70,
      71,    73,    76,    78,    80,    81,    83,    84,    87,    93,
      94,    95,   124,   126,   129,   134,   135,   136,   137,   138,
     110,   110,   124,   136,    94,     6,     6,     6,     6,     6,
       6,   124,   125,     6,    94,     6,     6,    37,    37,    87,
     126,     6,     6,     6,    20,    37,    45,    51,    60,    62,
      76,    80,    84,    87,    94,    95,   118,   127,   128,    37,
     128,   129,    37,     6,     6,     6,     6,    87,    37,    94,
     122,   123,   125,    90,    17,    16,     4,     9,    11,    18,
      19,    22,    24,    25,    41,    43,    72,     8,    14,    40,
       6,    13,    37,    87,    87,     7,    21,   117,   124,   124,
     124,   124,   124,   124,    10,    38,   124,     6,   124,   108,
     141,    98,   124,    77,   124,   124,   118,    94,   118,   119,
       6,     6,     6,     6,    94,   119,   120,   121,    21,    41,
      43,    10,    59,   132,    59,    87,   132,   124,   124,   124,
     124,   124,   141,    21,    10,    90,    90,   124,   126,   134,
     135,   135,   134,   134,   134,   134,   134,   143,    41,   135,
     136,   136,   136,   125,    94,    95,   145,   104,   104,   124,
      89,     7,     7,     7,     7,     7,    10,   125,    10,   124,
       7,     7,    38,    38,    90,   126,     7,     7,     7,    10,
      21,   116,    10,    38,   118,   118,   118,   118,    21,    90,
      10,    90,   124,   141,    41,   128,   124,    10,   124,   113,
     114,   118,    38,     7,     7,     7,     7,    90,    38,   124,
      94,   123,   143,     7,    38,    75,    75,   124,   124,     7,
      87,   138,   124,    86,    48,   118,   118,    89,   119,    10,
       7,     7,     7,   118,    94,   121,   141,   132,    88,    90,
      23,    87,    43,    44,    86,   138,   124,   124,    10,     7,
      75,    87,   126,     7,   118,    38,   114,   124,   124,    41,
      87,    87,    90,    90,   124,   124,     6,    75,   139,   140,
       7,   128,    90,   141,   118,   124,     7,    90,   130,   118,
      88,    90,    59,    87,    23,    90,    10,    12,   140,   124,
     118,   124,   118,   124,    23,    90,    10,   124,    94,    90,
       7,    86,    12,    87,   124,   124,    90
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    96,    97,    98,    98,    98,    99,   100,   101,   101,
     101,   102,   102,   103,   103,   103,   103,   103,   103,   104,
     104,   105,   106,   106,   107,   108,   108,   108,   109,   109,
     110,   110,   111,   112,   112,   113,   114,   114,   114,   115,
     115,   116,   116,   117,   117,   118,   118,   118,   118,   118,
     118,   118,   118,   118,   118,   118,   118,   118,   118,   118,
     118,   118,   119,   119,   119,   120,   121,   121,   122,   123,
     123,   124,   124,   124,   124,   124,   124,   124,   125,   125,
     125,   126,   126,   126,   127,   128,   128,   129,   129,   129,
     129,   129,   129,   129,   130,   131,   131,   131,   132,   132,
     132,   133,   133,   134,   134,   134,   134,   134,   134,   134,
     134,   134,   134,   134,   135,   135,   135,   135,   136,   136,
     136,   137,   137,   137,   137,   137,   137,   137,   137,   137,
     137,   137,   137,   137,   137,   137,   137,   137,   137,   137,
     137,   137,   137,   137,   137,   137,   137,   137,   137,   138,
     138,   138,   138,   138,   138,   138,   139,   139,   140,   140,
     140,   141,   141,   141,   141,   141,   141,   142,   142,   143,
     143,   143,   143,   143,   144,   144,   144,   144,   144,   144,
     144,   144,   145,   145,   145,   146,   147,   147,   147,   148,
     149,   149
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
       3,     3,     2,     4,     4,     9,     5,     1,     0,     1,
       3,     3,     6,     1,     3,     1,     3,     3,     3,     3,
       3,     3,     3,     1,     3,     0,     1,     3,     1,     4,
       6,     1,     3,     3,     4,     8,     7,     4,     5,     3,
       3,     3,     3,     1,     3,     3,     3,     1,     4,     2,
       1,     4,     4,     3,     3,     3,     3,     6,     4,     4,
       4,     1,     4,    10,     8,    16,     4,     4,     4,     4,
       4,     4,     5,     8,     4,     8,     5,     5,     1,     1,
       1,     1,     1,     1,     1,     3,     4,     9,     0,     1,
       3,     4,     1,     6,     4,     4,     1,     3,     1,     3,
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
#line 517 "Syntax.y"
                                              { (yyval.program_) = make_AProgram((yyvsp[-2].languagedecl_), reverseListExtension((yyvsp[-1].listextension_)), reverseListDecl((yyvsp[0].listdecl_))); result->program_ = (yyval.program_); }
#line 2026 "Parser.c"
    break;

  case 3: /* ListStellaIdent: %empty  */
#line 519 "Syntax.y"
                              { (yyval.liststellaident_) = 0; result->liststellaident_ = (yyval.liststellaident_); }
#line 2032 "Parser.c"
    break;

  case 4: /* ListStellaIdent: T_StellaIdent  */
#line 520 "Syntax.y"
                  { (yyval.liststellaident_) = make_ListStellaIdent((yyvsp[0]._string), 0); result->liststellaident_ = (yyval.liststellaident_); }
#line 2038 "Parser.c"
    break;

  case 5: /* ListStellaIdent: T_StellaIdent _COMMA ListStellaIdent  */
#line 521 "Syntax.y"
                                         { (yyval.liststellaident_) = make_ListStellaIdent((yyvsp[-2]._string), (yyvsp[0].liststellaident_)); result->liststellaident_ = (yyval.liststellaident_); }
#line 2044 "Parser.c"
    break;

  case 6: /* LanguageDecl: _KW_language _KW_core _SEMI  */
#line 523 "Syntax.y"
                                           { (yyval.languagedecl_) = make_LanguageCore(); result->languagedecl_ = (yyval.languagedecl_); }
#line 2050 "Parser.c"
    break;

  case 7: /* Extension: _KW_extend _KW_with ListExtensionName  */
#line 525 "Syntax.y"
                                                  { (yyval.extension_) = make_AnExtension((yyvsp[0].listextensionname_)); result->extension_ = (yyval.extension_); }
#line 2056 "Parser.c"
    break;

  case 8: /* ListExtensionName: %empty  */
#line 527 "Syntax.y"
                                { (yyval.listextensionname_) = 0; result->listextensionname_ = (yyval.listextensionname_); }
#line 2062 "Parser.c"
    break;

  case 9: /* ListExtensionName: T_ExtensionName  */
#line 528 "Syntax.y"
                    { (yyval.listextensionname_) = make_ListExtensionName((yyvsp[0]._string), 0); result->listextensionname_ = (yyval.listextensionname_); }
#line 2068 "Parser.c"
    break;

  case 10: /* ListExtensionName: T_ExtensionName _COMMA ListExtensionName  */
#line 529 "Syntax.y"
                                             { (yyval.listextensionname_) = make_ListExtensionName((yyvsp[-2]._string), (yyvsp[0].listextensionname_)); result->listextensionname_ = (yyval.listextensionname_); }
#line 2074 "Parser.c"
    break;

  case 11: /* ListExtension: %empty  */
#line 531 "Syntax.y"
                            { (yyval.listextension_) = 0; result->listextension_ = (yyval.listextension_); }
#line 2080 "Parser.c"
    break;

  case 12: /* ListExtension: ListExtension Extension _SEMI  */
#line 532 "Syntax.y"
                                  { (yyval.listextension_) = make_ListExtension((yyvsp[-1].extension_), (yyvsp[-2].listextension_)); result->listextension_ = (yyval.listextension_); }
#line 2086 "Parser.c"
    break;

  case 13: /* Decl: ListAnnotation _KW_fn T_StellaIdent _LPAREN ListParamDecl _RPAREN ReturnType ThrowType _LBRACE ListDecl _KW_return Expr _RBRACE  */
#line 534 "Syntax.y"
                                                                                                                                       { (yyval.decl_) = make_DeclFun(reverseListAnnotation((yyvsp[-12].listannotation_)), (yyvsp[-10]._string), (yyvsp[-8].listparamdecl_), (yyvsp[-6].returntype_), (yyvsp[-5].throwtype_), reverseListDecl((yyvsp[-3].listdecl_)), (yyvsp[-1].expr_)); result->decl_ = (yyval.decl_); }
#line 2092 "Parser.c"
    break;

  case 14: /* Decl: ListAnnotation _KW_generic _KW_fn T_StellaIdent _LBRACK ListStellaIdent _RBRACK _LPAREN ListParamDecl _RPAREN ReturnType ThrowType _LBRACE ListDecl _KW_return Expr _RBRACE  */
#line 535 "Syntax.y"
                                                                                                                                                                                { (yyval.decl_) = make_DeclFunGeneric(reverseListAnnotation((yyvsp[-16].listannotation_)), (yyvsp[-13]._string), (yyvsp[-11].liststellaident_), (yyvsp[-8].listparamdecl_), (yyvsp[-6].returntype_), (yyvsp[-5].throwtype_), reverseListDecl((yyvsp[-3].listdecl_)), (yyvsp[-1].expr_)); result->decl_ = (yyval.decl_); }
#line 2098 "Parser.c"
    break;

  case 15: /* Decl: ListAnnotation _KW_mod _LBRACK ListModality _RBRACK _KW_fn T_StellaIdent _LPAREN ListParamDecl _RPAREN ReturnType ThrowType _LBRACE ListDecl _KW_return Expr _RBRACE  */
#line 536 "Syntax.y"
                                                                                                                                                                         { (yyval.decl_) = make_DeclFunMod(reverseListAnnotation((yyvsp[-16].listannotation_)), (yyvsp[-13].listmodality_), (yyvsp[-10]._string), (yyvsp[-8].listparamdecl_), (yyvsp[-6].returntype_), (yyvsp[-5].throwtype_), reverseListDecl((yyvsp[-3].listdecl_)), (yyvsp[-1].expr_)); result->decl_ = (yyval.decl_); }
#line 2104 "Parser.c"
    break;

  case 16: /* Decl: _KW_type T_StellaIdent _EQ Type  */
#line 537 "Syntax.y"
                                    { (yyval.decl_) = make_DeclTypeAlias((yyvsp[-2]._string), (yyvsp[0].type_)); result->decl_ = (yyval.decl_); }
#line 2110 "Parser.c"
    break;

  case 17: /* Decl: _KW_exception _KW_type _EQ Type  */
#line 538 "Syntax.y"
                                    { (yyval.decl_) = make_DeclExceptionType((yyvsp[0].type_)); result->decl_ = (yyval.decl_); }
#line 2116 "Parser.c"
    break;

  case 18: /* Decl: _KW_exception _KW_variant T_StellaIdent _COLON Type  */
#line 539 "Syntax.y"
                                                        { (yyval.decl_) = make_DeclExceptionVariant((yyvsp[-2]._string), (yyvsp[0].type_)); result->decl_ = (yyval.decl_); }
#line 2122 "Parser.c"
    break;

  case 19: /* ListDecl: %empty  */
#line 541 "Syntax.y"
                       { (yyval.listdecl_) = 0; result->listdecl_ = (yyval.listdecl_); }
#line 2128 "Parser.c"
    break;

  case 20: /* ListDecl: ListDecl Decl  */
#line 542 "Syntax.y"
                  { (yyval.listdecl_) = make_ListDecl((yyvsp[0].decl_), (yyvsp[-1].listdecl_)); result->listdecl_ = (yyval.listdecl_); }
#line 2134 "Parser.c"
    break;

  case 21: /* Annotation: _KW_inline  */
#line 549 "Syntax.y"
                        { (yyval.annotation_) = make_InlineAnnotation(); result->annotation_ = (yyval.annotation_); }
#line 2140 "Parser.c"
    break;

  case 22: /* ListAnnotation: %empty  */
#line 551 "Syntax.y"
                             { (yyval.listannotation_) = 0; result->listannotation_ = (yyval.listannotation_); }
#line 2146 "Parser.c"
    break;

  case 23: /* ListAnnotation: ListAnnotation Annotation  */
#line 552 "Syntax.y"
                              { (yyval.listannotation_) = make_ListAnnotation((yyvsp[0].annotation_), (yyvsp[-1].listannotation_)); result->listannotation_ = (yyval.listannotation_); }
#line 2152 "Parser.c"
    break;

  case 24: /* ParamDecl: T_StellaIdent _COLON Type  */
#line 554 "Syntax.y"
                                      { (yyval.paramdecl_) = make_AParamDecl((yyvsp[-2]._string), (yyvsp[0].type_)); result->paramdecl_ = (yyval.paramdecl_); }
#line 2158 "Parser.c"
    break;

  case 25: /* ListParamDecl: %empty  */
#line 556 "Syntax.y"
                            { (yyval.listparamdecl_) = 0; result->listparamdecl_ = (yyval.listparamdecl_); }
#line 2164 "Parser.c"
    break;

  case 26: /* ListParamDecl: ParamDecl  */
#line 557 "Syntax.y"
              { (yyval.listparamdecl_) = make_ListParamDecl((yyvsp[0].paramdecl_), 0); result->listparamdecl_ = (yyval.listparamdecl_); }
#line 2170 "Parser.c"
    break;

  case 27: /* ListParamDecl: ParamDecl _COMMA ListParamDecl  */
#line 558 "Syntax.y"
                                   { (yyval.listparamdecl_) = make_ListParamDecl((yyvsp[-2].paramdecl_), (yyvsp[0].listparamdecl_)); result->listparamdecl_ = (yyval.listparamdecl_); }
#line 2176 "Parser.c"
    break;

  case 28: /* ReturnType: %empty  */
#line 560 "Syntax.y"
                         { (yyval.returntype_) = make_NoReturnType(); result->returntype_ = (yyval.returntype_); }
#line 2182 "Parser.c"
    break;

  case 29: /* ReturnType: _RARROW Type  */
#line 561 "Syntax.y"
                 { (yyval.returntype_) = make_SomeReturnType((yyvsp[0].type_)); result->returntype_ = (yyval.returntype_); }
#line 2188 "Parser.c"
    break;

  case 30: /* ThrowType: %empty  */
#line 563 "Syntax.y"
                        { (yyval.throwtype_) = make_NoThrowType(); result->throwtype_ = (yyval.throwtype_); }
#line 2194 "Parser.c"
    break;

  case 31: /* ThrowType: _KW_throws ListType9  */
#line 564 "Syntax.y"
                         { (yyval.throwtype_) = make_SomeThrowType((yyvsp[0].listtype_)); result->throwtype_ = (yyval.throwtype_); }
#line 2200 "Parser.c"
    break;

  case 32: /* Type9: Type  */
#line 566 "Syntax.y"
             { (yyval.type_) = (yyvsp[0].type_); result->type_ = (yyval.type_); }
#line 2206 "Parser.c"
    break;

  case 33: /* ListType9: Type9  */
#line 568 "Syntax.y"
                  { (yyval.listtype_) = make_ListType((yyvsp[0].type_), 0); result->listtype_ = (yyval.listtype_); }
#line 2212 "Parser.c"
    break;

  case 34: /* ListType9: Type9 _COMMA ListType9  */
#line 569 "Syntax.y"
                           { (yyval.listtype_) = make_ListType((yyvsp[-2].type_), (yyvsp[0].listtype_)); result->listtype_ = (yyval.listtype_); }
#line 2218 "Parser.c"
    break;

  case 35: /* MatchCase: Pattern _RDARROW Expr  */
#line 571 "Syntax.y"
                                  { (yyval.matchcase_) = make_AMatchCase((yyvsp[-2].pattern_), (yyvsp[0].expr_)); result->matchcase_ = (yyval.matchcase_); }
#line 2224 "Parser.c"
    break;

  case 36: /* ListMatchCase: %empty  */
#line 573 "Syntax.y"
                            { (yyval.listmatchcase_) = 0; result->listmatchcase_ = (yyval.listmatchcase_); }
#line 2230 "Parser.c"
    break;

  case 37: /* ListMatchCase: MatchCase  */
#line 574 "Syntax.y"
              { (yyval.listmatchcase_) = make_ListMatchCase((yyvsp[0].matchcase_), 0); result->listmatchcase_ = (yyval.listmatchcase_); }
#line 2236 "Parser.c"
    break;

  case 38: /* ListMatchCase: MatchCase _BAR ListMatchCase  */
#line 575 "Syntax.y"
                                 { (yyval.listmatchcase_) = make_ListMatchCase((yyvsp[-2].matchcase_), (yyvsp[0].listmatchcase_)); result->listmatchcase_ = (yyval.listmatchcase_); }
#line 2242 "Parser.c"
    break;

  case 39: /* OptionalTyping: %empty  */
#line 577 "Syntax.y"
                             { (yyval.optionaltyping_) = make_NoTyping(); result->optionaltyping_ = (yyval.optionaltyping_); }
#line 2248 "Parser.c"
    break;

  case 40: /* OptionalTyping: _COLON Type  */
#line 578 "Syntax.y"
                { (yyval.optionaltyping_) = make_SomeTyping((yyvsp[0].type_)); result->optionaltyping_ = (yyval.optionaltyping_); }
#line 2254 "Parser.c"
    break;

  case 41: /* PatternData: %empty  */
#line 580 "Syntax.y"
                          { (yyval.patterndata_) = make_NoPatternData(); result->patterndata_ = (yyval.patterndata_); }
#line 2260 "Parser.c"
    break;

  case 42: /* PatternData: _EQ Pattern  */
#line 581 "Syntax.y"
                { (yyval.patterndata_) = make_SomePatternData((yyvsp[0].pattern_)); result->patterndata_ = (yyval.patterndata_); }
#line 2266 "Parser.c"
    break;

  case 43: /* ExprData: %empty  */
#line 583 "Syntax.y"
                       { (yyval.exprdata_) = make_NoExprData(); result->exprdata_ = (yyval.exprdata_); }
#line 2272 "Parser.c"
    break;

  case 44: /* ExprData: _EQ Expr  */
#line 584 "Syntax.y"
             { (yyval.exprdata_) = make_SomeExprData((yyvsp[0].expr_)); result->exprdata_ = (yyval.exprdata_); }
#line 2278 "Parser.c"
    break;

  case 45: /* Pattern: Pattern _KW_cast _KW_as Type  */
#line 586 "Syntax.y"
                                       { (yyval.pattern_) = make_PatternCastAs((yyvsp[-3].pattern_), (yyvsp[0].type_)); result->pattern_ = (yyval.pattern_); }
#line 2284 "Parser.c"
    break;

  case 46: /* Pattern: Pattern _KW_as Type  */
#line 587 "Syntax.y"
                        { (yyval.pattern_) = make_PatternAsc((yyvsp[-2].pattern_), (yyvsp[0].type_)); result->pattern_ = (yyval.pattern_); }
#line 2290 "Parser.c"
    break;

  case 47: /* Pattern: _SYMB_13 T_StellaIdent PatternData _SYMB_14  */
#line 588 "Syntax.y"
                                                { (yyval.pattern_) = make_PatternVariant((yyvsp[-2]._string), (yyvsp[-1].patterndata_)); result->pattern_ = (yyval.pattern_); }
#line 2296 "Parser.c"
    break;

  case 48: /* Pattern: _KW_inl _LPAREN Pattern _RPAREN  */
#line 589 "Syntax.y"
                                    { (yyval.pattern_) = make_PatternInl((yyvsp[-1].pattern_)); result->pattern_ = (yyval.pattern_); }
#line 2302 "Parser.c"
    break;

  case 49: /* Pattern: _KW_inr _LPAREN Pattern _RPAREN  */
#line 590 "Syntax.y"
                                    { (yyval.pattern_) = make_PatternInr((yyvsp[-1].pattern_)); result->pattern_ = (yyval.pattern_); }
#line 2308 "Parser.c"
    break;

  case 50: /* Pattern: _LBRACE ListPattern _RBRACE  */
#line 591 "Syntax.y"
                                { (yyval.pattern_) = make_PatternTuple((yyvsp[-1].listpattern_)); result->pattern_ = (yyval.pattern_); }
#line 2314 "Parser.c"
    break;

  case 51: /* Pattern: _LBRACE ListLabelledPattern _RBRACE  */
#line 592 "Syntax.y"
                                        { (yyval.pattern_) = make_PatternRecord((yyvsp[-1].listlabelledpattern_)); result->pattern_ = (yyval.pattern_); }
#line 2320 "Parser.c"
    break;

  case 52: /* Pattern: _LBRACK ListPattern _RBRACK  */
#line 593 "Syntax.y"
                                { (yyval.pattern_) = make_PatternList((yyvsp[-1].listpattern_)); result->pattern_ = (yyval.pattern_); }
#line 2326 "Parser.c"
    break;

  case 53: /* Pattern: _KW_cons _LPAREN Pattern _COMMA Pattern _RPAREN  */
#line 594 "Syntax.y"
                                                    { (yyval.pattern_) = make_PatternCons((yyvsp[-3].pattern_), (yyvsp[-1].pattern_)); result->pattern_ = (yyval.pattern_); }
#line 2332 "Parser.c"
    break;

  case 54: /* Pattern: _LPAREN Pattern _COMMA Pattern _RPAREN  */
#line 595 "Syntax.y"
                                           { (yyval.pattern_) = make_patternCons((yyvsp[-3].pattern_), (yyvsp[-1].pattern_)); result->pattern_ = (yyval.pattern_); }
#line 2338 "Parser.c"
    break;

  case 55: /* Pattern: _KW_false  */
#line 596 "Syntax.y"
              { (yyval.pattern_) = make_PatternFalse(); result->pattern_ = (yyval.pattern_); }
#line 2344 "Parser.c"
    break;

  case 56: /* Pattern: _KW_true  */
#line 597 "Syntax.y"
             { (yyval.pattern_) = make_PatternTrue(); result->pattern_ = (yyval.pattern_); }
#line 2350 "Parser.c"
    break;

  case 57: /* Pattern: _KW_unit  */
#line 598 "Syntax.y"
             { (yyval.pattern_) = make_PatternUnit(); result->pattern_ = (yyval.pattern_); }
#line 2356 "Parser.c"
    break;

  case 58: /* Pattern: _INTEGER_  */
#line 599 "Syntax.y"
              { (yyval.pattern_) = make_PatternInt((yyvsp[0]._int)); result->pattern_ = (yyval.pattern_); }
#line 2362 "Parser.c"
    break;

  case 59: /* Pattern: _KW_succ _LPAREN Pattern _RPAREN  */
#line 600 "Syntax.y"
                                     { (yyval.pattern_) = make_PatternSucc((yyvsp[-1].pattern_)); result->pattern_ = (yyval.pattern_); }
#line 2368 "Parser.c"
    break;

  case 60: /* Pattern: T_StellaIdent  */
#line 601 "Syntax.y"
                  { (yyval.pattern_) = make_PatternVar((yyvsp[0]._string)); result->pattern_ = (yyval.pattern_); }
#line 2374 "Parser.c"
    break;

  case 61: /* Pattern: _LPAREN Pattern _RPAREN  */
#line 602 "Syntax.y"
                            { (yyval.pattern_) = (yyvsp[-1].pattern_); result->pattern_ = (yyval.pattern_); }
#line 2380 "Parser.c"
    break;

  case 62: /* ListPattern: %empty  */
#line 604 "Syntax.y"
                          { (yyval.listpattern_) = 0; result->listpattern_ = (yyval.listpattern_); }
#line 2386 "Parser.c"
    break;

  case 63: /* ListPattern: Pattern  */
#line 605 "Syntax.y"
            { (yyval.listpattern_) = make_ListPattern((yyvsp[0].pattern_), 0); result->listpattern_ = (yyval.listpattern_); }
#line 2392 "Parser.c"
    break;

  case 64: /* ListPattern: Pattern _COMMA ListPattern  */
#line 606 "Syntax.y"
                               { (yyval.listpattern_) = make_ListPattern((yyvsp[-2].pattern_), (yyvsp[0].listpattern_)); result->listpattern_ = (yyval.listpattern_); }
#line 2398 "Parser.c"
    break;

  case 65: /* LabelledPattern: T_StellaIdent _EQ Pattern  */
#line 608 "Syntax.y"
                                            { (yyval.labelledpattern_) = make_ALabelledPattern((yyvsp[-2]._string), (yyvsp[0].pattern_)); result->labelledpattern_ = (yyval.labelledpattern_); }
#line 2404 "Parser.c"
    break;

  case 66: /* ListLabelledPattern: LabelledPattern  */
#line 610 "Syntax.y"
                                      { (yyval.listlabelledpattern_) = make_ListLabelledPattern((yyvsp[0].labelledpattern_), 0); result->listlabelledpattern_ = (yyval.listlabelledpattern_); }
#line 2410 "Parser.c"
    break;

  case 67: /* ListLabelledPattern: LabelledPattern _COMMA ListLabelledPattern  */
#line 611 "Syntax.y"
                                               { (yyval.listlabelledpattern_) = make_ListLabelledPattern((yyvsp[-2].labelledpattern_), (yyvsp[0].listlabelledpattern_)); result->listlabelledpattern_ = (yyval.listlabelledpattern_); }
#line 2416 "Parser.c"
    break;

  case 68: /* Binding: T_StellaIdent _EQ Expr  */
#line 613 "Syntax.y"
                                 { (yyval.binding_) = make_ABinding((yyvsp[-2]._string), (yyvsp[0].expr_)); result->binding_ = (yyval.binding_); }
#line 2422 "Parser.c"
    break;

  case 69: /* ListBinding: Binding  */
#line 615 "Syntax.y"
                      { (yyval.listbinding_) = make_ListBinding((yyvsp[0].binding_), 0); result->listbinding_ = (yyval.listbinding_); }
#line 2428 "Parser.c"
    break;

  case 70: /* ListBinding: Binding _COMMA ListBinding  */
#line 616 "Syntax.y"
                               { (yyval.listbinding_) = make_ListBinding((yyvsp[-2].binding_), (yyvsp[0].listbinding_)); result->listbinding_ = (yyval.listbinding_); }
#line 2434 "Parser.c"
    break;

  case 71: /* Expr: Expr1 _SEMI Expr  */
#line 618 "Syntax.y"
                        { (yyval.expr_) = make_Sequence((yyvsp[-2].expr_), (yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 2440 "Parser.c"
    break;

  case 72: /* Expr: Expr1 _SEMI  */
#line 619 "Syntax.y"
                { (yyval.expr_) = (yyvsp[-1].expr_); result->expr_ = (yyval.expr_); }
#line 2446 "Parser.c"
    break;

  case 73: /* Expr: _KW_let ListPatternBinding _KW_in Expr  */
#line 620 "Syntax.y"
                                           { (yyval.expr_) = make_Let((yyvsp[-2].listpatternbinding_), (yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 2452 "Parser.c"
    break;

  case 74: /* Expr: _KW_letrec ListPatternBinding _KW_in Expr  */
#line 621 "Syntax.y"
                                              { (yyval.expr_) = make_LetRec((yyvsp[-2].listpatternbinding_), (yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 2458 "Parser.c"
    break;

  case 75: /* Expr: _KW_letm _LBRACK Modality _COMMA Modality _RBRACK ListPatternBinding _KW_in Expr  */
#line 622 "Syntax.y"
                                                                                     { (yyval.expr_) = make_ModLet((yyvsp[-6].modality_), (yyvsp[-4].modality_), (yyvsp[-2].listpatternbinding_), (yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 2464 "Parser.c"
    break;

  case 76: /* Expr: _KW_generic _LBRACK ListStellaIdent _RBRACK Expr  */
#line 623 "Syntax.y"
                                                     { (yyval.expr_) = make_TypeAbstraction((yyvsp[-2].liststellaident_), (yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 2470 "Parser.c"
    break;

  case 77: /* Expr: Expr1  */
#line 624 "Syntax.y"
          { (yyval.expr_) = (yyvsp[0].expr_); result->expr_ = (yyval.expr_); }
#line 2476 "Parser.c"
    break;

  case 78: /* ListExpr: %empty  */
#line 626 "Syntax.y"
                       { (yyval.listexpr_) = 0; result->listexpr_ = (yyval.listexpr_); }
#line 2482 "Parser.c"
    break;

  case 79: /* ListExpr: Expr  */
#line 627 "Syntax.y"
         { (yyval.listexpr_) = make_ListExpr((yyvsp[0].expr_), 0); result->listexpr_ = (yyval.listexpr_); }
#line 2488 "Parser.c"
    break;

  case 80: /* ListExpr: Expr _COMMA ListExpr  */
#line 628 "Syntax.y"
                         { (yyval.listexpr_) = make_ListExpr((yyvsp[-2].expr_), (yyvsp[0].listexpr_)); result->listexpr_ = (yyval.listexpr_); }
#line 2494 "Parser.c"
    break;

  case 81: /* Expr1: Expr2 _COLONEQ Expr1  */
#line 630 "Syntax.y"
                             { (yyval.expr_) = make_Assign((yyvsp[-2].expr_), (yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 2500 "Parser.c"
    break;

  case 82: /* Expr1: _KW_if Expr1 _KW_then Expr1 _KW_else Expr1  */
#line 631 "Syntax.y"
                                               { (yyval.expr_) = make_If((yyvsp[-4].expr_), (yyvsp[-2].expr_), (yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 2506 "Parser.c"
    break;

  case 83: /* Expr1: Expr2  */
#line 632 "Syntax.y"
          { (yyval.expr_) = (yyvsp[0].expr_); result->expr_ = (yyval.expr_); }
#line 2512 "Parser.c"
    break;

  case 84: /* PatternBinding: Pattern _EQ Expr  */
#line 634 "Syntax.y"
                                  { (yyval.patternbinding_) = make_APatternBinding((yyvsp[-2].pattern_), (yyvsp[0].expr_)); result->patternbinding_ = (yyval.patternbinding_); }
#line 2518 "Parser.c"
    break;

  case 85: /* ListPatternBinding: PatternBinding  */
#line 636 "Syntax.y"
                                    { (yyval.listpatternbinding_) = make_ListPatternBinding((yyvsp[0].patternbinding_), 0); result->listpatternbinding_ = (yyval.listpatternbinding_); }
#line 2524 "Parser.c"
    break;

  case 86: /* ListPatternBinding: PatternBinding _COMMA ListPatternBinding  */
#line 637 "Syntax.y"
                                             { (yyval.listpatternbinding_) = make_ListPatternBinding((yyvsp[-2].patternbinding_), (yyvsp[0].listpatternbinding_)); result->listpatternbinding_ = (yyval.listpatternbinding_); }
#line 2530 "Parser.c"
    break;

  case 87: /* Expr2: Expr3 _LT Expr3  */
#line 639 "Syntax.y"
                        { (yyval.expr_) = make_LessThan((yyvsp[-2].expr_), (yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 2536 "Parser.c"
    break;

  case 88: /* Expr2: Expr3 _LDARROW Expr3  */
#line 640 "Syntax.y"
                         { (yyval.expr_) = make_LessThanOrEqual((yyvsp[-2].expr_), (yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 2542 "Parser.c"
    break;

  case 89: /* Expr2: Expr3 _GT Expr3  */
#line 641 "Syntax.y"
                    { (yyval.expr_) = make_GreaterThan((yyvsp[-2].expr_), (yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 2548 "Parser.c"
    break;

  case 90: /* Expr2: Expr3 _GTEQ Expr3  */
#line 642 "Syntax.y"
                      { (yyval.expr_) = make_GreaterThanOrEqual((yyvsp[-2].expr_), (yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 2554 "Parser.c"
    break;

  case 91: /* Expr2: Expr3 _DEQ Expr3  */
#line 643 "Syntax.y"
                     { (yyval.expr_) = make_Equal((yyvsp[-2].expr_), (yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 2560 "Parser.c"
    break;

  case 92: /* Expr2: Expr3 _BANGEQ Expr3  */
#line 644 "Syntax.y"
                        { (yyval.expr_) = make_NotEqual((yyvsp[-2].expr_), (yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 2566 "Parser.c"
    break;

  case 93: /* Expr2: Expr3  */
#line 645 "Syntax.y"
          { (yyval.expr_) = (yyvsp[0].expr_); result->expr_ = (yyval.expr_); }
#line 2572 "Parser.c"
    break;

  case 94: /* LabelledEffect: T_StellaIdent _COLON Type  */
#line 650 "Syntax.y"
                                           { (yyval.labelledeffect_) = make_ALabelledEffect((yyvsp[-2]._string), (yyvsp[0].type_)); result->labelledeffect_ = (yyval.labelledeffect_); }
#line 2578 "Parser.c"
    break;

  case 95: /* ListLabelledEffect: %empty  */
#line 652 "Syntax.y"
                                 { (yyval.listlabelledeffect_) = 0; result->listlabelledeffect_ = (yyval.listlabelledeffect_); }
#line 2584 "Parser.c"
    break;

  case 96: /* ListLabelledEffect: LabelledEffect  */
#line 653 "Syntax.y"
                   { (yyval.listlabelledeffect_) = make_ListLabelledEffect((yyvsp[0].labelledeffect_), 0); result->listlabelledeffect_ = (yyval.listlabelledeffect_); }
#line 2590 "Parser.c"
    break;

  case 97: /* ListLabelledEffect: LabelledEffect _COMMA ListLabelledEffect  */
#line 654 "Syntax.y"
                                             { (yyval.listlabelledeffect_) = make_ListLabelledEffect((yyvsp[-2].labelledeffect_), (yyvsp[0].listlabelledeffect_)); result->listlabelledeffect_ = (yyval.listlabelledeffect_); }
#line 2596 "Parser.c"
    break;

  case 98: /* Modality: _KW_lock  */
#line 656 "Syntax.y"
                    { (yyval.modality_) = make_ModalityLock(); result->modality_ = (yyval.modality_); }
#line 2602 "Parser.c"
    break;

  case 99: /* Modality: _KW_abs _LT ListLabelledEffect _GT  */
#line 657 "Syntax.y"
                                       { (yyval.modality_) = make_ModalityAbs((yyvsp[-1].listlabelledeffect_)); result->modality_ = (yyval.modality_); }
#line 2608 "Parser.c"
    break;

  case 100: /* Modality: _KW_rel _LT ListStellaIdent _BAR ListLabelledEffect _GT  */
#line 658 "Syntax.y"
                                                            { (yyval.modality_) = make_ModalityRel((yyvsp[-3].liststellaident_), (yyvsp[-1].listlabelledeffect_)); result->modality_ = (yyval.modality_); }
#line 2614 "Parser.c"
    break;

  case 101: /* ListModality: Modality  */
#line 660 "Syntax.y"
                        { (yyval.listmodality_) = make_ListModality((yyvsp[0].modality_), 0); result->listmodality_ = (yyval.listmodality_); }
#line 2620 "Parser.c"
    break;

  case 102: /* ListModality: Modality _COMMA ListModality  */
#line 661 "Syntax.y"
                                 { (yyval.listmodality_) = make_ListModality((yyvsp[-2].modality_), (yyvsp[0].listmodality_)); result->listmodality_ = (yyval.listmodality_); }
#line 2626 "Parser.c"
    break;

  case 103: /* Expr3: Expr3 _KW_as Type2  */
#line 663 "Syntax.y"
                           { (yyval.expr_) = make_TypeAsc((yyvsp[-2].expr_), (yyvsp[0].type_)); result->expr_ = (yyval.expr_); }
#line 2632 "Parser.c"
    break;

  case 104: /* Expr3: Expr3 _KW_cast _KW_as Type2  */
#line 664 "Syntax.y"
                                { (yyval.expr_) = make_TypeCast((yyvsp[-3].expr_), (yyvsp[0].type_)); result->expr_ = (yyval.expr_); }
#line 2638 "Parser.c"
    break;

  case 105: /* Expr3: _KW_fn _LPAREN ListParamDecl _RPAREN _LBRACE _KW_return Expr _RBRACE  */
#line 665 "Syntax.y"
                                                                         { (yyval.expr_) = make_Abstraction((yyvsp[-5].listparamdecl_), (yyvsp[-1].expr_)); result->expr_ = (yyval.expr_); }
#line 2644 "Parser.c"
    break;

  case 106: /* Expr3: _KW_mod _LBRACK Modality _RBRACK _LBRACE Expr _RBRACE  */
#line 666 "Syntax.y"
                                                          { (yyval.expr_) = make_ModBox((yyvsp[-4].modality_), (yyvsp[-1].expr_)); result->expr_ = (yyval.expr_); }
#line 2650 "Parser.c"
    break;

  case 107: /* Expr3: _SYMB_13 T_StellaIdent ExprData _SYMB_14  */
#line 667 "Syntax.y"
                                             { (yyval.expr_) = make_Variant((yyvsp[-2]._string), (yyvsp[-1].exprdata_)); result->expr_ = (yyval.expr_); }
#line 2656 "Parser.c"
    break;

  case 108: /* Expr3: _KW_match Expr2 _LBRACE ListMatchCase _RBRACE  */
#line 668 "Syntax.y"
                                                  { (yyval.expr_) = make_Match((yyvsp[-3].expr_), (yyvsp[-1].listmatchcase_)); result->expr_ = (yyval.expr_); }
#line 2662 "Parser.c"
    break;

  case 109: /* Expr3: _LBRACK ListExpr _RBRACK  */
#line 669 "Syntax.y"
                             { (yyval.expr_) = make_List((yyvsp[-1].listexpr_)); result->expr_ = (yyval.expr_); }
#line 2668 "Parser.c"
    break;

  case 110: /* Expr3: Expr3 _PLUS Expr4  */
#line 670 "Syntax.y"
                      { (yyval.expr_) = make_Add((yyvsp[-2].expr_), (yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 2674 "Parser.c"
    break;

  case 111: /* Expr3: Expr3 _MINUS Expr4  */
#line 671 "Syntax.y"
                       { (yyval.expr_) = make_Subtract((yyvsp[-2].expr_), (yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 2680 "Parser.c"
    break;

  case 112: /* Expr3: Expr3 _KW_or Expr4  */
#line 672 "Syntax.y"
                       { (yyval.expr_) = make_LogicOr((yyvsp[-2].expr_), (yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 2686 "Parser.c"
    break;

  case 113: /* Expr3: Expr4  */
#line 673 "Syntax.y"
          { (yyval.expr_) = (yyvsp[0].expr_); result->expr_ = (yyval.expr_); }
#line 2692 "Parser.c"
    break;

  case 114: /* Expr4: Expr4 _STAR Expr5  */
#line 675 "Syntax.y"
                          { (yyval.expr_) = make_Multiply((yyvsp[-2].expr_), (yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 2698 "Parser.c"
    break;

  case 115: /* Expr4: Expr4 _SLASH Expr5  */
#line 676 "Syntax.y"
                       { (yyval.expr_) = make_Divide((yyvsp[-2].expr_), (yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 2704 "Parser.c"
    break;

  case 116: /* Expr4: Expr4 _KW_and Expr5  */
#line 677 "Syntax.y"
                        { (yyval.expr_) = make_LogicAnd((yyvsp[-2].expr_), (yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 2710 "Parser.c"
    break;

  case 117: /* Expr4: Expr5  */
#line 678 "Syntax.y"
          { (yyval.expr_) = (yyvsp[0].expr_); result->expr_ = (yyval.expr_); }
#line 2716 "Parser.c"
    break;

  case 118: /* Expr5: _KW_new _LPAREN Expr _RPAREN  */
#line 680 "Syntax.y"
                                     { (yyval.expr_) = make_Ref((yyvsp[-1].expr_)); result->expr_ = (yyval.expr_); }
#line 2722 "Parser.c"
    break;

  case 119: /* Expr5: _STAR Expr5  */
#line 681 "Syntax.y"
                { (yyval.expr_) = make_Deref((yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 2728 "Parser.c"
    break;

  case 120: /* Expr5: Expr6  */
#line 682 "Syntax.y"
          { (yyval.expr_) = (yyvsp[0].expr_); result->expr_ = (yyval.expr_); }
#line 2734 "Parser.c"
    break;

  case 121: /* Expr6: Expr6 _LPAREN ListExpr _RPAREN  */
#line 684 "Syntax.y"
                                       { (yyval.expr_) = make_Application((yyvsp[-3].expr_), (yyvsp[-1].listexpr_)); result->expr_ = (yyval.expr_); }
#line 2740 "Parser.c"
    break;

  case 122: /* Expr6: Expr6 _LBRACK ListType _RBRACK  */
#line 685 "Syntax.y"
                                   { (yyval.expr_) = make_TypeApplication((yyvsp[-3].expr_), (yyvsp[-1].listtype_)); result->expr_ = (yyval.expr_); }
#line 2746 "Parser.c"
    break;

  case 123: /* Expr6: Expr6 _DOT T_StellaIdent  */
#line 686 "Syntax.y"
                             { (yyval.expr_) = make_DotRecord((yyvsp[-2].expr_), (yyvsp[0]._string)); result->expr_ = (yyval.expr_); }
#line 2752 "Parser.c"
    break;

  case 124: /* Expr6: Expr6 _DOT _INTEGER_  */
#line 687 "Syntax.y"
                         { (yyval.expr_) = make_DotTuple((yyvsp[-2].expr_), (yyvsp[0]._int)); result->expr_ = (yyval.expr_); }
#line 2758 "Parser.c"
    break;

  case 125: /* Expr6: _LBRACE ListExpr _RBRACE  */
#line 688 "Syntax.y"
                             { (yyval.expr_) = make_Tuple((yyvsp[-1].listexpr_)); result->expr_ = (yyval.expr_); }
#line 2764 "Parser.c"
    break;

  case 126: /* Expr6: _LBRACE ListBinding _RBRACE  */
#line 689 "Syntax.y"
                                { (yyval.expr_) = make_Record((yyvsp[-1].listbinding_)); result->expr_ = (yyval.expr_); }
#line 2770 "Parser.c"
    break;

  case 127: /* Expr6: _KW_cons _LPAREN Expr _COMMA Expr _RPAREN  */
#line 690 "Syntax.y"
                                              { (yyval.expr_) = make_ConsList((yyvsp[-3].expr_), (yyvsp[-1].expr_)); result->expr_ = (yyval.expr_); }
#line 2776 "Parser.c"
    break;

  case 128: /* Expr6: _SYMB_27 _LPAREN Expr _RPAREN  */
#line 691 "Syntax.y"
                                  { (yyval.expr_) = make_Head((yyvsp[-1].expr_)); result->expr_ = (yyval.expr_); }
#line 2782 "Parser.c"
    break;

  case 129: /* Expr6: _SYMB_28 _LPAREN Expr _RPAREN  */
#line 692 "Syntax.y"
                                  { (yyval.expr_) = make_IsEmpty((yyvsp[-1].expr_)); result->expr_ = (yyval.expr_); }
#line 2788 "Parser.c"
    break;

  case 130: /* Expr6: _SYMB_29 _LPAREN Expr _RPAREN  */
#line 693 "Syntax.y"
                                  { (yyval.expr_) = make_Tail((yyvsp[-1].expr_)); result->expr_ = (yyval.expr_); }
#line 2794 "Parser.c"
    break;

  case 131: /* Expr6: _SYMB_30  */
#line 694 "Syntax.y"
             { (yyval.expr_) = make_Panic(); result->expr_ = (yyval.expr_); }
#line 2800 "Parser.c"
    break;

  case 132: /* Expr6: _KW_throw _LPAREN Expr _RPAREN  */
#line 695 "Syntax.y"
                                   { (yyval.expr_) = make_Throw((yyvsp[-1].expr_)); result->expr_ = (yyval.expr_); }
#line 2806 "Parser.c"
    break;

  case 133: /* Expr6: _KW_try _LBRACE Expr _RBRACE _KW_catch _LBRACE Pattern _RDARROW Expr _RBRACE  */
#line 696 "Syntax.y"
                                                                                 { (yyval.expr_) = make_TryCatch((yyvsp[-7].expr_), (yyvsp[-3].pattern_), (yyvsp[-1].expr_)); result->expr_ = (yyval.expr_); }
#line 2812 "Parser.c"
    break;

  case 134: /* Expr6: _KW_try _LBRACE Expr _RBRACE _KW_with _LBRACE Expr _RBRACE  */
#line 697 "Syntax.y"
                                                               { (yyval.expr_) = make_TryWith((yyvsp[-5].expr_), (yyvsp[-1].expr_)); result->expr_ = (yyval.expr_); }
#line 2818 "Parser.c"
    break;

  case 135: /* Expr6: _KW_try _LBRACE Expr _RBRACE _KW_cast _KW_as Type _LBRACE Pattern _RDARROW Expr _RBRACE _KW_with _LBRACE Expr _RBRACE  */
#line 698 "Syntax.y"
                                                                                                                          { (yyval.expr_) = make_TryCastAs((yyvsp[-13].expr_), (yyvsp[-9].type_), (yyvsp[-7].pattern_), (yyvsp[-5].expr_), (yyvsp[-1].expr_)); result->expr_ = (yyval.expr_); }
#line 2824 "Parser.c"
    break;

  case 136: /* Expr6: _KW_inl _LPAREN Expr _RPAREN  */
#line 699 "Syntax.y"
                                 { (yyval.expr_) = make_Inl((yyvsp[-1].expr_)); result->expr_ = (yyval.expr_); }
#line 2830 "Parser.c"
    break;

  case 137: /* Expr6: _KW_inr _LPAREN Expr _RPAREN  */
#line 700 "Syntax.y"
                                 { (yyval.expr_) = make_Inr((yyvsp[-1].expr_)); result->expr_ = (yyval.expr_); }
#line 2836 "Parser.c"
    break;

  case 138: /* Expr6: _KW_succ _LPAREN Expr _RPAREN  */
#line 701 "Syntax.y"
                                  { (yyval.expr_) = make_Succ((yyvsp[-1].expr_)); result->expr_ = (yyval.expr_); }
#line 2842 "Parser.c"
    break;

  case 139: /* Expr6: _KW_not _LPAREN Expr _RPAREN  */
#line 702 "Syntax.y"
                                 { (yyval.expr_) = make_LogicNot((yyvsp[-1].expr_)); result->expr_ = (yyval.expr_); }
#line 2848 "Parser.c"
    break;

  case 140: /* Expr6: _SYMB_31 _LPAREN Expr _RPAREN  */
#line 703 "Syntax.y"
                                  { (yyval.expr_) = make_Pred((yyvsp[-1].expr_)); result->expr_ = (yyval.expr_); }
#line 2854 "Parser.c"
    break;

  case 141: /* Expr6: _SYMB_32 _LPAREN Expr _RPAREN  */
#line 704 "Syntax.y"
                                  { (yyval.expr_) = make_IsZero((yyvsp[-1].expr_)); result->expr_ = (yyval.expr_); }
#line 2860 "Parser.c"
    break;

  case 142: /* Expr6: _KW_do T_StellaIdent _LPAREN Expr _RPAREN  */
#line 705 "Syntax.y"
                                              { (yyval.expr_) = make_ModDo((yyvsp[-3]._string), (yyvsp[-1].expr_)); result->expr_ = (yyval.expr_); }
#line 2866 "Parser.c"
    break;

  case 143: /* Expr6: _KW_handle _LBRACE Expr _RBRACE _KW_with _LBRACE ListHandler _RBRACE  */
#line 706 "Syntax.y"
                                                                         { (yyval.expr_) = make_ModHandle((yyvsp[-5].expr_), (yyvsp[-1].listhandler_)); result->expr_ = (yyval.expr_); }
#line 2872 "Parser.c"
    break;

  case 144: /* Expr6: _KW_fix _LPAREN Expr _RPAREN  */
#line 707 "Syntax.y"
                                 { (yyval.expr_) = make_Fix((yyvsp[-1].expr_)); result->expr_ = (yyval.expr_); }
#line 2878 "Parser.c"
    break;

  case 145: /* Expr6: _SYMB_33 _LPAREN Expr _COMMA Expr _COMMA Expr _RPAREN  */
#line 708 "Syntax.y"
                                                          { (yyval.expr_) = make_NatRec((yyvsp[-5].expr_), (yyvsp[-3].expr_), (yyvsp[-1].expr_)); result->expr_ = (yyval.expr_); }
#line 2884 "Parser.c"
    break;

  case 146: /* Expr6: _KW_fold _LBRACK Type _RBRACK Expr7  */
#line 709 "Syntax.y"
                                        { (yyval.expr_) = make_Fold((yyvsp[-2].type_), (yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 2890 "Parser.c"
    break;

  case 147: /* Expr6: _KW_unfold _LBRACK Type _RBRACK Expr7  */
#line 710 "Syntax.y"
                                          { (yyval.expr_) = make_Unfold((yyvsp[-2].type_), (yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 2896 "Parser.c"
    break;

  case 148: /* Expr6: Expr7  */
#line 711 "Syntax.y"
          { (yyval.expr_) = (yyvsp[0].expr_); result->expr_ = (yyval.expr_); }
#line 2902 "Parser.c"
    break;

  case 149: /* Expr7: _KW_true  */
#line 713 "Syntax.y"
                 { (yyval.expr_) = make_ConstTrue(); result->expr_ = (yyval.expr_); }
#line 2908 "Parser.c"
    break;

  case 150: /* Expr7: _KW_false  */
#line 714 "Syntax.y"
              { (yyval.expr_) = make_ConstFalse(); result->expr_ = (yyval.expr_); }
#line 2914 "Parser.c"
    break;

  case 151: /* Expr7: _KW_unit  */
#line 715 "Syntax.y"
             { (yyval.expr_) = make_ConstUnit(); result->expr_ = (yyval.expr_); }
#line 2920 "Parser.c"
    break;

  case 152: /* Expr7: _INTEGER_  */
#line 716 "Syntax.y"
              { (yyval.expr_) = make_ConstInt((yyvsp[0]._int)); result->expr_ = (yyval.expr_); }
#line 2926 "Parser.c"
    break;

  case 153: /* Expr7: T_MemoryAddress  */
#line 717 "Syntax.y"
                    { (yyval.expr_) = make_ConstMemory((yyvsp[0]._string)); result->expr_ = (yyval.expr_); }
#line 2932 "Parser.c"
    break;

  case 154: /* Expr7: T_StellaIdent  */
#line 718 "Syntax.y"
                  { (yyval.expr_) = make_Var((yyvsp[0]._string)); result->expr_ = (yyval.expr_); }
#line 2938 "Parser.c"
    break;

  case 155: /* Expr7: _LPAREN Expr _RPAREN  */
#line 719 "Syntax.y"
                         { (yyval.expr_) = (yyvsp[-1].expr_); result->expr_ = (yyval.expr_); }
#line 2944 "Parser.c"
    break;

  case 156: /* Handler: _KW_return Pattern _RARROW Expr  */
#line 721 "Syntax.y"
                                          { (yyval.handler_) = make_HandlerReturn((yyvsp[-2].pattern_), (yyvsp[0].expr_)); result->handler_ = (yyval.handler_); }
#line 2950 "Parser.c"
    break;

  case 157: /* Handler: _LPAREN LabelledEffect _COMMA Pattern _COMMA T_StellaIdent _RPAREN _RARROW Expr  */
#line 722 "Syntax.y"
                                                                                    { (yyval.handler_) = make_HandlerLabel((yyvsp[-7].labelledeffect_), (yyvsp[-5].pattern_), (yyvsp[-3]._string), (yyvsp[0].expr_)); result->handler_ = (yyval.handler_); }
#line 2956 "Parser.c"
    break;

  case 158: /* ListHandler: %empty  */
#line 724 "Syntax.y"
                          { (yyval.listhandler_) = 0; result->listhandler_ = (yyval.listhandler_); }
#line 2962 "Parser.c"
    break;

  case 159: /* ListHandler: Handler  */
#line 725 "Syntax.y"
            { (yyval.listhandler_) = make_ListHandler((yyvsp[0].handler_), 0); result->listhandler_ = (yyval.listhandler_); }
#line 2968 "Parser.c"
    break;

  case 160: /* ListHandler: Handler _BAR ListHandler  */
#line 726 "Syntax.y"
                             { (yyval.listhandler_) = make_ListHandler((yyvsp[-2].handler_), (yyvsp[0].listhandler_)); result->listhandler_ = (yyval.listhandler_); }
#line 2974 "Parser.c"
    break;

  case 161: /* Type: _LBRACK Modality _RBRACK Type  */
#line 728 "Syntax.y"
                                     { (yyval.type_) = make_TypeMod((yyvsp[-2].modality_), (yyvsp[0].type_)); result->type_ = (yyval.type_); }
#line 2980 "Parser.c"
    break;

  case 162: /* Type: _KW_auto  */
#line 729 "Syntax.y"
             { (yyval.type_) = make_TypeAuto(); result->type_ = (yyval.type_); }
#line 2986 "Parser.c"
    break;

  case 163: /* Type: _KW_fn _LPAREN ListType _RPAREN _RARROW Type  */
#line 730 "Syntax.y"
                                                 { (yyval.type_) = make_TypeFun((yyvsp[-3].listtype_), (yyvsp[0].type_)); result->type_ = (yyval.type_); }
#line 2992 "Parser.c"
    break;

  case 164: /* Type: _KW_forall ListStellaIdent _DOT Type  */
#line 731 "Syntax.y"
                                         { (yyval.type_) = make_TypeForAll((yyvsp[-2].liststellaident_), (yyvsp[0].type_)); result->type_ = (yyval.type_); }
#line 2998 "Parser.c"
    break;

  case 165: /* Type: _KW_87 T_StellaIdent _DOT Type  */
#line 732 "Syntax.y"
                                   { (yyval.type_) = make_TypeRec((yyvsp[-2]._string), (yyvsp[0].type_)); result->type_ = (yyval.type_); }
#line 3004 "Parser.c"
    break;

  case 166: /* Type: Type1  */
#line 733 "Syntax.y"
          { (yyval.type_) = (yyvsp[0].type_); result->type_ = (yyval.type_); }
#line 3010 "Parser.c"
    break;

  case 167: /* Type1: Type2 _PLUS Type2  */
#line 735 "Syntax.y"
                          { (yyval.type_) = make_TypeSum((yyvsp[-2].type_), (yyvsp[0].type_)); result->type_ = (yyval.type_); }
#line 3016 "Parser.c"
    break;

  case 168: /* Type1: Type2  */
#line 736 "Syntax.y"
          { (yyval.type_) = (yyvsp[0].type_); result->type_ = (yyval.type_); }
#line 3022 "Parser.c"
    break;

  case 169: /* Type2: _LBRACE ListType _RBRACE  */
#line 738 "Syntax.y"
                                 { (yyval.type_) = make_TypeTuple((yyvsp[-1].listtype_)); result->type_ = (yyval.type_); }
#line 3028 "Parser.c"
    break;

  case 170: /* Type2: _LBRACE ListRecordFieldType _RBRACE  */
#line 739 "Syntax.y"
                                        { (yyval.type_) = make_TypeRecord((yyvsp[-1].listrecordfieldtype_)); result->type_ = (yyval.type_); }
#line 3034 "Parser.c"
    break;

  case 171: /* Type2: _SYMB_13 ListVariantFieldType _SYMB_14  */
#line 740 "Syntax.y"
                                           { (yyval.type_) = make_TypeVariant((yyvsp[-1].listvariantfieldtype_)); result->type_ = (yyval.type_); }
#line 3040 "Parser.c"
    break;

  case 172: /* Type2: _LBRACK Type _RBRACK  */
#line 741 "Syntax.y"
                         { (yyval.type_) = make_TypeList((yyvsp[-1].type_)); result->type_ = (yyval.type_); }
#line 3046 "Parser.c"
    break;

  case 173: /* Type2: Type3  */
#line 742 "Syntax.y"
          { (yyval.type_) = (yyvsp[0].type_); result->type_ = (yyval.type_); }
#line 3052 "Parser.c"
    break;

  case 174: /* Type3: _KW_Bool  */
#line 744 "Syntax.y"
                 { (yyval.type_) = make_TypeBool(); result->type_ = (yyval.type_); }
#line 3058 "Parser.c"
    break;

  case 175: /* Type3: _KW_Nat  */
#line 745 "Syntax.y"
            { (yyval.type_) = make_TypeNat(); result->type_ = (yyval.type_); }
#line 3064 "Parser.c"
    break;

  case 176: /* Type3: _KW_Unit  */
#line 746 "Syntax.y"
             { (yyval.type_) = make_TypeUnit(); result->type_ = (yyval.type_); }
#line 3070 "Parser.c"
    break;

  case 177: /* Type3: _KW_Top  */
#line 747 "Syntax.y"
            { (yyval.type_) = make_TypeTop(); result->type_ = (yyval.type_); }
#line 3076 "Parser.c"
    break;

  case 178: /* Type3: _KW_Bot  */
#line 748 "Syntax.y"
            { (yyval.type_) = make_TypeBottom(); result->type_ = (yyval.type_); }
#line 3082 "Parser.c"
    break;

  case 179: /* Type3: _AMP Type2  */
#line 749 "Syntax.y"
               { (yyval.type_) = make_TypeRef((yyvsp[0].type_)); result->type_ = (yyval.type_); }
#line 3088 "Parser.c"
    break;

  case 180: /* Type3: T_StellaIdent  */
#line 750 "Syntax.y"
                  { (yyval.type_) = make_TypeVar((yyvsp[0]._string)); result->type_ = (yyval.type_); }
#line 3094 "Parser.c"
    break;

  case 181: /* Type3: _LPAREN Type _RPAREN  */
#line 751 "Syntax.y"
                         { (yyval.type_) = (yyvsp[-1].type_); result->type_ = (yyval.type_); }
#line 3100 "Parser.c"
    break;

  case 182: /* ListType: %empty  */
#line 753 "Syntax.y"
                       { (yyval.listtype_) = 0; result->listtype_ = (yyval.listtype_); }
#line 3106 "Parser.c"
    break;

  case 183: /* ListType: Type  */
#line 754 "Syntax.y"
         { (yyval.listtype_) = make_ListType((yyvsp[0].type_), 0); result->listtype_ = (yyval.listtype_); }
#line 3112 "Parser.c"
    break;

  case 184: /* ListType: Type _COMMA ListType  */
#line 755 "Syntax.y"
                         { (yyval.listtype_) = make_ListType((yyvsp[-2].type_), (yyvsp[0].listtype_)); result->listtype_ = (yyval.listtype_); }
#line 3118 "Parser.c"
    break;

  case 185: /* VariantFieldType: T_StellaIdent OptionalTyping  */
#line 757 "Syntax.y"
                                                { (yyval.variantfieldtype_) = make_AVariantFieldType((yyvsp[-1]._string), (yyvsp[0].optionaltyping_)); result->variantfieldtype_ = (yyval.variantfieldtype_); }
#line 3124 "Parser.c"
    break;

  case 186: /* ListVariantFieldType: %empty  */
#line 759 "Syntax.y"
                                   { (yyval.listvariantfieldtype_) = 0; result->listvariantfieldtype_ = (yyval.listvariantfieldtype_); }
#line 3130 "Parser.c"
    break;

  case 187: /* ListVariantFieldType: VariantFieldType  */
#line 760 "Syntax.y"
                     { (yyval.listvariantfieldtype_) = make_ListVariantFieldType((yyvsp[0].variantfieldtype_), 0); result->listvariantfieldtype_ = (yyval.listvariantfieldtype_); }
#line 3136 "Parser.c"
    break;

  case 188: /* ListVariantFieldType: VariantFieldType _COMMA ListVariantFieldType  */
#line 761 "Syntax.y"
                                                 { (yyval.listvariantfieldtype_) = make_ListVariantFieldType((yyvsp[-2].variantfieldtype_), (yyvsp[0].listvariantfieldtype_)); result->listvariantfieldtype_ = (yyval.listvariantfieldtype_); }
#line 3142 "Parser.c"
    break;

  case 189: /* RecordFieldType: T_StellaIdent _COLON Type  */
#line 763 "Syntax.y"
                                            { (yyval.recordfieldtype_) = make_ARecordFieldType((yyvsp[-2]._string), (yyvsp[0].type_)); result->recordfieldtype_ = (yyval.recordfieldtype_); }
#line 3148 "Parser.c"
    break;

  case 190: /* ListRecordFieldType: RecordFieldType  */
#line 765 "Syntax.y"
                                      { (yyval.listrecordfieldtype_) = make_ListRecordFieldType((yyvsp[0].recordfieldtype_), 0); result->listrecordfieldtype_ = (yyval.listrecordfieldtype_); }
#line 3154 "Parser.c"
    break;

  case 191: /* ListRecordFieldType: RecordFieldType _COMMA ListRecordFieldType  */
#line 766 "Syntax.y"
                                               { (yyval.listrecordfieldtype_) = make_ListRecordFieldType((yyvsp[-2].recordfieldtype_), (yyvsp[0].listrecordfieldtype_)); result->listrecordfieldtype_ = (yyval.listrecordfieldtype_); }
#line 3160 "Parser.c"
    break;


#line 3164 "Parser.c"

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

#line 771 "Syntax.y"



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



