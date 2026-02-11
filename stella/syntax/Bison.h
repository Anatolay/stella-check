/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_SYNTAX_BISON_H_INCLUDED
# define YY_SYNTAX_BISON_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int syntax_debug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    _ERROR_ = 258,                 /* _ERROR_  */
    _BANGEQ = 259,                 /* _BANGEQ  */
    _AMP = 260,                    /* _AMP  */
    _LPAREN = 261,                 /* _LPAREN  */
    _RPAREN = 262,                 /* _RPAREN  */
    _STAR = 263,                   /* _STAR  */
    _PLUS = 264,                   /* _PLUS  */
    _COMMA = 265,                  /* _COMMA  */
    _MINUS = 266,                  /* _MINUS  */
    _RARROW = 267,                 /* _RARROW  */
    _DOT = 268,                    /* _DOT  */
    _SLASH = 269,                  /* _SLASH  */
    _COLON = 270,                  /* _COLON  */
    _COLONEQ = 271,                /* _COLONEQ  */
    _SEMI = 272,                   /* _SEMI  */
    _LT = 273,                     /* _LT  */
    _LDARROW = 274,                /* _LDARROW  */
    _SYMB_13 = 275,                /* _SYMB_13  */
    _EQ = 276,                     /* _EQ  */
    _DEQ = 277,                    /* _DEQ  */
    _RDARROW = 278,                /* _RDARROW  */
    _GT = 279,                     /* _GT  */
    _GTEQ = 280,                   /* _GTEQ  */
    _KW_Bool = 281,                /* _KW_Bool  */
    _KW_Bot = 282,                 /* _KW_Bot  */
    _SYMB_27 = 283,                /* _SYMB_27  */
    _SYMB_28 = 284,                /* _SYMB_28  */
    _SYMB_29 = 285,                /* _SYMB_29  */
    _KW_Nat = 286,                 /* _KW_Nat  */
    _SYMB_32 = 287,                /* _SYMB_32  */
    _SYMB_31 = 288,                /* _SYMB_31  */
    _SYMB_33 = 289,                /* _SYMB_33  */
    _KW_Top = 290,                 /* _KW_Top  */
    _KW_Unit = 291,                /* _KW_Unit  */
    _LBRACK = 292,                 /* _LBRACK  */
    _RBRACK = 293,                 /* _RBRACK  */
    _KW_abs = 294,                 /* _KW_abs  */
    _KW_and = 295,                 /* _KW_and  */
    _KW_as = 296,                  /* _KW_as  */
    _KW_auto = 297,                /* _KW_auto  */
    _KW_cast = 298,                /* _KW_cast  */
    _KW_catch = 299,               /* _KW_catch  */
    _KW_cons = 300,                /* _KW_cons  */
    _KW_core = 301,                /* _KW_core  */
    _KW_do = 302,                  /* _KW_do  */
    _KW_else = 303,                /* _KW_else  */
    _KW_exception = 304,           /* _KW_exception  */
    _KW_extend = 305,              /* _KW_extend  */
    _KW_false = 306,               /* _KW_false  */
    _KW_fix = 307,                 /* _KW_fix  */
    _KW_fn = 308,                  /* _KW_fn  */
    _KW_fold = 309,                /* _KW_fold  */
    _KW_forall = 310,              /* _KW_forall  */
    _KW_generic = 311,             /* _KW_generic  */
    _KW_handle = 312,              /* _KW_handle  */
    _KW_if = 313,                  /* _KW_if  */
    _KW_in = 314,                  /* _KW_in  */
    _KW_inl = 315,                 /* _KW_inl  */
    _KW_inline = 316,              /* _KW_inline  */
    _KW_inr = 317,                 /* _KW_inr  */
    _KW_language = 318,            /* _KW_language  */
    _KW_let = 319,                 /* _KW_let  */
    _KW_letrec = 320,              /* _KW_letrec  */
    _KW_lock = 321,                /* _KW_lock  */
    _KW_match = 322,               /* _KW_match  */
    _KW_mod = 323,                 /* _KW_mod  */
    _KW_new = 324,                 /* _KW_new  */
    _KW_not = 325,                 /* _KW_not  */
    _KW_or = 326,                  /* _KW_or  */
    _SYMB_30 = 327,                /* _SYMB_30  */
    _KW_rel = 328,                 /* _KW_rel  */
    _KW_return = 329,              /* _KW_return  */
    _KW_succ = 330,                /* _KW_succ  */
    _KW_then = 331,                /* _KW_then  */
    _KW_throw = 332,               /* _KW_throw  */
    _KW_throws = 333,              /* _KW_throws  */
    _KW_true = 334,                /* _KW_true  */
    _KW_try = 335,                 /* _KW_try  */
    _KW_type = 336,                /* _KW_type  */
    _KW_unfold = 337,              /* _KW_unfold  */
    _KW_unit = 338,                /* _KW_unit  */
    _KW_variant = 339,             /* _KW_variant  */
    _KW_with = 340,                /* _KW_with  */
    _LBRACE = 341,                 /* _LBRACE  */
    _BAR = 342,                    /* _BAR  */
    _SYMB_14 = 343,                /* _SYMB_14  */
    _RBRACE = 344,                 /* _RBRACE  */
    _KW_86 = 345,                  /* _KW_86  */
    T_ExtensionName = 346,         /* T_ExtensionName  */
    T_MemoryAddress = 347,         /* T_MemoryAddress  */
    T_StellaIdent = 348,           /* T_StellaIdent  */
    _INTEGER_ = 349                /* _INTEGER_  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 298 "Syntax.y"

  int    _int;
  char   _char;
  double _double;
  char*  _string;
  Program program_;
  ListStellaIdent liststellaident_;
  LanguageDecl languagedecl_;
  Extension extension_;
  ListExtensionName listextensionname_;
  ListExtension listextension_;
  Decl decl_;
  ListDecl listdecl_;
  LocalDecl localdecl_;
  ListLocalDecl listlocaldecl_;
  Annotation annotation_;
  ListAnnotation listannotation_;
  ParamDecl paramdecl_;
  ListParamDecl listparamdecl_;
  ReturnType returntype_;
  ThrowType throwtype_;
  Type type_;
  ListType listtype_;
  MatchCase matchcase_;
  ListMatchCase listmatchcase_;
  OptionalTyping optionaltyping_;
  PatternData patterndata_;
  ExprData exprdata_;
  Pattern pattern_;
  ListPattern listpattern_;
  LabelledPattern labelledpattern_;
  ListLabelledPattern listlabelledpattern_;
  Binding binding_;
  ListBinding listbinding_;
  Expr expr_;
  ListExpr listexpr_;
  PatternBinding patternbinding_;
  ListPatternBinding listpatternbinding_;
  LabelledEffect labelledeffect_;
  ListLabelledEffect listlabelledeffect_;
  Modality modality_;
  ListModality listmodality_;
  Handler handler_;
  ListHandler listhandler_;
  VariantFieldType variantfieldtype_;
  ListVariantFieldType listvariantfieldtype_;
  RecordFieldType recordfieldtype_;
  ListRecordFieldType listrecordfieldtype_;
  Typing typing_;

#line 209 "Bison.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif




int syntax_parse (yyscan_t scanner, YYSTYPE *result);


#endif /* !YY_SYNTAX_BISON_H_INCLUDED  */
