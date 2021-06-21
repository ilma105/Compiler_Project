
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "1707105.y"

#include<stdio.h>
# include <stdarg.h>
# include <string.h>
# include <stdlib.h>
# include <math.h>
int w=0;
struct {
char *s;
float n;
int ni;
}store[1000];
int yylex(void);


/* Line 189 of yacc.c  */
#line 89 "1707105.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


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

/* Line 214 of yacc.c  */
#line 17 "1707105.y"

float floattType ;
int integerType;
char *stringtype;



/* Line 214 of yacc.c  */
#line 200 "1707105.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 212 "1707105.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2091

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  68
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  18
/* YYNRULES -- Number of rules.  */
#define YYNRULES  109
/* YYNRULES -- Number of states.  */
#define YYNSTATES  422

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   322

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
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
      65,    66,    67
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,    10,    11,    14,    17,    21,    25,    27,
      31,    35,    39,    41,    43,    45,    49,    51,    53,    57,
      61,    65,    67,    70,    73,    75,    77,    79,    81,   110,
     163,   171,   184,   204,   212,   225,   245,   248,   261,   274,
     286,   298,   310,   334,   346,   358,   370,   376,   384,   392,
     398,   406,   412,   418,   424,   432,   440,   448,   454,   460,
     468,   474,   480,   486,   492,   498,   504,   507,   512,   517,
     522,   527,   532,   537,   542,   547,   552,   554,   557,   561,
     565,   569,   573,   577,   581,   585,   589,   593,   597,   600,
     603,   607,   611,   615,   617,   619,   623,   627,   631,   635,
     639,   643,   647,   651,   655,   659,   662,   665,   669,   673
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      69,     0,    -1,    12,     8,     9,     6,    70,     7,    -1,
      -1,    70,    77,    -1,    70,    73,    -1,    70,    71,    11,
      -1,    71,    10,    72,    -1,    72,    -1,    65,    13,    66,
      -1,    65,    13,    67,    -1,    74,    75,    11,    -1,     3,
      -1,     5,    -1,     4,    -1,    75,    10,    76,    -1,    76,
      -1,    65,    -1,    65,    13,    66,    -1,    65,    13,    67,
      -1,    65,    13,    65,    -1,    11,    -1,    85,    11,    -1,
      84,    11,    -1,    78,    -1,    79,    -1,    80,    -1,    82,
      -1,    36,    37,    85,     6,    38,    85,    41,    40,     8,
      85,     9,    11,    38,    85,    41,    40,     8,    85,     9,
      11,    39,    41,    40,     8,    85,     9,    11,     7,    -1,
      36,    37,    85,     6,    38,    85,    41,    40,     8,    85,
       9,    11,    38,    85,    41,    40,     8,    85,     9,    11,
      38,    85,    41,    40,     8,    85,     9,    11,    38,    85,
      41,    40,     8,    85,     9,    11,    38,    85,    41,    40,
       8,    85,     9,    11,    39,    41,    40,     8,    85,     9,
      11,     7,    -1,    43,    37,    85,     6,    85,    11,     7,
      -1,    43,    37,    85,     6,    85,    11,     7,    45,     6,
      85,    11,     7,    -1,    43,    37,    85,     6,    85,    11,
       7,    44,    37,    85,     6,    85,    11,     7,    45,     6,
      85,    11,     7,    -1,    43,    37,    84,     6,    84,    11,
       7,    -1,    43,    37,    84,     6,    84,    11,     7,    45,
       6,    84,    11,     7,    -1,    43,    37,    84,     6,    84,
      11,     7,    44,    37,    84,     6,    84,    11,     7,    45,
       6,    84,    11,     7,    -1,    35,    81,    -1,    42,    37,
      85,    34,    85,     6,    85,    13,    85,    28,    85,     7,
      -1,    42,    37,    85,    34,    85,     6,    85,    13,    85,
      30,    85,     7,    -1,    37,    85,    41,    85,     6,    85,
      13,    85,    30,    85,     7,    -1,    37,    85,    41,    85,
       6,    85,    13,    85,    29,    85,     7,    -1,    37,    85,
      41,    85,     6,    85,    13,    85,    28,    85,     7,    -1,
      37,    85,    41,    85,     6,    85,    13,    85,    28,    85,
      43,    37,    85,    33,    85,     6,    85,    13,    85,    30,
      85,     7,     7,    -1,    37,    85,    41,    85,     6,    84,
      13,    84,    30,    84,     7,    -1,    37,    85,    41,    85,
       6,    84,    13,    84,    29,    84,     7,    -1,    37,    85,
      41,    85,     6,    84,    13,    84,    28,    84,     7,    -1,
      46,     8,    85,     9,    11,    -1,    47,     8,    85,    10,
      85,     9,    11,    -1,    48,     8,    85,    10,    85,     9,
      11,    -1,    49,     8,    85,     9,    11,    -1,    50,     8,
      85,    10,    85,     9,    11,    -1,    54,     8,    85,     9,
      11,    -1,    52,     8,    85,     9,    11,    -1,    53,     8,
      85,     9,    11,    -1,    25,     8,    85,    10,    85,     9,
      11,    -1,    26,     8,    85,    10,    85,     9,    11,    -1,
      51,     8,    85,    10,    85,     9,    11,    -1,    63,     8,
      85,     9,    11,    -1,    15,     8,    84,     9,    11,    -1,
      62,     8,    85,    10,    85,     9,    11,    -1,    64,     8,
      85,     9,    11,    -1,    64,     8,    84,     9,    11,    -1,
      61,     8,    84,     9,    11,    -1,    40,     8,    85,     9,
      11,    -1,    40,     8,    84,     9,    11,    -1,    32,     8,
      85,     9,    11,    -1,    83,    11,    -1,    55,     8,    85,
       9,    -1,    56,     8,    85,     9,    -1,    57,     8,    85,
       9,    -1,    59,     8,    85,     9,    -1,    58,     8,    85,
       9,    -1,    60,     8,    85,     9,    -1,    17,     8,    84,
       9,    -1,    18,     8,    84,     9,    -1,    16,     8,    84,
       9,    -1,    66,    -1,    65,    10,    -1,    84,    28,    84,
      -1,    84,    29,    84,    -1,    84,    30,    84,    -1,    84,
      31,    84,    -1,    84,    34,    84,    -1,    84,    33,    84,
      -1,    84,    20,    84,    -1,    84,    21,    84,    -1,    84,
      22,    84,    -1,    84,    23,    84,    -1,    84,    14,    -1,
      84,    19,    -1,    84,    27,    84,    -1,    84,    24,    84,
      -1,     8,    84,     9,    -1,    67,    -1,    65,    -1,    85,
      28,    85,    -1,    85,    29,    85,    -1,    85,    30,    85,
      -1,    85,    31,    85,    -1,    85,    34,    85,    -1,    85,
      33,    85,    -1,    85,    20,    85,    -1,    85,    21,    85,
      -1,    85,    22,    85,    -1,    85,    23,    85,    -1,    85,
      14,    -1,    85,    19,    -1,    85,    27,    85,    -1,    85,
      24,    85,    -1,     8,    85,     9,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    38,    38,    41,    42,    43,    44,    47,    48,    50,
      67,    85,    87,    88,    89,    91,    92,    94,   111,   130,
     149,   151,   152,   153,   154,   155,   156,   157,   159,   175,
     201,   214,   226,   241,   254,   266,   283,   284,   301,   320,
     349,   377,   405,   429,   459,   488,   518,   532,   543,   554,
     574,   580,   590,   598,   614,   626,   638,   651,   657,   663,
     678,   681,   684,   688,   689,   690,   693,   695,   701,   707,
     713,   719,   725,   731,   745,   757,   771,   775,   790,   791,
     792,   793,   803,   804,   805,   806,   807,   808,   809,   810,
     811,   812,   813,   815,   819,   834,   835,   836,   837,   847,
     848,   849,   850,   851,   852,   853,   855,   856,   857,   858
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "CHAR", "FLOAT", "LB", "RB", "LP",
  "RP", "COMA", "SEMI", "VOIDMAIN", "ASSIGN", "UP", "FABS_FUNC",
  "ATAN_FUNC", "ASIN_FUNC", "ACOS_FUNC", "DOWN", "LTE", "GTE", "EQ",
  "NOTEQ", "AND", "GCD_FUNC", "LCM_FUNC", "OR", "PLUS", "MINUS", "MULT",
  "DIV", "LOG", "GT", "LT", "FOR", "SWITCH", "GO", "CASE", "DEFAULT",
  "PRINT", "COLON", "WHILE", "IF", "IEC", "ELSE", "EO_FUNC",
  "Multiply_FUNC", "SUM_FUNC", "PRIME_FUNC", "POWER_FUNC", "Division_FUNC",
  "LEAP_FUNC", "PALINDROME_FUNC", "FACTORIAL_FUNC", "SINE_FUNC",
  "COSE_FUNC", "TANE_FUNC", "COSEC_FUNC", "COT_FUNC", "SEC_FUNC",
  "EXP_FUNC", "MOD_FUNC", "ABS_FUNC", "ROOT_FUNC", "VARIABLE",
  "FLOATNUMBER", "INTNUMBER", "$accept", "project", "projectstatement",
  "assignmentoperation", "first", "vardeclaration", "TYPE", "varr", "ids",
  "otheroperation", "SWITCH_OPERATION", "IF_OPERATION", "LOOP_OPERATION",
  "operation", "ALL_FUNCTIONS", "cone", "floatexpression", "intexpression", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    68,    69,    70,    70,    70,    70,    71,    71,    72,
      72,    73,    74,    74,    74,    75,    75,    76,    76,    76,
      76,    77,    77,    77,    77,    77,    77,    77,    78,    78,
      79,    79,    79,    79,    79,    79,    80,    80,    80,    81,
      81,    81,    81,    81,    81,    81,    82,    82,    82,    82,
      82,    82,    82,    82,    82,    82,    82,    82,    82,    82,
      82,    82,    82,    82,    82,    82,    82,    83,    83,    83,
      83,    83,    83,    83,    83,    83,    84,    84,    84,    84,
      84,    84,    84,    84,    84,    84,    84,    84,    84,    84,
      84,    84,    84,    85,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    85
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     6,     0,     2,     2,     3,     3,     1,     3,
       3,     3,     1,     1,     1,     3,     1,     1,     3,     3,
       3,     1,     2,     2,     1,     1,     1,     1,    28,    52,
       7,    12,    19,     7,    12,    19,     2,    12,    12,    11,
      11,    11,    23,    11,    11,    11,     5,     7,     7,     5,
       7,     5,     5,     5,     7,     7,     7,     5,     5,     7,
       5,     5,     5,     5,     5,     5,     2,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     1,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     2,
       3,     3,     3,     1,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     2,     3,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,     3,     0,    12,    14,
      13,     2,     0,    21,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    94,    76,    93,     0,     8,
       5,     0,     4,    24,    25,    26,    27,     0,     0,     0,
      94,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    36,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    77,     0,     0,     6,    17,
       0,    16,    66,    23,    88,    89,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    22,   105,
     106,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    92,   109,     0,     0,     0,     0,     0,
       0,     0,    94,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     9,    10,     0,     7,     0,     0,    11,
      84,    85,    86,    87,    91,    90,    78,    79,    80,    81,
      83,    82,   101,   102,   103,   104,   108,   107,    95,    96,
      97,    98,   100,    99,     0,    75,    73,    74,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    67,    68,    69,
      71,    70,    72,     0,     0,     0,     0,     0,    20,    18,
      19,    15,    58,     0,     0,    65,     0,     0,    64,    63,
      99,     0,     0,    46,     0,     0,    49,     0,     0,    52,
      53,    51,    62,     0,    57,    61,    60,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    54,
      55,     0,     0,     0,     0,    33,    30,    47,    48,    50,
      56,    59,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    78,    79,    80,    95,    96,    97,     0,    95,    97,
       0,     0,     0,     0,    45,    44,    43,    41,     0,    40,
      39,     0,    37,    38,     0,    34,     0,    31,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     100,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    35,    32,     0,     0,     0,     0,
       0,    97,     0,     0,     0,     0,     0,    42,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    28,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    29
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     7,    48,    49,    50,    51,   100,   101,    52,
      53,    54,    55,    71,    56,    57,    61,    62
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -34
static const yytype_int16 yypact[] =
{
       4,    -1,    18,    27,   -34,    33,   -34,   125,   -34,   -34,
     -34,   -34,    23,   -34,    24,    88,   102,   105,   118,   123,
     151,   -33,    10,   154,    98,   158,   188,   189,   190,   191,
     192,   195,   197,   199,   201,   203,   209,   210,   212,   231,
     234,   236,   237,   239,   241,    20,   -34,   -34,    46,   -34,
     -34,   170,   -34,   -34,   -34,   -34,   -34,   240,  1636,  1657,
     242,   610,   633,    29,    29,    29,    29,    26,    26,    26,
      26,   -34,    26,    23,    26,    23,    26,    26,    26,    26,
      26,    26,    26,    26,    26,    26,    26,    26,    26,    26,
      26,    29,    26,    26,    23,   -34,    37,   196,   -34,   250,
     127,   -34,   -34,   -34,   -34,   -34,    29,    29,    29,    29,
      29,    29,    29,    29,    29,    29,    29,    29,   -34,   -34,
     -34,    26,    26,    26,    26,    26,    26,    26,    26,    26,
      26,    26,    26,   -34,   -34,    29,   242,   656,   679,   702,
     725,    26,   -34,  1483,  1505,   748,   293,    21,   771,   794,
    1931,    78,   392,   817,  1527,  1549,   840,  1571,  1593,   863,
     886,   909,   932,   955,   978,  1001,  1024,  1047,  1070,  1615,
    1093,  1116,  1139,   -34,   -34,   266,   -34,    89,   170,   -34,
      -8,    -8,  1949,  1949,   263,   263,   133,   133,     5,     5,
      -8,    -8,   348,   348,  1967,  1967,   317,   317,   207,   207,
      45,    45,   348,   348,   243,   -34,   -34,   -34,    26,    26,
     269,    26,   249,   270,   278,    26,    29,    26,   287,    26,
      26,   292,    26,    26,   299,   300,   307,   -34,   -34,   -34,
     -34,   -34,   -34,   308,    26,   318,   319,   321,   -34,   -34,
     -34,   -34,   -34,  1162,  1185,   -34,   425,    26,   -34,   -34,
     200,  1678,  1699,   -34,  1208,  1231,   -34,  1254,  1277,   -34,
     -34,   -34,   -34,  1300,   -34,   -34,   -34,   322,   324,    23,
     495,    26,   332,   333,   341,   342,   343,   344,   349,   -34,
     -34,  1847,  1869,   288,  1891,   100,   104,   -34,   -34,   -34,
     -34,   -34,    29,    26,   335,    26,   326,   338,   327,   353,
    1985,  2003,    26,  2021,    29,    29,    26,    26,    29,    29,
      29,    26,    26,    26,  1323,    26,    26,   451,  1720,   477,
    1741,    -2,   139,    -6,    -5,   229,    -4,   350,   271,    39,
      29,   359,    26,   361,   -34,   -34,   -34,   -34,   336,   -34,
     -34,   331,   -34,   -34,  1762,   -34,  1783,   -34,    26,    26,
     363,   367,  2039,   518,   339,   340,    26,   346,   374,   375,
     227,   379,    29,    26,    26,    26,  1804,  1825,  1913,  1346,
     381,   382,    26,   383,   -34,   -34,  2057,   155,    26,    26,
     351,   120,   541,   356,   386,   357,   393,   -34,   394,    26,
      26,  1369,  1392,   389,   396,   397,   352,   -34,    26,   564,
     365,   400,    26,  1415,   398,   380,    26,   587,   377,   416,
      26,  1438,   418,   388,   391,   390,   426,    26,  1461,   422,
     428,   -34
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -34,   -34,   -34,   -34,   345,   -34,   -34,   -34,   258,   -34,
     -34,   -34,   -34,   -34,   -34,   -34,   159,    -7
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      59,   336,   337,   340,    70,   334,   104,     3,   104,   119,
     119,   105,   104,   105,   120,   120,     1,   105,     4,   104,
     112,   113,   114,   115,   105,   129,   130,   212,   114,   115,
      95,    12,    63,    96,   141,   119,     5,   135,   338,     6,
     120,   121,   122,   123,   124,   125,   343,    72,   126,   127,
     128,   129,   130,   119,   131,   132,    97,    98,   120,   119,
     143,   144,   145,   146,   120,   147,   149,   150,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   216,   169,   170,   172,    60,    46,
      47,   142,   104,    47,   136,    46,    64,   105,   106,   107,
     108,   109,   110,   173,   174,   111,   112,   113,   114,   115,
      65,   116,   117,    66,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,    67,   384,     8,     9,
      10,    68,    11,    12,   119,    74,    13,   178,   179,   120,
      14,    15,    16,    17,   296,   297,   335,   104,   298,   299,
      18,    19,   105,   104,   238,   239,   240,    20,   105,    69,
      21,    22,    73,   114,   115,    23,    58,    24,    25,   114,
     115,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,   379,   380,    75,    76,    77,    78,    79,
      80,   243,   244,    81,   246,    82,   271,    83,   250,    84,
     252,    85,   254,   255,   119,   257,   258,    86,    87,   120,
      88,   119,   137,   138,   139,   140,   120,   263,   127,   128,
     129,   130,   148,   364,   151,    99,   339,   129,   130,    89,
     270,   119,    90,   119,    91,    92,   120,    93,   120,    94,
     168,   102,    95,   171,   242,   127,   128,   129,   130,   129,
     130,   175,   282,   177,   284,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   104,   342,    96,
     245,   248,   105,   106,   107,   119,   301,   247,   303,   249,
     120,   112,   113,   114,   115,   314,   116,   117,   253,   319,
     320,   129,   130,   256,   324,   325,   326,   119,   328,   329,
     259,   260,   120,   121,   122,   123,   124,   125,   261,   262,
     126,   127,   128,   129,   130,   346,   131,   132,   294,   264,
     265,   119,   266,   279,   211,   280,   120,   121,   122,   285,
     286,   352,   353,   302,   305,   127,   128,   129,   130,   360,
     131,   132,   287,   288,   289,   290,   367,   368,   369,   307,
     291,   341,   119,   304,   306,   376,   345,   120,   347,   349,
     354,   381,   382,   348,   355,   251,   127,   128,   129,   130,
     362,   363,   391,   392,   358,   359,   361,   365,   374,   375,
     398,   399,   383,   387,   377,   403,   386,   388,   217,   407,
     395,   389,   390,   411,   397,   401,   119,   396,   402,   405,
     418,   120,   121,   122,   123,   124,   125,   409,   406,   126,
     127,   128,   129,   130,   410,   131,   132,   414,   281,   413,
     416,   269,   415,   420,   417,   421,   241,     0,     0,   119,
       0,     0,   176,     0,   120,   121,   122,   123,   124,   125,
       0,   300,   126,   127,   128,   129,   130,   330,   131,   132,
       0,     0,     0,   317,   318,   104,     0,   321,   322,   323,
     105,   106,   107,   108,   109,   110,     0,     0,   111,   112,
     113,   114,   115,   332,   116,   117,     0,     0,     0,   344,
       0,   119,     0,     0,     0,     0,   120,   121,   122,   123,
     124,   125,     0,     0,   126,   127,   128,   129,   130,   119,
     131,   132,     0,     0,   120,   121,   122,   123,   124,   125,
       0,   366,   126,   127,   128,   129,   130,     0,   131,   132,
       0,     0,   119,     0,     0,     0,   283,   120,   121,   122,
     123,   124,   125,     0,     0,   126,   127,   128,   129,   130,
       0,   131,   132,     0,     0,   119,     0,     0,     0,   357,
     120,   121,   122,   123,   124,   125,     0,     0,   126,   127,
     128,   129,   130,     0,   131,   132,     0,     0,   119,     0,
       0,     0,   385,   120,   121,   122,   123,   124,   125,     0,
       0,   126,   127,   128,   129,   130,     0,   131,   132,     0,
       0,   119,     0,     0,     0,   400,   120,   121,   122,   123,
     124,   125,     0,     0,   126,   127,   128,   129,   130,   133,
     131,   132,     0,     0,   104,     0,     0,     0,   408,   105,
     106,   107,   108,   109,   110,     0,     0,   111,   112,   113,
     114,   115,   134,   116,   117,     0,     0,   119,     0,     0,
       0,     0,   120,   121,   122,   123,   124,   125,     0,     0,
     126,   127,   128,   129,   130,   204,   131,   132,     0,     0,
     104,     0,     0,     0,     0,   105,   106,   107,   108,   109,
     110,     0,     0,   111,   112,   113,   114,   115,   205,   116,
     117,     0,     0,   104,     0,     0,     0,     0,   105,   106,
     107,   108,   109,   110,     0,     0,   111,   112,   113,   114,
     115,   206,   116,   117,     0,     0,   104,     0,     0,     0,
       0,   105,   106,   107,   108,   109,   110,     0,     0,   111,
     112,   113,   114,   115,   207,   116,   117,     0,     0,   104,
       0,     0,     0,     0,   105,   106,   107,   108,   109,   110,
       0,     0,   111,   112,   113,   114,   115,   210,   116,   117,
       0,     0,   119,     0,     0,     0,     0,   120,   121,   122,
     123,   124,   125,     0,     0,   126,   127,   128,   129,   130,
     213,   131,   132,     0,     0,   104,     0,     0,     0,     0,
     105,   106,   107,   108,   109,   110,     0,     0,   111,   112,
     113,   114,   115,   214,   116,   117,     0,     0,   119,     0,
       0,     0,     0,   120,   121,   122,   123,   124,   125,     0,
       0,   126,   127,   128,   129,   130,   218,   131,   132,     0,
       0,   119,     0,     0,     0,     0,   120,   121,   122,   123,
     124,   125,     0,     0,   126,   127,   128,   129,   130,   221,
     131,   132,     0,     0,   119,     0,     0,     0,     0,   120,
     121,   122,   123,   124,   125,     0,     0,   126,   127,   128,
     129,   130,   224,   131,   132,     0,     0,   119,     0,     0,
       0,     0,   120,   121,   122,   123,   124,   125,     0,     0,
     126,   127,   128,   129,   130,   225,   131,   132,     0,     0,
     119,     0,     0,     0,     0,   120,   121,   122,   123,   124,
     125,     0,     0,   126,   127,   128,   129,   130,   226,   131,
     132,     0,     0,   119,     0,     0,     0,     0,   120,   121,
     122,   123,   124,   125,     0,     0,   126,   127,   128,   129,
     130,   227,   131,   132,     0,     0,   119,     0,     0,     0,
       0,   120,   121,   122,   123,   124,   125,     0,     0,   126,
     127,   128,   129,   130,   228,   131,   132,     0,     0,   119,
       0,     0,     0,     0,   120,   121,   122,   123,   124,   125,
       0,     0,   126,   127,   128,   129,   130,   229,   131,   132,
       0,     0,   119,     0,     0,     0,     0,   120,   121,   122,
     123,   124,   125,     0,     0,   126,   127,   128,   129,   130,
     230,   131,   132,     0,     0,   119,     0,     0,     0,     0,
     120,   121,   122,   123,   124,   125,     0,     0,   126,   127,
     128,   129,   130,   231,   131,   132,     0,     0,   119,     0,
       0,     0,     0,   120,   121,   122,   123,   124,   125,     0,
       0,   126,   127,   128,   129,   130,   232,   131,   132,     0,
       0,   119,     0,     0,     0,     0,   120,   121,   122,   123,
     124,   125,     0,     0,   126,   127,   128,   129,   130,   233,
     131,   132,     0,     0,   104,     0,     0,     0,     0,   105,
     106,   107,   108,   109,   110,     0,     0,   111,   112,   113,
     114,   115,   235,   116,   117,     0,     0,   119,     0,     0,
       0,     0,   120,   121,   122,   123,   124,   125,     0,     0,
     126,   127,   128,   129,   130,   236,   131,   132,     0,     0,
     104,     0,     0,     0,     0,   105,   106,   107,   108,   109,
     110,     0,     0,   111,   112,   113,   114,   115,   237,   116,
     117,     0,     0,   119,     0,     0,     0,     0,   120,   121,
     122,   123,   124,   125,     0,     0,   126,   127,   128,   129,
     130,   267,   131,   132,     0,     0,   119,     0,     0,     0,
       0,   120,   121,   122,   123,   124,   125,     0,     0,   126,
     127,   128,   129,   130,   268,   131,   132,     0,     0,   119,
       0,     0,     0,     0,   120,   121,   122,   123,   124,   125,
       0,     0,   126,   127,   128,   129,   130,   274,   131,   132,
       0,     0,   119,     0,     0,     0,     0,   120,   121,   122,
     123,   124,   125,     0,     0,   126,   127,   128,   129,   130,
     275,   131,   132,     0,     0,   119,     0,     0,     0,     0,
     120,   121,   122,   123,   124,   125,     0,     0,   126,   127,
     128,   129,   130,   276,   131,   132,     0,     0,   119,     0,
       0,     0,     0,   120,   121,   122,   123,   124,   125,     0,
       0,   126,   127,   128,   129,   130,   277,   131,   132,     0,
       0,   119,     0,     0,     0,     0,   120,   121,   122,   123,
     124,   125,     0,     0,   126,   127,   128,   129,   130,   278,
     131,   132,     0,     0,   119,     0,     0,     0,     0,   120,
     121,   122,   123,   124,   125,     0,     0,   126,   127,   128,
     129,   130,   327,   131,   132,     0,     0,   119,     0,     0,
       0,     0,   120,   121,   122,   123,   124,   125,     0,     0,
     126,   127,   128,   129,   130,   373,   131,   132,     0,     0,
     119,     0,     0,     0,     0,   120,   121,   122,   123,   124,
     125,     0,     0,   126,   127,   128,   129,   130,   393,   131,
     132,     0,     0,   119,     0,     0,     0,     0,   120,   121,
     122,   123,   124,   125,     0,     0,   126,   127,   128,   129,
     130,   394,   131,   132,     0,     0,   119,     0,     0,     0,
       0,   120,   121,   122,   123,   124,   125,     0,     0,   126,
     127,   128,   129,   130,   404,   131,   132,     0,     0,   119,
       0,     0,     0,     0,   120,   121,   122,   123,   124,   125,
       0,     0,   126,   127,   128,   129,   130,   412,   131,   132,
       0,     0,   119,     0,     0,     0,     0,   120,   121,   122,
     123,   124,   125,     0,     0,   126,   127,   128,   129,   130,
     419,   131,   132,     0,     0,   119,     0,     0,     0,     0,
     120,   121,   122,   123,   124,   125,     0,     0,   126,   127,
     128,   129,   130,   208,   131,   132,     0,   119,     0,     0,
       0,     0,   120,   121,   122,   123,   124,   125,     0,     0,
     126,   127,   128,   129,   130,   209,   131,   132,     0,   119,
       0,     0,     0,     0,   120,   121,   122,   123,   124,   125,
       0,     0,   126,   127,   128,   129,   130,   219,   131,   132,
       0,   119,     0,     0,     0,     0,   120,   121,   122,   123,
     124,   125,     0,     0,   126,   127,   128,   129,   130,   220,
     131,   132,     0,   119,     0,     0,     0,     0,   120,   121,
     122,   123,   124,   125,     0,     0,   126,   127,   128,   129,
     130,   222,   131,   132,     0,   119,     0,     0,     0,     0,
     120,   121,   122,   123,   124,   125,     0,     0,   126,   127,
     128,   129,   130,   223,   131,   132,     0,   119,     0,     0,
       0,     0,   120,   121,   122,   123,   124,   125,     0,     0,
     126,   127,   128,   129,   130,   234,   131,   132,     0,   119,
       0,     0,     0,     0,   120,   121,   122,   123,   124,   125,
       0,     0,   126,   127,   128,   129,   130,   103,   131,   132,
     104,     0,     0,     0,     0,   105,   106,   107,   108,   109,
     110,     0,     0,   111,   112,   113,   114,   115,   118,   116,
     117,   119,     0,     0,     0,     0,   120,   121,   122,   123,
     124,   125,     0,     0,   126,   127,   128,   129,   130,   272,
     131,   132,   104,     0,     0,     0,     0,   105,   106,   107,
     108,   109,   110,     0,     0,   111,   112,   113,   114,   115,
     273,   116,   117,   119,     0,     0,     0,     0,   120,   121,
     122,   123,   124,   125,     0,     0,   126,   127,   128,   129,
     130,   331,   131,   132,   104,     0,     0,     0,     0,   105,
     106,   107,   108,   109,   110,     0,     0,   111,   112,   113,
     114,   115,   333,   116,   117,   119,     0,     0,     0,     0,
     120,   121,   122,   123,   124,   125,     0,     0,   126,   127,
     128,   129,   130,   350,   131,   132,   104,     0,     0,     0,
       0,   105,   106,   107,   108,   109,   110,     0,     0,   111,
     112,   113,   114,   115,   351,   116,   117,   119,     0,     0,
       0,     0,   120,   121,   122,   123,   124,   125,     0,     0,
     126,   127,   128,   129,   130,   370,   131,   132,   104,     0,
       0,     0,     0,   105,   106,   107,   108,   109,   110,     0,
       0,   111,   112,   113,   114,   115,   371,   116,   117,   119,
       0,     0,     0,     0,   120,   121,   122,   123,   124,   125,
       0,     0,   126,   127,   128,   129,   130,     0,   131,   132,
     292,   104,     0,     0,     0,     0,   105,   106,   107,   108,
     109,   110,     0,     0,   111,   112,   113,   114,   115,     0,
     116,   117,   293,   119,     0,     0,     0,     0,   120,   121,
     122,   123,   124,   125,     0,     0,   126,   127,   128,   129,
     130,     0,   131,   132,   295,   119,     0,     0,     0,     0,
     120,   121,   122,   123,   124,   125,     0,     0,   126,   127,
     128,   129,   130,     0,   131,   132,   372,   119,     0,     0,
       0,     0,   120,   121,   122,   123,   124,   125,     0,     0,
     126,   127,   128,   129,   130,   119,   131,   132,     0,     0,
     120,   121,   122,   123,   124,   125,     0,     0,   126,   127,
     128,   129,   130,   104,   131,   215,     0,     0,   105,   106,
     107,   108,   109,   110,     0,     0,   111,   112,   113,   114,
     115,   119,   116,   117,     0,     0,   120,   121,   122,   123,
     124,   125,     0,     0,   126,   127,   128,   129,   130,   104,
     131,   132,     0,     0,   105,   106,   107,   108,   109,   110,
       0,     0,   111,   308,   309,   310,   115,   119,   116,   117,
       0,     0,   120,   121,   122,   123,   124,   125,     0,     0,
     126,   311,   312,   313,   130,   119,   131,   132,     0,     0,
     120,   121,   122,   123,   124,   125,     0,     0,   126,   315,
     128,   316,   130,   119,   131,   132,     0,     0,   120,   121,
     122,   123,   124,   125,     0,     0,   126,   127,   128,   129,
     130,   119,   356,   132,     0,     0,   120,   121,   122,   123,
     124,   125,     0,     0,   126,   127,   128,   378,   130,     0,
     131,   132
};

