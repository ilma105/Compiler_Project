
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     INT = 258,
     CHAR = 259,
     FLOAT = 260,
     LB = 261,
     RB = 262,
     LP = 263,
     RP = 264,
     COMA = 265,
     SEMI = 266,
     VOIDMAIN = 267,
     ASSIGN = 268,
     UP = 269,
     FABS_FUNC = 270,
     ATAN_FUNC = 271,
     ASIN_FUNC = 272,
     ACOS_FUNC = 273,
     DOWN = 274,
     LTE = 275,
     GTE = 276,
     EQ = 277,
     NOTEQ = 278,
     AND = 279,
     GCD_FUNC = 280,
     LCM_FUNC = 281,
     OR = 282,
     PLUS = 283,
     MINUS = 284,
     MULT = 285,
     DIV = 286,
     LOG = 287,
     GT = 288,
     LT = 289,
     FOR = 290,
     SWITCH = 291,
     GO = 292,
     CASE = 293,
     DEFAULT = 294,
     PRINT = 295,
     COLON = 296,
     WHILE = 297,
     IF = 298,
     IEC = 299,
     ELSE = 300,
     EO_FUNC = 301,
     Multiply_FUNC = 302,
     SUM_FUNC = 303,
     PRIME_FUNC = 304,
     POWER_FUNC = 305,
     Division_FUNC = 306,
     LEAP_FUNC = 307,
     PALINDROME_FUNC = 308,
     FACTORIAL_FUNC = 309,
     SINE_FUNC = 310,
     COSE_FUNC = 311,
     TANE_FUNC = 312,
     COSEC_FUNC = 313,
     COT_FUNC = 314,
     SEC_FUNC = 315,
     EXP_FUNC = 316,
     MOD_FUNC = 317,
     ABS_FUNC = 318,
     ROOT_FUNC = 319,
     VARIABLE = 320,
     FLOATNUMBER = 321,
     INTNUMBER = 322
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 17 "1707105.y"

float floattType ;
int integerType;
char *stringtype;



/* Line 1676 of yacc.c  */
#line 127 "1707105.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