static const yytype_int16 yycheck[] =
{
       7,     7,     7,     7,    37,     7,    14,     8,    14,    14,
      14,    19,    14,    19,    19,    19,    12,    19,     0,    14,
      28,    29,    30,    31,    19,    30,    31,     6,    30,    31,
      10,     8,     8,    13,     8,    14,     9,     8,    43,     6,
      19,    20,    21,    22,    23,    24,     7,    37,    27,    28,
      29,    30,    31,    14,    33,    34,    10,    11,    19,    14,
      67,    68,    69,    70,    19,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,     6,    92,    93,    94,    65,    66,
      67,    65,    14,    67,    65,    66,     8,    19,    20,    21,
      22,    23,    24,    66,    67,    27,    28,    29,    30,    31,
       8,    33,    34,     8,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,     8,     7,     3,     4,
       5,     8,     7,     8,    14,    37,    11,    10,    11,    19,
      15,    16,    17,    18,    44,    45,     7,    14,    44,    45,
      25,    26,    19,    14,    65,    66,    67,    32,    19,     8,
      35,    36,     8,    30,    31,    40,     7,    42,    43,    30,
      31,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    38,    39,    37,     8,     8,     8,     8,
       8,   208,   209,     8,   211,     8,     6,     8,   215,     8,
     217,     8,   219,   220,    14,   222,   223,     8,     8,    19,
       8,    14,    63,    64,    65,    66,    19,   234,    28,    29,
      30,    31,    73,     6,    75,    65,     7,    30,    31,     8,
     247,    14,     8,    14,     8,     8,    19,     8,    19,     8,
      91,    11,    10,    94,    11,    28,    29,    30,    31,    30,
      31,    65,   269,    13,   271,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,    14,     7,    13,
      11,    11,    19,    20,    21,    14,   293,    38,   295,    11,
      19,    28,    29,    30,    31,   302,    33,    34,    11,   306,
     307,    30,    31,    11,   311,   312,   313,    14,   315,   316,
      11,    11,    19,    20,    21,    22,    23,    24,    11,    11,
      27,    28,    29,    30,    31,   332,    33,    34,    40,    11,
      11,    14,    11,    11,    41,    11,    19,    20,    21,     7,
       7,   348,   349,     8,     6,    28,    29,    30,    31,   356,
      33,    34,    11,    11,    11,    11,   363,   364,   365,     6,
      11,    11,    14,    37,    37,   372,     7,    19,     7,    38,
       7,   378,   379,    37,     7,   216,    28,    29,    30,    31,
       6,     6,   389,   390,    45,    45,    40,     8,     7,     7,
      38,   398,    41,     7,    11,   402,    40,    40,     6,   406,
      11,     8,     8,   410,     7,    40,    14,    11,     8,    11,
     417,    19,    20,    21,    22,    23,    24,    40,    38,    27,
      28,    29,    30,    31,     8,    33,    34,    39,   269,    11,
      40,     6,    41,    11,     8,     7,   178,    -1,    -1,    14,
      -1,    -1,    97,    -1,    19,    20,    21,    22,    23,    24,
      -1,   292,    27,    28,    29,    30,    31,     6,    33,    34,
      -1,    -1,    -1,   304,   305,    14,    -1,   308,   309,   310,
      19,    20,    21,    22,    23,    24,    -1,    -1,    27,    28,
      29,    30,    31,     6,    33,    34,    -1,    -1,    -1,   330,
      -1,    14,    -1,    -1,    -1,    -1,    19,    20,    21,    22,
      23,    24,    -1,    -1,    27,    28,    29,    30,    31,    14,
      33,    34,    -1,    -1,    19,    20,    21,    22,    23,    24,
      -1,   362,    27,    28,    29,    30,    31,    -1,    33,    34,
      -1,    -1,    14,    -1,    -1,    -1,    41,    19,    20,    21,
      22,    23,    24,    -1,    -1,    27,    28,    29,    30,    31,
      -1,    33,    34,    -1,    -1,    14,    -1,    -1,    -1,    41,
      19,    20,    21,    22,    23,    24,    -1,    -1,    27,    28,
      29,    30,    31,    -1,    33,    34,    -1,    -1,    14,    -1,
      -1,    -1,    41,    19,    20,    21,    22,    23,    24,    -1,
      -1,    27,    28,    29,    30,    31,    -1,    33,    34,    -1,
      -1,    14,    -1,    -1,    -1,    41,    19,    20,    21,    22,
      23,    24,    -1,    -1,    27,    28,    29,    30,    31,     9,
      33,    34,    -1,    -1,    14,    -1,    -1,    -1,    41,    19,
      20,    21,    22,    23,    24,    -1,    -1,    27,    28,    29,
      30,    31,     9,    33,    34,    -1,    -1,    14,    -1,    -1,
      -1,    -1,    19,    20,    21,    22,    23,    24,    -1,    -1,
      27,    28,    29,    30,    31,     9,    33,    34,    -1,    -1,
      14,    -1,    -1,    -1,    -1,    19,    20,    21,    22,    23,
      24,    -1,    -1,    27,    28,    29,    30,    31,     9,    33,
      34,    -1,    -1,    14,    -1,    -1,    -1,    -1,    19,    20,
      21,    22,    23,    24,    -1,    -1,    27,    28,    29,    30,
      31,     9,    33,    34,    -1,    -1,    14,    -1,    -1,    -1,
      -1,    19,    20,    21,    22,    23,    24,    -1,    -1,    27,
      28,    29,    30,    31,     9,    33,    34,    -1,    -1,    14,
      -1,    -1,    -1,    -1,    19,    20,    21,    22,    23,    24,
      -1,    -1,    27,    28,    29,    30,    31,     9,    33,    34,
      -1,    -1,    14,    -1,    -1,    -1,    -1,    19,    20,    21,
      22,    23,    24,    -1,    -1,    27,    28,    29,    30,    31,
       9,    33,    34,    -1,    -1,    14,    -1,    -1,    -1,    -1,
      19,    20,    21,    22,    23,    24,    -1,    -1,    27,    28,
      29,    30,    31,     9,    33,    34,    -1,    -1,    14,    -1,
      -1,    -1,    -1,    19,    20,    21,    22,    23,    24,    -1,
      -1,    27,    28,    29,    30,    31,     9,    33,    34,    -1,
      -1,    14,    -1,    -1,    -1,    -1,    19,    20,    21,    22,
      23,    24,    -1,    -1,    27,    28,    29,    30,    31,     9,
      33,    34,    -1,    -1,    14,    -1,    -1,    -1,    -1,    19,
      20,    21,    22,    23,    24,    -1,    -1,    27,    28,    29,
      30,    31,     9,    33,    34,    -1,    -1,    14,    -1,    -1,
      -1,    -1,    19,    20,    21,    22,    23,    24,    -1,    -1,
      27,    28,    29,    30,    31,     9,    33,    34,    -1,    -1,
      14,    -1,    -1,    -1,    -1,    19,    20,    21,    22,    23,
      24,    -1,    -1,    27,    28,    29,    30,    31,     9,    33,
      34,    -1,    -1,    14,    -1,    -1,    -1,    -1,    19,    20,
      21,    22,    23,    24,    -1,    -1,    27,    28,    29,    30,
      31,     9,    33,    34,    -1,    -1,    14,    -1,    -1,    -1,
      -1,    19,    20,    21,    22,    23,    24,    -1,    -1,    27,
      28,    29,    30,    31,     9,    33,    34,    -1,    -1,    14,
      -1,    -1,    -1,    -1,    19,    20,    21,    22,    23,    24,
      -1,    -1,    27,    28,    29,    30,    31,     9,    33,    34,
      -1,    -1,    14,    -1,    -1,    -1,    -1,    19,    20,    21,
      22,    23,    24,    -1,    -1,    27,    28,    29,    30,    31,
       9,    33,    34,    -1,    -1,    14,    -1,    -1,    -1,    -1,
      19,    20,    21,    22,    23,    24,    -1,    -1,    27,    28,
      29,    30,    31,     9,    33,    34,    -1,    -1,    14,    -1,
      -1,    -1,    -1,    19,    20,    21,    22,    23,    24,    -1,
      -1,    27,    28,    29,    30,    31,     9,    33,    34,    -1,
      -1,    14,    -1,    -1,    -1,    -1,    19,    20,    21,    22,
      23,    24,    -1,    -1,    27,    28,    29,    30,    31,     9,
      33,    34,    -1,    -1,    14,    -1,    -1,    -1,    -1,    19,
      20,    21,    22,    23,    24,    -1,    -1,    27,    28,    29,
      30,    31,     9,    33,    34,    -1,    -1,    14,    -1,    -1,
      -1,    -1,    19,    20,    21,    22,    23,    24,    -1,    -1,
      27,    28,    29,    30,    31,     9,    33,    34,    -1,    -1,
      14,    -1,    -1,    -1,    -1,    19,    20,    21,    22,    23,
      24,    -1,    -1,    27,    28,    29,    30,    31,     9,    33,
      34,    -1,    -1,    14,    -1,    -1,    -1,    -1,    19,    20,
      21,    22,    23,    24,    -1,    -1,    27,    28,    29,    30,
      31,     9,    33,    34,    -1,    -1,    14,    -1,    -1,    -1,
      -1,    19,    20,    21,    22,    23,    24,    -1,    -1,    27,
      28,    29,    30,    31,     9,    33,    34,    -1,    -1,    14,
      -1,    -1,    -1,    -1,    19,    20,    21,    22,    23,    24,
      -1,    -1,    27,    28,    29,    30,    31,     9,    33,    34,
      -1,    -1,    14,    -1,    -1,    -1,    -1,    19,    20,    21,
      22,    23,    24,    -1,    -1,    27,    28,    29,    30,    31,
       9,    33,    34,    -1,    -1,    14,    -1,    -1,    -1,    -1,
      19,    20,    21,    22,    23,    24,    -1,    -1,    27,    28,
      29,    30,    31,     9,    33,    34,    -1,    -1,    14,    -1,
      -1,    -1,    -1,    19,    20,    21,    22,    23,    24,    -1,
      -1,    27,    28,    29,    30,    31,     9,    33,    34,    -1,
      -1,    14,    -1,    -1,    -1,    -1,    19,    20,    21,    22,
      23,    24,    -1,    -1,    27,    28,    29,    30,    31,     9,
      33,    34,    -1,    -1,    14,    -1,    -1,    -1,    -1,    19,
      20,    21,    22,    23,    24,    -1,    -1,    27,    28,    29,
      30,    31,     9,    33,    34,    -1,    -1,    14,    -1,    -1,
      -1,    -1,    19,    20,    21,    22,    23,    24,    -1,    -1,
      27,    28,    29,    30,    31,     9,    33,    34,    -1,    -1,
      14,    -1,    -1,    -1,    -1,    19,    20,    21,    22,    23,
      24,    -1,    -1,    27,    28,    29,    30,    31,     9,    33,
      34,    -1,    -1,    14,    -1,    -1,    -1,    -1,    19,    20,
      21,    22,    23,    24,    -1,    -1,    27,    28,    29,    30,
      31,     9,    33,    34,    -1,    -1,    14,    -1,    -1,    -1,
      -1,    19,    20,    21,    22,    23,    24,    -1,    -1,    27,
      28,    29,    30,    31,     9,    33,    34,    -1,    -1,    14,
      -1,    -1,    -1,    -1,    19,    20,    21,    22,    23,    24,
      -1,    -1,    27,    28,    29,    30,    31,     9,    33,    34,
      -1,    -1,    14,    -1,    -1,    -1,    -1,    19,    20,    21,
      22,    23,    24,    -1,    -1,    27,    28,    29,    30,    31,
       9,    33,    34,    -1,    -1,    14,    -1,    -1,    -1,    -1,
      19,    20,    21,    22,    23,    24,    -1,    -1,    27,    28,
      29,    30,    31,    10,    33,    34,    -1,    14,    -1,    -1,
      -1,    -1,    19,    20,    21,    22,    23,    24,    -1,    -1,
      27,    28,    29,    30,    31,    10,    33,    34,    -1,    14,
      -1,    -1,    -1,    -1,    19,    20,    21,    22,    23,    24,
      -1,    -1,    27,    28,    29,    30,    31,    10,    33,    34,
      -1,    14,    -1,    -1,    -1,    -1,    19,    20,    21,    22,
      23,    24,    -1,    -1,    27,    28,    29,    30,    31,    10,
      33,    34,    -1,    14,    -1,    -1,    -1,    -1,    19,    20,
      21,    22,    23,    24,    -1,    -1,    27,    28,    29,    30,
      31,    10,    33,    34,    -1,    14,    -1,    -1,    -1,    -1,
      19,    20,    21,    22,    23,    24,    -1,    -1,    27,    28,
      29,    30,    31,    10,    33,    34,    -1,    14,    -1,    -1,
      -1,    -1,    19,    20,    21,    22,    23,    24,    -1,    -1,
      27,    28,    29,    30,    31,    10,    33,    34,    -1,    14,
      -1,    -1,    -1,    -1,    19,    20,    21,    22,    23,    24,
      -1,    -1,    27,    28,    29,    30,    31,    11,    33,    34,
      14,    -1,    -1,    -1,    -1,    19,    20,    21,    22,    23,
      24,    -1,    -1,    27,    28,    29,    30,    31,    11,    33,
      34,    14,    -1,    -1,    -1,    -1,    19,    20,    21,    22,
      23,    24,    -1,    -1,    27,    28,    29,    30,    31,    11,
      33,    34,    14,    -1,    -1,    -1,    -1,    19,    20,    21,
      22,    23,    24,    -1,    -1,    27,    28,    29,    30,    31,
      11,    33,    34,    14,    -1,    -1,    -1,    -1,    19,    20,
      21,    22,    23,    24,    -1,    -1,    27,    28,    29,    30,
      31,    11,    33,    34,    14,    -1,    -1,    -1,    -1,    19,
      20,    21,    22,    23,    24,    -1,    -1,    27,    28,    29,
      30,    31,    11,    33,    34,    14,    -1,    -1,    -1,    -1,
      19,    20,    21,    22,    23,    24,    -1,    -1,    27,    28,
      29,    30,    31,    11,    33,    34,    14,    -1,    -1,    -1,
      -1,    19,    20,    21,    22,    23,    24,    -1,    -1,    27,
      28,    29,    30,    31,    11,    33,    34,    14,    -1,    -1,
      -1,    -1,    19,    20,    21,    22,    23,    24,    -1,    -1,
      27,    28,    29,    30,    31,    11,    33,    34,    14,    -1,
      -1,    -1,    -1,    19,    20,    21,    22,    23,    24,    -1,
      -1,    27,    28,    29,    30,    31,    11,    33,    34,    14,
      -1,    -1,    -1,    -1,    19,    20,    21,    22,    23,    24,
      -1,    -1,    27,    28,    29,    30,    31,    -1,    33,    34,
      13,    14,    -1,    -1,    -1,    -1,    19,    20,    21,    22,
      23,    24,    -1,    -1,    27,    28,    29,    30,    31,    -1,
      33,    34,    13,    14,    -1,    -1,    -1,    -1,    19,    20,
      21,    22,    23,    24,    -1,    -1,    27,    28,    29,    30,
      31,    -1,    33,    34,    13,    14,    -1,    -1,    -1,    -1,
      19,    20,    21,    22,    23,    24,    -1,    -1,    27,    28,
      29,    30,    31,    -1,    33,    34,    13,    14,    -1,    -1,
      -1,    -1,    19,    20,    21,    22,    23,    24,    -1,    -1,
      27,    28,    29,    30,    31,    14,    33,    34,    -1,    -1,
      19,    20,    21,    22,    23,    24,    -1,    -1,    27,    28,
      29,    30,    31,    14,    33,    34,    -1,    -1,    19,    20,
      21,    22,    23,    24,    -1,    -1,    27,    28,    29,    30,
      31,    14,    33,    34,    -1,    -1,    19,    20,    21,    22,
      23,    24,    -1,    -1,    27,    28,    29,    30,    31,    14,
      33,    34,    -1,    -1,    19,    20,    21,    22,    23,    24,
      -1,    -1,    27,    28,    29,    30,    31,    14,    33,    34,
      -1,    -1,    19,    20,    21,    22,    23,    24,    -1,    -1,
      27,    28,    29,    30,    31,    14,    33,    34,    -1,    -1,
      19,    20,    21,    22,    23,    24,    -1,    -1,    27,    28,
      29,    30,    31,    14,    33,    34,    -1,    -1,    19,    20,
      21,    22,    23,    24,    -1,    -1,    27,    28,    29,    30,
      31,    14,    33,    34,    -1,    -1,    19,    20,    21,    22,
      23,    24,    -1,    -1,    27,    28,    29,    30,    31,    -1,
      33,    34
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    12,    69,     8,     0,     9,     6,    70,     3,     4,
       5,     7,     8,    11,    15,    16,    17,    18,    25,    26,
      32,    35,    36,    40,    42,    43,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    71,    72,
      73,    74,    77,    78,    79,    80,    82,    83,    84,    85,
      65,    84,    85,     8,     8,     8,     8,     8,     8,     8,
      37,    81,    37,     8,    37,    37,     8,     8,     8,     8,
       8,     8,     8,     8,     8,     8,     8,     8,     8,     8,
       8,     8,     8,     8,     8,    10,    13,    10,    11,    65,
      75,    76,    11,    11,    14,    19,    20,    21,    22,    23,
      24,    27,    28,    29,    30,    31,    33,    34,    11,    14,
      19,    20,    21,    22,    23,    24,    27,    28,    29,    30,
      31,    33,    34,     9,     9,     8,    65,    84,    84,    84,
      84,     8,    65,    85,    85,    85,    85,    85,    84,    85,
      85,    84,    85,    85,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    84,    85,
      85,    84,    85,    66,    67,    65,    72,    13,    10,    11,
      84,    84,    84,    84,    84,    84,    84,    84,    84,    84,
      84,    84,    85,    85,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    85,     9,     9,     9,     9,    10,    10,
       9,    41,     6,     9,     9,    34,     6,     6,     9,    10,
      10,     9,    10,    10,     9,     9,     9,     9,     9,     9,
       9,     9,     9,     9,    10,     9,     9,     9,    65,    66,
      67,    76,    11,    85,    85,    11,    85,    38,    11,    11,
      85,    84,    85,    11,    85,    85,    11,    85,    85,    11,
      11,    11,    11,    85,    11,    11,    11,     9,     9,     6,
      85,     6,    11,    11,     9,     9,     9,     9,     9,    11,
      11,    84,    85,    41,    85,     7,     7,    11,    11,    11,
      11,    11,    13,    13,    40,    13,    44,    45,    44,    45,
      84,    85,     8,    85,    37,     6,    37,     6,    28,    29,
      30,    28,    29,    30,    85,    28,    30,    84,    84,    85,
      85,    84,    84,    84,    85,    85,    85,     9,    85,    85,
       6,    11,     6,    11,     7,     7,     7,     7,    43,     7,
       7,    11,     7,     7,    84,     7,    85,     7,    37,    38,
      11,    11,    85,    85,     7,     7,    33,    41,    45,    45,
      85,    40,     6,     6,     6,     8,    84,    85,    85,    85,
      11,    11,    13,     9,     7,     7,    85,    11,    30,    38,
      39,    85,    85,    41,     7,    41,    40,     7,    40,     8,
       8,    85,    85,     9,     9,    11,    11,     7,    38,    85,
      41,    40,     8,    85,     9,    11,    38,    85,    41,    40,
       8,    85,     9,    11,    39,    41,    40,     8,    85,     9,
      11,     7
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
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



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 38 "1707105.y"
    { printf("\nSuccessfully COMPILED\n"); ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 50 "1707105.y"
    {
int search =0,p=0;
for(p=0;p<w;p++)
{
if(strcmp(store[p].s,(yyvsp[(1) - (3)].stringtype))==0)
{
store[p].n=(yyvsp[(3) - (3)].floattType);
printf("\nvalue of variable %s~%.2f \n",store[p].s,store[p].n);
search =1;
break;
}
}
if(search==0)
{
printf("\nvariable is not declared \n");
}
 ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 67 "1707105.y"
    {
int search =0,j=0;
for(j=0;j<w;j++)
{
if(strcmp(store[j].s,(yyvsp[(1) - (3)].stringtype))==0)
{
store[j].ni=(yyvsp[(3) - (3)].integerType);
printf("\nvalue of variable %s~%d \n",store[j].s,store[j].ni);
search =1;
break;
}
}
if(search==0)
{
printf("\n variable is not declared \n");
}
 ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 85 "1707105.y"
    { printf("\n Valid declaration \n"); ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 94 "1707105.y"
    { int search =0,j=0;
for(j=0;j<w;j++)
{
if(strcmp(store[j].s,(yyvsp[(1) - (1)].stringtype))==0)
{
printf("\n%s variable is already declared \n",store[j].s);
search =1;
break;
}
}
if(search==0){
  store[w].s=(yyvsp[(1) - (1)].stringtype);
store[w].n=1;
printf("decalred variable %s\n",store[w].s);
w++;
}
;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 111 "1707105.y"
    { int search =0,j=0;

for(j=0;j<w;j++)
{
if(strcmp(store[j].s,(yyvsp[(1) - (3)].stringtype))==0)
{
printf("\n%s variable is already declared \n",store[j].s);
search =1;
break;
}
}
if(search==0)
{
store[w].s=(yyvsp[(1) - (3)].stringtype);
store[w].n=(yyvsp[(3) - (3)].floattType);
printf("\nvalue of variable %s~%.2f\n",store[w].s,store[w].n);
w++;
}
 ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 130 "1707105.y"
    { int search =0,k=0;

for(k=0;k<w;k++)
{
if(strcmp(store[k].s,(yyvsp[(1) - (3)].stringtype))==0)
{
printf("\n%s  variable is already declared  %s~%d \n",store[k].s);
search=1;
break;
}
}
if(search==0)
{
store[w].s=(yyvsp[(1) - (3)].stringtype);
store[w].ni=(yyvsp[(3) - (3)].integerType);
printf("\nvalue of variable %s~%d\n",store[w].s,store[w].ni);
w++;
}
 ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 149 "1707105.y"
    {printf("string = %s",(yyvsp[(3) - (3)].stringtype));;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 152 "1707105.y"
    { printf("\nValue of expression : %d \n",(yyvsp[(1) - (2)].integerType)); ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 153 "1707105.y"
    { printf("\nValue of expression : %.2f \n",(yyvsp[(1) - (2)].floattType)); ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 160 "1707105.y"
    {
if((yyvsp[(6) - (28)].integerType)==(yyvsp[(3) - (28)].integerType))
{
printf("\nvalue in switch case: %d\n",(yyvsp[(10) - (28)].integerType));
}
else if((yyvsp[(14) - (28)].integerType)==(yyvsp[(3) - (28)].integerType))
{
printf("\nvalue in switch case:%d\n",(yyvsp[(18) - (28)].integerType));
}
else{
printf("\nvalue in switch case:%d\n",(yyvsp[(25) - (28)].integerType));
}
printf("\n");
;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 176 "1707105.y"
    {
if((yyvsp[(6) - (52)].integerType)==(yyvsp[(3) - (52)].integerType))
{
printf("\nvalue in switch case: %d\n",(yyvsp[(10) - (52)].integerType));
}
else if((yyvsp[(14) - (52)].integerType)==(yyvsp[(3) - (52)].integerType))
{
printf("\nvalue in switch case:%d\n",(yyvsp[(18) - (52)].integerType));
}
else if((yyvsp[(22) - (52)].integerType)==(yyvsp[(3) - (52)].integerType))
{
printf("\nvalue in switch case:%d\n",(yyvsp[(26) - (52)].integerType));
}else if((yyvsp[(30) - (52)].integerType)==(yyvsp[(3) - (52)].integerType))
{
printf("\nvalue in switch case:%d\n",(yyvsp[(34) - (52)].integerType));
}else if((yyvsp[(38) - (52)].integerType)==(yyvsp[(3) - (52)].integerType))
{
printf("\nvalue in switch case:%d\n",(yyvsp[(42) - (52)].integerType));
}
else{
printf("\nvalue in switch case:%d\n",(yyvsp[(49) - (52)].integerType));
}
printf("\n");
;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 202 "1707105.y"
    {
 if((yyvsp[(3) - (7)].integerType))
     { 
       printf("\nValue of expression in PROVISO BLOCK : %d\n",(yyvsp[(5) - (7)].integerType));
    }
 else
    {
      printf("\nCondition value zero in PROVISO BLOCK \n");
    }
printf("\n");

;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 214 "1707105.y"
    {

 if((yyvsp[(3) - (12)].integerType)) 
   {
    printf("\nValue of expression in PROVISO BLOCK : %d\n",(yyvsp[(5) - (12)].integerType));
   }
 else
   { 
     printf("\nValue of expression in OR BLOCK : %d\n",(yyvsp[(10) - (12)].integerType));
   }
printf("\n");
;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 226 "1707105.y"
    {

 if((yyvsp[(3) - (19)].integerType)) 
   {
    printf("\nValue of expression in PROVISO BLOCK : %d\n",(yyvsp[(5) - (19)].integerType));
   }
 else if((yyvsp[(10) - (19)].integerType))
   { 
     printf("\nValue of expression in DIFFERENTLY BLOCK : %d\n",(yyvsp[(12) - (19)].integerType));
   }
else{
printf("\nValue of expression in OR BLOCK : %d\n",(yyvsp[(17) - (19)].integerType));
}  
printf("\n");
;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 242 "1707105.y"
    {
 if((yyvsp[(3) - (7)].floattType))
     { 
       printf("\nValue of expression in PROVISO BLOCK : %0.2f\n",(yyvsp[(5) - (7)].floattType));
    }
 else
    {
      printf("\nCondition value zero in PROVISO BLOCK \n");
    }
printf("\n");

;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 254 "1707105.y"
    {

 if((yyvsp[(3) - (12)].floattType)) 
   {
    printf("\nValue of expression in PROVISO BLOCK : %0.2f\n",(yyvsp[(5) - (12)].floattType));
   }
 else
   { 
     printf("\nValue of expression in OR BLOCK : %0.2f\n",(yyvsp[(10) - (12)].floattType));
   }
printf("\n");
;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 266 "1707105.y"
    {

 if((yyvsp[(3) - (19)].floattType)) 
   {
    printf("\nValue of expression in PROVISO BLOCK : %0.2f\n",(yyvsp[(5) - (19)].floattType));
   }
 else if((yyvsp[(10) - (19)].floattType))
   { 
     printf("\nValue of expression in DIFFERENTLY BLOCK : %0.2f\n",(yyvsp[(12) - (19)].floattType));
   }
else{
printf("\nValue of expression in OR BLOCK : %0.2f\n",(yyvsp[(17) - (19)].floattType));
}  
printf("\n");
;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 284 "1707105.y"
    { 

int n=(yyvsp[(11) - (12)].integerType);
int f=(yyvsp[(9) - (12)].integerType);
int i,x;
while(f<(yyvsp[(5) - (12)].integerType)){
  f=f+n;
 printf("\nValue of expression in PROCEED BLOCK : %d\n",f);
}
printf("\n");
for(x=0;x<w;x++){
if((yyvsp[(9) - (12)].integerType)==store[x].ni){
store[x].ni=f;
break;
}
}
;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 301 "1707105.y"
    { 

int n=(yyvsp[(11) - (12)].integerType);
int f=(yyvsp[(9) - (12)].integerType);
int i,x;
while(f<(yyvsp[(5) - (12)].integerType)){
  f=f*n;
 printf("\nValue of expression in PROCEED BLOCK : %d\n",f);
}
printf("\n");
for(x=0;x<w;x++){
if((yyvsp[(9) - (12)].integerType)==store[x].ni){
store[x].ni=f;
break;
}
}
;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 320 "1707105.y"
    {
int n=(yyvsp[(2) - (11)].integerType);
int rem=(yyvsp[(4) - (11)].integerType);
int l=(yyvsp[(8) - (11)].integerType);
int r=(yyvsp[(10) - (11)].integerType);
int k=(yyvsp[(6) - (11)].integerType),i,x;
if(k==l){
for(i=n;i<=rem;i++){	
k=k*(yyvsp[(10) - (11)].integerType);

	                                 printf("value in the TRAVEL loop: %d\n", k);	

}
}
else{
for(i=n;i<=rem;i++){	
k=l*(yyvsp[(10) - (11)].integerType);

	                                 printf("value in the TRAVEL loop: %d\n", k);	
}
}
printf("\n");
for(x=0;x<w;x++){
if((yyvsp[(6) - (11)].integerType)==store[x].ni){
store[x].ni=k;
break;
}
}
;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 349 "1707105.y"
    {
int n=(yyvsp[(2) - (11)].integerType);
int rem=(yyvsp[(4) - (11)].integerType);
int l=(yyvsp[(8) - (11)].integerType);
int r=(yyvsp[(10) - (11)].integerType);
int k=(yyvsp[(6) - (11)].integerType),i,x;
if(k==l){
for(i=n;i<=rem;i++){	
k=k-(yyvsp[(10) - (11)].integerType);

	                                 printf("value in the TRAVEL loop: %d\n", k);	
}
}
else{
for(i=n;i<=rem;i++){	
k=l-(yyvsp[(10) - (11)].integerType);

	                                 printf("value in the TRAVEL loop: %d\n", k);	
}
}
printf("\n");
for(x=0;x<w;x++){
if((yyvsp[(6) - (11)].integerType)==store[x].ni){
store[x].ni=k;
break;
}
}
;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 377 "1707105.y"
    {
int n=(yyvsp[(2) - (11)].integerType);
int rem=(yyvsp[(4) - (11)].integerType);
int l=(yyvsp[(8) - (11)].integerType);
int r=(yyvsp[(10) - (11)].integerType);
int k=(yyvsp[(6) - (11)].integerType),i,x;
if(k==l){
for(i=n;i<=rem;i++){	
k=k+(yyvsp[(10) - (11)].integerType);

	                                 printf("Value in the TRAVEL loop: %d\n", k);	
}
}
else{
for(i=n;i<=rem;i++){	
k=l+(yyvsp[(10) - (11)].integerType);

	                                 printf("value in the TRAVEL loop: %d\n", k);	
}
}
printf("\n");
for(x=0;x<w;x++){
if((yyvsp[(6) - (11)].integerType)==store[x].ni){
store[x].ni=k;
break;
}
}
;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 405 "1707105.y"
    {
int n=(yyvsp[(2) - (23)].integerType);
int rem=(yyvsp[(4) - (23)].integerType);
int l=(yyvsp[(8) - (23)].integerType);
int r=(yyvsp[(10) - (23)].integerType);
int k=(yyvsp[(6) - (23)].integerType),i,x;
for(i=n;i<=rem;i++){	
k=k+(yyvsp[(10) - (23)].integerType);
if(k>(yyvsp[(15) - (23)].integerType)){
k=k*(yyvsp[(21) - (23)].integerType);

	                                 printf("\nMy roll: %d\n", k);	
break;
}

}
printf("\n");
for(x=0;x<w;x++){
if((yyvsp[(6) - (23)].integerType)==store[x].ni){
store[x].ni=k;
break;
}
}
;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 429 "1707105.y"
    {
int n=(yyvsp[(2) - (11)].integerType);
int rem=(yyvsp[(4) - (11)].integerType);
float l=(yyvsp[(8) - (11)].floattType);
float r=(yyvsp[(10) - (11)].floattType);
float k=(yyvsp[(6) - (11)].floattType);
int i,x;
if(k==l){
for(i=n;i<=rem;i++){	
k=k*(yyvsp[(10) - (11)].floattType);

	                                 printf("value in the TRAVEL loop for mult : %0.2f\n", k);	

}
}
else{
for(i=n;i<=rem;i++){	
k=l*(yyvsp[(10) - (11)].floattType);

	                                 printf("value in the TRAVEL loop: %0.2f\n", k);	
}
}
printf("\n");
for(x=0;x<w;x++){
if((yyvsp[(6) - (11)].floattType)==store[x].n){
store[x].n=k;
break;
}
}
;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 459 "1707105.y"
    {
int n=(yyvsp[(2) - (11)].integerType);
int rem=(yyvsp[(4) - (11)].integerType);
float l=(yyvsp[(8) - (11)].floattType);
float r=(yyvsp[(10) - (11)].floattType);
float k=(yyvsp[(6) - (11)].floattType);
int i,x;
if(k==l){
for(i=n;i<=rem;i++){	
k=k-(yyvsp[(10) - (11)].floattType);

	                                 printf("value in the TRAVEL loop: %0.2f\n", k);	
}
}
else{
for(i=n;i<=rem;i++){	
k=l-(yyvsp[(10) - (11)].floattType);

	                                 printf("value in the TRAVEL loop: %0.2f\n", k);	
}
}
printf("\n");
for(x=0;x<w;x++){
if((yyvsp[(6) - (11)].floattType)==store[x].n){
store[x].n=k;
break;
}
}
;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 488 "1707105.y"
    {
int n=(yyvsp[(2) - (11)].integerType);
int rem=(yyvsp[(4) - (11)].integerType);
float l=(yyvsp[(8) - (11)].floattType);
float r=(yyvsp[(10) - (11)].floattType);
float k=(yyvsp[(6) - (11)].floattType);
int i,x;
if(k==l){
for(i=n;i<=rem;i++){	
k=k+(yyvsp[(10) - (11)].floattType);

	                                 printf("Value in the TRAVEL loop: %0.2f\n", k);	
}
}
else{
for(i=n;i<=rem;i++){	
k=l+(yyvsp[(10) - (11)].floattType);

	                                 printf("value in the TRAVEL loop: %0.2f\n", k);	
}
}
printf("\n");
for(x=0;x<w;x++){
if((yyvsp[(6) - (11)].floattType)==store[x].n){
store[x].n=k;
break;
}
}
;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 518 "1707105.y"
    {
	       int  n=(yyvsp[(3) - (5)].integerType);   

			if(n%2==0){
			printf("%d is an even number \n",(yyvsp[(3) - (5)].integerType));
}
else{
printf("%d is an odd number \n",(yyvsp[(3) - (5)].integerType));

}


	     ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 532 "1707105.y"
    {
int n=(yyvsp[(3) - (7)].integerType);
int rem=(yyvsp[(5) - (7)].integerType);
int mul=1,i;

			for(i=n;i<=rem;i++){
	                                 mul*=i;			
			}
		
			printf("Multiplication from %d to %d is: %d\n", (yyvsp[(3) - (7)].integerType), (yyvsp[(5) - (7)].integerType),mul);
;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 543 "1707105.y"
    {
	         int n=(yyvsp[(3) - (7)].integerType);
int rem=(yyvsp[(5) - (7)].integerType);
int f=0,i;

			for(i=n; i<=rem; i++)
			{
				f+=i;			
			}
			printf("Summation from %d to %d is: %d\n", (yyvsp[(3) - (7)].integerType), (yyvsp[(5) - (7)].integerType),f);
	     ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 554 "1707105.y"
    {
int n=(yyvsp[(3) - (5)].integerType);
int primen=0,i;
for(i=2;i<n;i++){
	                                 if(n%i==0){
primen=1;
break;

}			
			}
			if(n==1){
			printf("%d is neither a  prime number nor a composite \n", (yyvsp[(3) - (5)].integerType));
}
else if(primen==0){
printf("%d is a prime number \n", (yyvsp[(3) - (5)].integerType));
}
else{
printf("%d is not a prime number \n", (yyvsp[(3) - (5)].integerType));
}
;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 574 "1707105.y"
    {
int n=(yyvsp[(3) - (7)].integerType);
int rem=(yyvsp[(5) - (7)].integerType);
			
			printf("%d ^ %d = %.2lf\n", (yyvsp[(3) - (7)].integerType), (yyvsp[(5) - (7)].integerType),pow(n,rem));
;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 580 "1707105.y"
    {
	        int n=(yyvsp[(3) - (5)].integerType),i,fac=1;   

			for(i=n; i>=2; i--)
			{
				fac*=i;			
			}
			
			printf("\nFactorial of %d : %d\n",(yyvsp[(3) - (5)].integerType),fac);
	     ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 590 "1707105.y"
    {
if((yyvsp[(3) - (5)].integerType) % 4==0){
printf("\n%d is a leap year \n", (yyvsp[(3) - (5)].integerType));
}
else{
printf("\n%d is not a leap year \n",(yyvsp[(3) - (5)].integerType));
}
;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 599 "1707105.y"
    {
int originalN = (yyvsp[(3) - (5)].integerType),rem,reversedN=0;
while ((yyvsp[(3) - (5)].integerType) != 0) {
        rem = (yyvsp[(3) - (5)].integerType) % 10;
        reversedN = reversedN * 10 + rem;
        (yyvsp[(3) - (5)].integerType) /= 10;
    }

   
    if (originalN == reversedN)
        printf("\n%d is a palindrome.\n", originalN);
    else
        printf("\n%d is not a palindrome.\n", originalN);

;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 614 "1707105.y"
    {
int gcd,i; 
for(i=1; i <= (yyvsp[(3) - (7)].integerType) && i <= (yyvsp[(5) - (7)].integerType); ++i)
    {
        
        if((yyvsp[(3) - (7)].integerType)%i==0 && (yyvsp[(5) - (7)].integerType)%i==0)
            gcd = i;
    }

    printf("\nG.C.D of %d and %d is %d\n", (yyvsp[(3) - (7)].integerType), (yyvsp[(5) - (7)].integerType), gcd);

;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 626 "1707105.y"
    {
int i,max; 
 max = ((yyvsp[(3) - (7)].integerType) > (yyvsp[(5) - (7)].integerType)) ? (yyvsp[(3) - (7)].integerType) : (yyvsp[(5) - (7)].integerType);

    while (1) {
        if (max % (yyvsp[(3) - (7)].integerType) == 0 && max % (yyvsp[(5) - (7)].integerType) == 0) {
            printf("\nL.C.M of %d and %d is %d.\n", (yyvsp[(3) - (7)].integerType), (yyvsp[(5) - (7)].integerType), max);
            break;
        }
        ++max;
    }
;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 638 "1707105.y"
    {
int n; 
if((yyvsp[(5) - (7)].integerType)!=0)
    {
     n = (yyvsp[(3) - (7)].integerType) / (yyvsp[(5) - (7)].integerType);
printf("\nresult of divison : %d\n",n);
   }
  else
    {
     n = 0;
     printf("\ndivide by 0\t\n");
    }
;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 651 "1707105.y"
    {
	           

			
			printf("\nAbsolute value of %d  is :%d \n",(yyvsp[(3) - (5)].integerType),abs((yyvsp[(3) - (5)].integerType)));
;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 657 "1707105.y"
    {
	           

			
			printf("\nAbsolute value of %0.2lf  is :%0.2lf \n",(yyvsp[(3) - (5)].floattType),fabs((yyvsp[(3) - (5)].floattType)));
;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 663 "1707105.y"
    {
int n; 
if((yyvsp[(5) - (7)].integerType)!=0)
    {
     n = (yyvsp[(3) - (7)].integerType) % (yyvsp[(5) - (7)].integerType);
printf("\nResult of MODULO function: %d\n",n);
   }
  else
    {
     n = 0;
     printf("\ndivide by 0\t\n");
    }	           

	
;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 678 "1707105.y"
    {
printf("\nSquare ROOT value of %d  is :%0.2lf \n",(yyvsp[(3) - (5)].integerType),sqrt((yyvsp[(3) - (5)].integerType)));
;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 681 "1707105.y"
    {
printf("\nSquare ROOT value of %0.2lf  is :%0.2lf \n",(yyvsp[(3) - (5)].floattType),sqrt((yyvsp[(3) - (5)].floattType)));
;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 684 "1707105.y"
    {

			printf("\nExponential value of %0.2lf  is :%0.2lf \n",(yyvsp[(3) - (5)].floattType),exp((yyvsp[(3) - (5)].floattType)));
;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 688 "1707105.y"
    {printf("\nPrinted Value %d\n",(yyvsp[(3) - (5)].integerType));;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 689 "1707105.y"
    {printf("\nPrinted Value %0.2f\n",(yyvsp[(3) - (5)].floattType));;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 690 "1707105.y"
    {int n;
n=(yyvsp[(3) - (5)].integerType);
printf("\nValue of Log Base 2 is %0.2lf\n",(log2(n)));;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 695 "1707105.y"
    {
	           

			
			printf("\nSine Value of %d  degree  is :%.2lf \n",(yyvsp[(3) - (4)].integerType),sin((yyvsp[(3) - (4)].integerType)*3.1416/180));
;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 701 "1707105.y"
    {
	           

			
			printf("\nCoSine value of %d  degree  is :%.2lf \n",(yyvsp[(3) - (4)].integerType),cos((yyvsp[(3) - (4)].integerType)*3.1416/180));
;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 707 "1707105.y"
    {
	           

			
			printf("\nTangent value of %d  degree  is :%.2lf \n",(yyvsp[(3) - (4)].integerType),tan((yyvsp[(3) - (4)].integerType)*3.1416/180));
;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 713 "1707105.y"
    {
	           

			
			printf("\nCotangent value of %d  degree  is :%.2lf \n",(yyvsp[(3) - (4)].integerType),(1/tan((yyvsp[(3) - (4)].integerType)*3.1416/180)));
;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 719 "1707105.y"
    {
	           

			
			printf("\nCosecant value of %d  degree  is :%.2lf \n",(yyvsp[(3) - (4)].integerType),(1/sin((yyvsp[(3) - (4)].integerType)*3.1416/180)));
;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 725 "1707105.y"
    {
	           

			
			printf("\nSecant value of %d  degree  is :%.2lf \n",(yyvsp[(3) - (4)].integerType),(1/cos((yyvsp[(3) - (4)].integerType)*3.1416/180)));
;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 731 "1707105.y"
    {
	           
float k, ret;
float val;
 
    
    k = (yyvsp[(3) - (4)].floattType);
    
    ret = asin(k);
    val = (ret * 180) / 3.1416;

			
			printf("\nArc Sine Value of %0.2lf is :%.0lf degree\n",(yyvsp[(3) - (4)].floattType),val);
;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 745 "1707105.y"
    {
	           
float k, ret, val;
 
    
    k = (yyvsp[(3) - (4)].floattType);
    
    ret = acos(k);
    val = (ret * 180) / 3.1416;
			
			printf("\nArc COSine Value of %0.2lf is :%.0lf degree\n",(yyvsp[(3) - (4)].floattType),val);
;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 757 "1707105.y"
    {
	           
float k, ret, val;
 
    
    k = (yyvsp[(3) - (4)].floattType);
    
    ret = atan(k);
    val = (ret * 180) / 3.1416;
			
			printf("\nArc TAN Value of %0.2lf is :%.0lf degree\n",(yyvsp[(3) - (4)].floattType),val);
;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 771 "1707105.y"
    {store[w].n=(yyvsp[(1) - (1)].floattType);
(yyval.floattType)=store[w].n;
w++;
;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 775 "1707105.y"
    { int search =0,k=0;
for(k=0;k<w;k++)
{
  if(strcmp(store[k].s,(yyvsp[(1) - (2)].stringtype))==0)
{
(yyval.floattType)=store[k].n;
search =1;
break;
}
}
if(search==0)
{
printf("\nvariable is not declared \n");
}
 ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 790 "1707105.y"
    { (yyval.floattType) = (yyvsp[(1) - (3)].floattType) + (yyvsp[(3) - (3)].floattType); ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 791 "1707105.y"
    { (yyval.floattType) = (yyvsp[(1) - (3)].floattType) - (yyvsp[(3) - (3)].floattType); ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 792 "1707105.y"
    { (yyval.floattType) = (yyvsp[(1) - (3)].floattType) * (yyvsp[(3) - (3)].floattType); ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 793 "1707105.y"
    {
  if((yyvsp[(3) - (3)].floattType))
    {
     (yyval.floattType) = (yyvsp[(1) - (3)].floattType) / (yyvsp[(3) - (3)].floattType);
   }
  else
    {
     (yyval.floattType) = 0;
     printf("\ndivide by 0\t");}
    ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 803 "1707105.y"
    { (yyval.floattType) = (yyvsp[(1) - (3)].floattType) < (yyvsp[(3) - (3)].floattType); ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 804 "1707105.y"
    { (yyval.floattType) = (yyvsp[(1) - (3)].floattType) > (yyvsp[(3) - (3)].floattType); ;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 805 "1707105.y"
    {(yyval.floattType) = (yyvsp[(1) - (3)].floattType) <= (yyvsp[(3) - (3)].floattType);;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 806 "1707105.y"
    {(yyval.floattType) = (yyvsp[(1) - (3)].floattType) >= (yyvsp[(3) - (3)].floattType);;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 807 "1707105.y"
    {(yyval.floattType) = (yyvsp[(1) - (3)].floattType) == (yyvsp[(3) - (3)].floattType);;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 808 "1707105.y"
    {(yyval.floattType) = (yyvsp[(1) - (3)].floattType) != (yyvsp[(3) - (3)].floattType);;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 809 "1707105.y"
    {(yyval.floattType) = (yyvsp[(1) - (2)].floattType) + 1;;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 810 "1707105.y"
    {(yyval.floattType) = (yyvsp[(1) - (2)].floattType) - 1;;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 811 "1707105.y"
    {(yyval.floattType) = (yyvsp[(1) - (3)].floattType) || (yyvsp[(3) - (3)].floattType);;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 812 "1707105.y"
    {(yyval.floattType) = (yyvsp[(1) - (3)].floattType) && (yyvsp[(3) - (3)].floattType);;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 813 "1707105.y"
    { (yyval.floattType) = (yyvsp[(2) - (3)].floattType); ;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 815 "1707105.y"
    {store[w].ni=(yyvsp[(1) - (1)].integerType);
(yyval.integerType)=store[w].ni;
w++;
;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 819 "1707105.y"
    { int search =0,j=0;
for(j=0;j<w;j++)
{
if(strcmp(store[j].s,(yyvsp[(1) - (1)].stringtype))==0)
{
(yyval.integerType)=store[j].ni;
search =1;
break;
}
}
if(search==0)
{
printf("\nvariable is not declared \n");
}
 ;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 834 "1707105.y"
    { (yyval.integerType) = (yyvsp[(1) - (3)].integerType) + (yyvsp[(3) - (3)].integerType); ;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 835 "1707105.y"
    { (yyval.integerType) = (yyvsp[(1) - (3)].integerType) - (yyvsp[(3) - (3)].integerType); ;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 836 "1707105.y"
    { (yyval.integerType) = (yyvsp[(1) - (3)].integerType) * (yyvsp[(3) - (3)].integerType); ;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 837 "1707105.y"
    {
  if((yyvsp[(3) - (3)].integerType))
    {
     (yyval.integerType) = (yyvsp[(1) - (3)].integerType) / (yyvsp[(3) - (3)].integerType);
   }
  else
    {
     (yyval.integerType) = 0;
     printf("\ndivide by 0\t");}
    ;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 847 "1707105.y"
    { (yyval.integerType) = (yyvsp[(1) - (3)].integerType) < (yyvsp[(3) - (3)].integerType); ;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 848 "1707105.y"
    { (yyval.integerType) = (yyvsp[(1) - (3)].integerType) > (yyvsp[(3) - (3)].integerType); ;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 849 "1707105.y"
    {(yyval.integerType) = (yyvsp[(1) - (3)].integerType) <= (yyvsp[(3) - (3)].integerType);;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 850 "1707105.y"
    {(yyval.integerType) = (yyvsp[(1) - (3)].integerType) >= (yyvsp[(3) - (3)].integerType);;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 851 "1707105.y"
    {(yyval.integerType) = (yyvsp[(1) - (3)].integerType) == (yyvsp[(3) - (3)].integerType);;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 852 "1707105.y"
    {(yyval.integerType) = (yyvsp[(1) - (3)].integerType) != (yyvsp[(3) - (3)].integerType);;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 853 "1707105.y"
    {(yyval.integerType) = (yyvsp[(1) - (2)].integerType) + 1;
;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 855 "1707105.y"
    {(yyval.integerType) = (yyvsp[(1) - (2)].integerType) - 1;;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 856 "1707105.y"
    {(yyval.integerType) = (yyvsp[(1) - (3)].integerType) || (yyvsp[(3) - (3)].integerType);;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 857 "1707105.y"
    {(yyval.integerType) = (yyvsp[(1) - (3)].integerType) && (yyvsp[(3) - (3)].integerType);;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 858 "1707105.y"
    { (yyval.integerType) = (yyvsp[(2) - (3)].integerType); ;}
    break;



/* Line 1455 of yacc.c  */
#line 3382 "1707105.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



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
		      yytoken, &yylval);
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 862 "1707105.y"

int yywrap(){
return 1;
}
int yyerror(char *s)
{
fprintf(stderr,"%s\n",s);
}
int main()
{
freopen("a.txt","r",stdin);
freopen("output.txt","w",stdout);
yyparse();
}
