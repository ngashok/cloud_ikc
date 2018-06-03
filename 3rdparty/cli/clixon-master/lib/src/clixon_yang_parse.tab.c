/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         clixon_yang_parseparse
#define yylex           clixon_yang_parselex
#define yyerror         clixon_yang_parseerror
#define yydebug         clixon_yang_parsedebug
#define yynerrs         clixon_yang_parsenerrs

#define yylval          clixon_yang_parselval
#define yychar          clixon_yang_parsechar

/* Copy the first part of user declarations.  */



# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_CLIXON_YANG_PARSE_Y_TAB_H_INCLUDED
# define YY_CLIXON_YANG_PARSE_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int clixon_yang_parsedebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    MY_EOF = 258,
    DQ = 259,
    CHAR = 260,
    K_ANYXML = 261,
    K_ARGUMENT = 262,
    K_AUGMENT = 263,
    K_BASE = 264,
    K_BELONGS_TO = 265,
    K_BIT = 266,
    K_CASE = 267,
    K_CHOICE = 268,
    K_CONFIG = 269,
    K_CONTACT = 270,
    K_CONTAINER = 271,
    K_DEFAULT = 272,
    K_DESCRIPTION = 273,
    K_DEVIATE = 274,
    K_DEVIATION = 275,
    K_ENUM = 276,
    K_ERROR_APP_TAG = 277,
    K_ERROR_MESSAGE = 278,
    K_EXTENSION = 279,
    K_FEATURE = 280,
    K_FRACTION_DIGITS = 281,
    K_GROUPING = 282,
    K_IDENTITY = 283,
    K_IF_FEATURE = 284,
    K_IMPORT = 285,
    K_INCLUDE = 286,
    K_INPUT = 287,
    K_KEY = 288,
    K_LEAF = 289,
    K_LEAF_LIST = 290,
    K_LENGTH = 291,
    K_LIST = 292,
    K_MANDATORY = 293,
    K_MAX_ELEMENTS = 294,
    K_MIN_ELEMENTS = 295,
    K_MODULE = 296,
    K_MUST = 297,
    K_NAMESPACE = 298,
    K_NOTIFICATION = 299,
    K_ORDERED_BY = 300,
    K_ORGANIZATION = 301,
    K_OUTPUT = 302,
    K_PATH = 303,
    K_PATTERN = 304,
    K_POSITION = 305,
    K_PREFIX = 306,
    K_PRESENCE = 307,
    K_RANGE = 308,
    K_REFERENCE = 309,
    K_REFINE = 310,
    K_REQUIRE_INSTANCE = 311,
    K_REVISION = 312,
    K_REVISION_DATE = 313,
    K_RPC = 314,
    K_STATUS = 315,
    K_SUBMODULE = 316,
    K_TYPE = 317,
    K_TYPEDEF = 318,
    K_UNIQUE = 319,
    K_UNITS = 320,
    K_USES = 321,
    K_VALUE = 322,
    K_WHEN = 323,
    K_YANG_VERSION = 324,
    K_YIN_ELEMENT = 325
  };
#endif
/* Tokens.  */
#define MY_EOF 258
#define DQ 259
#define CHAR 260
#define K_ANYXML 261
#define K_ARGUMENT 262
#define K_AUGMENT 263
#define K_BASE 264
#define K_BELONGS_TO 265
#define K_BIT 266
#define K_CASE 267
#define K_CHOICE 268
#define K_CONFIG 269
#define K_CONTACT 270
#define K_CONTAINER 271
#define K_DEFAULT 272
#define K_DESCRIPTION 273
#define K_DEVIATE 274
#define K_DEVIATION 275
#define K_ENUM 276
#define K_ERROR_APP_TAG 277
#define K_ERROR_MESSAGE 278
#define K_EXTENSION 279
#define K_FEATURE 280
#define K_FRACTION_DIGITS 281
#define K_GROUPING 282
#define K_IDENTITY 283
#define K_IF_FEATURE 284
#define K_IMPORT 285
#define K_INCLUDE 286
#define K_INPUT 287
#define K_KEY 288
#define K_LEAF 289
#define K_LEAF_LIST 290
#define K_LENGTH 291
#define K_LIST 292
#define K_MANDATORY 293
#define K_MAX_ELEMENTS 294
#define K_MIN_ELEMENTS 295
#define K_MODULE 296
#define K_MUST 297
#define K_NAMESPACE 298
#define K_NOTIFICATION 299
#define K_ORDERED_BY 300
#define K_ORGANIZATION 301
#define K_OUTPUT 302
#define K_PATH 303
#define K_PATTERN 304
#define K_POSITION 305
#define K_PREFIX 306
#define K_PRESENCE 307
#define K_RANGE 308
#define K_REFERENCE 309
#define K_REFINE 310
#define K_REQUIRE_INSTANCE 311
#define K_REVISION 312
#define K_REVISION_DATE 313
#define K_RPC 314
#define K_STATUS 315
#define K_SUBMODULE 316
#define K_TYPE 317
#define K_TYPEDEF 318
#define K_UNIQUE 319
#define K_UNITS 320
#define K_USES 321
#define K_VALUE 322
#define K_WHEN 323
#define K_YANG_VERSION 324
#define K_YIN_ELEMENT 325

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{


    int intval;
    char *string;


};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE clixon_yang_parselval;

int clixon_yang_parseparse (void *_yy);

#endif /* !YY_CLIXON_YANG_PARSE_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */


/* Here starts user C-code */

/* typecast macro */
#define _YY ((struct clicon_yang_yacc_arg *)_yy)

#define _YYERROR(msg) {clicon_debug(2, "YYERROR %s '%s' %d", (msg), clixon_yang_parsetext, _YY->yy_linenum); YYERROR;}

/* add _yy to error paramaters */
#define YY_(msgid) msgid 

#include "clixon_config.h"

#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stdlib.h>
#include <errno.h>
#include <assert.h>
#include <ctype.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <net/if.h>

#include <cligen/cligen.h>

#include "clixon_queue.h"
#include "clixon_hash.h"
#include "clixon_handle.h"
#include "clixon_err.h"
#include "clixon_log.h"
#include "clixon_yang.h"
#include "clixon_yang_parse.h"

extern int clixon_yang_parseget_lineno  (void);

int 
clicon_yang_debug(int d)
{
    debug = d;
    return 0;
}

/* 
   clixon_yang_parseerror
   also called from yacc generated code *
*/
void 
clixon_yang_parseerror(void *_yy,
		       char *s) 
{ 
    clicon_err(OE_YANG, 0, "%s on line %d: %s at or before: '%s'", 
	       _YY->yy_name,
	       _YY->yy_linenum ,
	       s, 
	       clixon_yang_parsetext); 
  return;
}

int
yang_parse_init(struct clicon_yang_yacc_arg *yy,
		yang_spec                   *ysp)
{
    return 0;
}


int
yang_parse_exit(struct clicon_yang_yacc_arg *yy)
{
    return 0;
}

int
ystack_pop(struct clicon_yang_yacc_arg *yy)
{
    struct ys_stack *ystack; 

    assert(ystack =  yy->yy_stack);
    yy->yy_stack = ystack->ys_next;
    free(ystack);
    return 0;
}

struct ys_stack *
ystack_push(struct clicon_yang_yacc_arg *yy,
	    yang_node                   *yn)
{
    struct ys_stack *ystack; 

    if ((ystack = malloc(sizeof(*ystack))) == NULL) {
	clicon_err(OE_YANG, errno, "malloc");
	return NULL;
    }
    memset(ystack, 0, sizeof(*ystack));
    ystack->ys_node = yn;
    ystack->ys_next = yy->yy_stack;
    yy->yy_stack = ystack;
    return ystack;
}

/*! Add a yang statement to existing top-of-stack.
 *
 * @param[in]  yy        Yang yacc argument
 * @param[in]  keyword   Yang keyword
 * @param[in]  argument  Yang argument
 * @param[in]  extra     Yang extra for cornercases (unknown/extension)

 * @note consumes 'argument' and 'extra' which assumes it is malloced and not freed by caller
 */
static yang_stmt *
ysp_add(struct clicon_yang_yacc_arg *yy, 
	enum rfc_6020                keyword, 
	char                        *argument,
    	char                        *extra)
{
    struct ys_stack *ystack = yy->yy_stack;
    yang_stmt       *ys = NULL;
    yang_node       *yn;
 
    ystack = yy->yy_stack;
    if (ystack == NULL){
	clicon_err(OE_YANG, errno, "No stack");
	goto err;
    }
    yn = ystack->ys_node;
    if ((ys = ys_new(keyword)) == NULL)
	goto err;
    /* NOTE: does not make a copy of string, ie argument is 'consumed' here */
    ys->ys_argument = argument;
    if (yn_insert(yn, ys) < 0) /* Insert into hierarchy */
	goto err; 
    if (ys_parse_sub(ys, extra) < 0)     /* Check statement-specific syntax */
	goto err2; /* dont free since part of tree */
//  done:
    return ys;
  err:
    if (ys)
	ys_free(ys);
  err2:
    return NULL;
}

/*! combination of ysp_add and ysp_push for sub-modules */
static yang_stmt *
ysp_add_push(struct clicon_yang_yacc_arg *yy,
	     enum rfc_6020                keyword, 
	     char                        *argument)
{
    yang_stmt *ys;

    if ((ys = ysp_add(yy, keyword, argument, NULL)) == NULL)
	return NULL;
    if (ystack_push(yy, (yang_node*)ys) == NULL)
	return NULL;
    return ys;
}

/* identifier-ref-arg-str has a [prefix :] id and prefix_id joins the id with an 
   optional prefix into a single string */
static char*
prefix_id_join(char *prefix,
	       char *id)
{
    char *str;
    int   len;
    
    if (prefix){
	len = strlen(prefix) + strlen(id) + 2;
	if ((str = malloc(len)) == NULL){
	    clicon_err(OE_UNIX, errno, "malloc");
	    return NULL;
	}
	snprintf(str, len, "%s:%s", prefix, id);
	free(prefix);
	free(id);
    }
    else
	str = id;
    return str;
}





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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  14
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1652

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  77
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  171
/* YYNRULES -- Number of rules.  */
#define YYNRULES  446
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  615

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   325

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,    73,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    76,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    71,    72,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    74,     2,    75,     2,     2,     2,     2,
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
      65,    66,    67,    68,    69,    70
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   332,   332,   334,   339,   344,   353,   352,   360,   362,
     366,   367,   368,   369,   370,   371,   372,   376,   382,   384,
     388,   390,   391,   392,   393,   394,   395,   399,   401,   404,
     406,   407,   411,   413,   417,   422,   424,   428,   429,   433,
     435,   439,   443,   442,   449,   451,   455,   456,   457,   458,
     464,   465,   468,   469,   470,   471,   475,   476,   479,   480,
     481,   482,   483,   484,   485,   486,   489,   490,   491,   492,
     493,   494,   495,   499,   503,   502,   509,   510,   513,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   529,   533,   532,   539,   540,   543,   544,   545,   546,
     547,   548,   549,   550,   551,   552,   553,   554,   555,   559,
     563,   562,   569,   570,   573,   574,   575,   576,   577,   578,
     579,   580,   581,   582,   583,   584,   585,   586,   590,   594,
     593,   600,   602,   606,   607,   608,   609,   610,   611,   612,
     613,   614,   615,   616,   617,   618,   619,   620,   621,   622,
     626,   630,   629,   636,   638,   642,   643,   644,   645,   646,
     647,   648,   649,   650,   651,   652,   653,   657,   658,   659,
     660,   661,   665,   669,   668,   675,   677,   681,   682,   683,
     684,   685,   686,   687,   688,   693,   697,   696,   703,   705,
     709,   710,   711,   712,   713,   714,   715,   716,   717,   721,
     725,   724,   731,   733,   737,   738,   739,   740,   741,   742,
     743,   744,   745,   749,   753,   752,   759,   761,   765,   766,
     767,   768,   769,   773,   776,   775,   782,   784,   788,   789,
     790,   791,   792,   793,   794,   795,   799,   803,   802,   809,
     811,   815,   816,   817,   821,   825,   824,   831,   833,   837,
     838,   839,   840,   841,   842,   843,   844,   845,   850,   849,
     856,   858,   862,   863,   864,   865,   870,   869,   879,   878,
     885,   887,   891,   892,   893,   894,   895,   896,   897,   898,
     902,   906,   905,   917,   919,   924,   926,   928,   929,   931,
     933,   934,   936,   939,   941,   948,   947,   954,   956,   960,
     961,   962,   963,   964,   965,   966,   970,   975,   974,   981,
     983,   987,   988,   989,   990,   991,   995,  1000,   999,  1006,
    1008,  1012,  1013,  1014,  1015,  1019,  1023,  1022,  1031,  1033,
    1037,  1038,  1039,  1040,  1041,  1042,  1045,  1046,  1050,  1054,
    1053,  1061,  1063,  1067,  1068,  1069,  1070,  1071,  1072,  1076,
    1081,  1080,  1087,  1089,  1093,  1094,  1095,  1096,  1097,  1098,
    1102,  1107,  1106,  1113,  1115,  1119,  1120,  1121,  1122,  1123,
    1127,  1131,  1130,  1137,  1139,  1143,  1144,  1145,  1146,  1147,
    1148,  1152,  1156,  1155,  1162,  1164,  1168,  1169,  1170,  1171,
    1172,  1176,  1181,  1180,  1187,  1189,  1193,  1194,  1195,  1196,
    1200,  1205,  1204,  1211,  1213,  1217,  1218,  1223,  1228,  1233,
    1238,  1243,  1248,  1253,  1259,  1264,  1269,  1274,  1279,  1284,
    1289,  1294,  1297,  1302,  1307,  1312,  1317,  1322,  1327,  1332,
    1337,  1343,  1349,  1355,  1360,  1365,  1368,  1371,  1374,  1379,
    1382,  1383,  1387,  1395,  1399,  1403,  1410
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "MY_EOF", "DQ", "CHAR", "K_ANYXML",
  "K_ARGUMENT", "K_AUGMENT", "K_BASE", "K_BELONGS_TO", "K_BIT", "K_CASE",
  "K_CHOICE", "K_CONFIG", "K_CONTACT", "K_CONTAINER", "K_DEFAULT",
  "K_DESCRIPTION", "K_DEVIATE", "K_DEVIATION", "K_ENUM", "K_ERROR_APP_TAG",
  "K_ERROR_MESSAGE", "K_EXTENSION", "K_FEATURE", "K_FRACTION_DIGITS",
  "K_GROUPING", "K_IDENTITY", "K_IF_FEATURE", "K_IMPORT", "K_INCLUDE",
  "K_INPUT", "K_KEY", "K_LEAF", "K_LEAF_LIST", "K_LENGTH", "K_LIST",
  "K_MANDATORY", "K_MAX_ELEMENTS", "K_MIN_ELEMENTS", "K_MODULE", "K_MUST",
  "K_NAMESPACE", "K_NOTIFICATION", "K_ORDERED_BY", "K_ORGANIZATION",
  "K_OUTPUT", "K_PATH", "K_PATTERN", "K_POSITION", "K_PREFIX",
  "K_PRESENCE", "K_RANGE", "K_REFERENCE", "K_REFINE", "K_REQUIRE_INSTANCE",
  "K_REVISION", "K_REVISION_DATE", "K_RPC", "K_STATUS", "K_SUBMODULE",
  "K_TYPE", "K_TYPEDEF", "K_UNIQUE", "K_UNITS", "K_USES", "K_VALUE",
  "K_WHEN", "K_YANG_VERSION", "K_YIN_ELEMENT", "':'", "';'", "' '", "'{'",
  "'}'", "'+'", "$accept", "file", "unknown_stmt", "module_stmt", "$@1",
  "module_substmts", "module_substmt", "submodule_stmt",
  "submodule_substmts", "submodule_substmt", "module_header_stmts",
  "module_header_stmt", "submodule_header_stmts", "submodule_header_stmt",
  "linkage_stmts", "linkage_stmt", "revision_stmts", "revision_stmt",
  "$@2", "revision_substmts", "revision_substmt", "meta_stmts",
  "meta_stmt", "body_stmts", "body_stmt", "data_def_stmt",
  "container_stmt", "$@3", "container_substmts", "container_substmt",
  "leaf_stmt", "$@4", "leaf_substmts", "leaf_substmt", "leaf_list_stmt",
  "$@5", "leaf_list_substmts", "leaf_list_substmt", "list_stmt", "$@6",
  "list_substmts", "list_substmt", "choice_stmt", "$@7", "choice_substmts",
  "choice_substmt", "short_case_stmt", "case_stmt", "$@8", "case_substmts",
  "case_substmt", "anyxml_stmt", "$@9", "anyxml_substmts",
  "anyxml_substmt", "uses_stmt", "$@10", "uses_substmts", "uses_substmt",
  "refine_stmt", "$@11", "refine_substmts", "refine_substmt",
  "uses_augment_stmt", "augment_stmt", "$@12", "augment_substmts",
  "augment_substmt", "when_stmt", "$@13", "when_substmts", "when_substmt",
  "rpc_stmt", "$@14", "rpc_substmts", "rpc_substmt", "input_stmt", "$@15",
  "input_substmts", "input_substmt", "output_stmt", "$@16", "typedef_stmt",
  "$@17", "typedef_substmts", "typedef_substmt", "type_stmt", "$@18",
  "type_body_stmts", "type_body_stmt", "grouping_stmt", "$@19",
  "grouping_substmts", "grouping_substmt", "length_stmt", "$@20",
  "length_substmts", "length_substmt", "pattern_stmt", "$@21",
  "pattern_substmts", "pattern_substmt", "extension_stmt", "$@22",
  "extension_substmts", "extension_substmt", "argument_stmt",
  "feature_stmt", "$@23", "feature_substmts", "feature_substmt",
  "identity_stmt", "$@24", "identity_substmts", "identity_substmt",
  "range_stmt", "$@25", "range_substmts", "range_substmt", "enum_stmt",
  "$@26", "enum_substmts", "enum_substmt", "bit_stmt", "$@27",
  "bit_substmts", "bit_substmt", "must_stmt", "$@28", "must_substmts",
  "must_substmt", "error_message_stmt", "import_stmt", "$@29",
  "import_substmts", "import_substmt", "yang_version_stmt",
  "fraction_digits_stmt", "if_feature_stmt", "value_stmt", "position_stmt",
  "status_stmt", "config_stmt", "base_stmt", "path_stmt",
  "require_instance_stmt", "units_stmt", "default_stmt", "contact_stmt",
  "revision_date_stmt", "include_stmt", "namespace_stmt", "prefix_stmt",
  "description_stmt", "organization_stmt", "min_elements_stmt",
  "max_elements_stmt", "reference_stmt", "mandatory_stmt", "presence_stmt",
  "ordered_by_stmt", "key_stmt", "unique_stmt", "config_arg_str",
  "integer_value", "identifier_ref_arg_str", "id_arg_str", "string",
  "qstrings", "qstring", "ustring", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,    58,    59,    32,   123,   125,    43
};
# endif

#define YYPACT_NINF -307

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-307)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -1,   237,   237,    51,    58,   108,   170,  -307,  -307,  -307,
     110,  -307,   186,   140,  -307,  -307,  -307,   294,   144,   231,
    -307,  1300,  -307,  1241,  -307,   237,   237,   237,   237,   237,
     237,   237,   237,   237,   237,   237,   237,   237,   237,   237,
     237,   237,   237,   237,   237,   237,   237,  -307,   873,  -307,
     168,  -307,   200,  -307,   204,  -307,   247,  -307,  1551,  -307,
    -307,  -307,  -307,  -307,  -307,  -307,  -307,  -307,  -307,  -307,
    -307,  -307,  -307,  -307,  -307,  -307,  -307,  -307,  -307,  -307,
    -307,  -307,     1,   237,   237,  -307,   802,  -307,   249,  -307,
     200,   204,   247,  1551,  -307,  -307,  -307,   206,  -307,   213,
     217,   236,   242,   256,   258,  -307,   263,  -307,   -33,   264,
     265,   283,   298,   299,   304,   307,  -307,   308,   232,   313,
    -307,  -307,  -307,  -307,  -307,  -307,  -307,   170,   323,   325,
    -307,  -307,  -307,  -307,   165,   245,  -307,   322,  -307,  -307,
     331,  -307,  -307,   332,  -307,   335,   337,  -307,   338,   342,
    -307,   273,  -307,   351,  -307,   358,  -307,   365,  -307,  -307,
    -307,   369,  -307,   370,   371,  -307,   375,   237,  -307,    68,
    -307,  -307,  1011,  1502,  1285,  1402,   376,   448,  1571,   598,
       5,   237,   380,  1487,  1435,  1359,   113,  1105,   324,   697,
    -307,  -307,   237,   237,   237,   237,   237,   237,   237,   774,
    -307,  -307,  -307,  -307,  -307,  -307,  -307,  -307,  -307,    19,
     237,  -307,  -307,  1177,  -307,  -307,  -307,  -307,  -307,  -307,
     237,  -307,  -307,  -307,  -307,  -307,   900,  -307,  -307,  -307,
    -307,  -307,  -307,  -307,  -307,  -307,  -307,  -307,  -307,   237,
    -307,  -307,  1032,  -307,  -307,  -307,  -307,  -307,  -307,  -307,
    -307,  -307,  -307,  -307,   237,  -307,    69,  -307,  -307,  -307,
    -307,  -307,  -307,   134,  -307,  -307,  -307,  -307,  -307,  -307,
    -307,  -307,  1207,  -307,  -307,  -307,  -307,   237,  -307,   220,
    -307,  -307,  -307,  -307,  -307,   352,  -307,  -307,  -307,   326,
    -307,   237,   237,  -307,  1140,  -307,  -307,  -307,  -307,  -307,
    -307,  -307,  -307,  -307,  -307,  -307,  -307,   237,   237,   237,
    -307,  1088,  -307,  -307,  -307,  -307,  -307,  -307,  -307,  -307,
    -307,  -307,  -307,  -307,  -307,   237,   237,  -307,  -307,   960,
    -307,  -307,  -307,  -307,  -307,  -307,  -307,  -307,  -307,  -307,
    -307,  -307,  -307,  -307,  -307,  -307,    11,  -307,  -307,  -307,
    -307,  -307,   959,  -307,  -307,  -307,  -307,  -307,  -307,  -307,
    -307,  -307,  -307,    17,  -307,  -307,  -307,  -307,  -307,  -307,
    -307,   237,  -307,   601,  -307,  -307,  -307,  -307,  -307,  -307,
    -307,  -307,  -307,   327,   379,  -307,   386,   387,   389,   390,
     391,  -307,  -307,   170,   396,  -307,  -307,   400,  -307,  -307,
     402,  -307,  -307,    -5,  -307,  -307,  -307,  -307,  -307,  -307,
     403,  -307,  -307,  -307,  -307,  -307,   416,   418,  -307,  -307,
     419,  -307,   420,   424,  -307,  -307,   426,   429,  -307,  -307,
    -307,  -307,   431,   432,  -307,  -307,  -307,  -307,   439,  -307,
    -307,  -307,  -307,  -307,  -307,  -307,   438,  -307,  -307,   440,
      28,  -307,   441,  -307,  -307,  -307,   449,  -307,  -307,   442,
    -307,  -307,  -307,  -307,  -307,  -307,   616,   616,  -307,   451,
     359,   102,  -307,  1453,  -307,  1590,  -307,   444,  -307,  -307,
    -307,   886,   274,   237,   174,  -307,  -307,  -307,  -307,   180,
    -307,  -307,  -307,  -307,  -307,  1106,  -307,  -307,  -307,  -307,
    -307,  -307,   237,   237,   237,   237,   237,   237,   237,   237,
    -307,   521,  -307,  -307,  -307,  -307,  -307,  -307,  -307,  -307,
    -307,  -307,  -307,  -307,  -307,  -307,   202,  -307,  -307,  -307,
    -307,   454,  -307,  -307,  -307,  -307,  -307,  -307,   456,   457,
     459,   469,   471,   472,   473,   477,  -307,  -307,  -307,  -307,
    -307,  -307,   481,  -307,   482,  -307,  -307,   484,  -307,  -307,
     489,  -307,   490,  -307,   257,   279,   410,   321,   410,   237,
     354,  -307,  -307,  -307,  -307,  -307,   237,  -307,   227,  -307,
    -307,  -307,  -307,  -307,  -307,   101,  -307,  -307,  -307,  -307,
    -307,   259,  -307,  -307,  -307,  -307,   120,  -307,  -307,  -307,
    -307,   479,  -307,  -307,   493,  -307,  -307,  -307,  -307,  -307,
    -307,  -307,  -307,  -307,  -307
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,   446,     6,   439,
     440,   443,   441,     0,     1,     2,     3,     0,     0,     0,
     445,    26,   444,    16,   442,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    25,     0,    19,
      20,    33,    21,    36,    23,    40,    22,    51,    24,    57,
      63,    66,    67,    68,    69,    70,    71,    72,    64,    65,
      61,    62,    58,    59,    60,    37,    34,    53,    38,    54,
      52,    55,     0,     0,     0,    15,     0,     9,    10,    28,
      11,    13,    12,    14,    29,    30,    31,   186,   224,   151,
       0,    74,     0,   326,   339,   295,   350,   401,     0,    92,
     110,   129,     0,     0,    42,   245,   268,   200,   437,     0,
      17,    18,    32,    35,    39,    50,    56,     0,     0,     0,
       7,     8,    27,   185,     0,     0,   150,     0,   419,    73,
       0,   425,   325,     0,   338,     0,     0,   349,     0,     0,
     421,     0,    91,     0,   109,     0,   128,     0,   426,   429,
      41,     0,   244,     0,     0,   199,     0,     0,   407,     0,
     423,   424,     0,   235,   166,    90,   335,   348,   305,   359,
       0,     0,     0,   108,   127,   149,    49,   257,   279,   212,
     438,     4,     0,     0,     0,     0,     0,     0,     0,     0,
     189,   190,   192,   191,   195,   193,   196,   197,   194,     0,
       0,   233,   234,     0,   227,   228,   229,   230,   231,   232,
       0,   165,   167,   168,   169,   170,     0,   154,   163,   164,
     171,   155,   156,   160,   158,   157,   161,   162,   159,     0,
      89,    88,     0,    77,    78,    86,    87,    80,    79,    83,
      82,    84,    85,    81,     0,   334,     0,   329,   330,   331,
     332,   333,   347,     0,   342,   343,   344,   345,   346,   304,
     302,   303,     0,   298,   299,   300,   301,     0,   358,     0,
     353,   355,   354,   356,   357,     0,   404,   406,   405,     0,
     422,     0,     0,   107,     0,    95,    96,    98,   100,    97,
     104,   102,    99,   101,   105,   106,   103,     0,     0,     0,
     126,     0,   113,   114,   116,   118,   115,   123,   119,   117,
     124,   120,   121,   125,   122,     0,     0,   148,   147,     0,
     132,   133,   145,   146,   135,   134,   142,   138,   143,   139,
     140,   144,   141,   136,   137,    48,     0,    45,    46,    47,
     258,   266,     0,   248,   255,   256,   253,   254,   249,   250,
     251,   252,   278,     0,   271,   272,   275,   273,   274,   276,
     277,     0,   211,     0,   203,   209,   210,   223,   204,   205,
     206,   207,   208,     0,     0,   435,     0,     0,   392,     0,
     237,   187,   188,     0,   173,   225,   226,     0,   152,   153,
       0,    75,    76,     0,   327,   328,   340,   341,   296,   297,
       0,   351,   352,   402,   403,   420,   281,     0,    93,    94,
       0,   436,     0,     0,   111,   112,     0,     0,   130,   131,
      43,    44,     0,     0,   246,   247,   269,   270,   214,   201,
     202,     5,   413,   409,   430,   391,     0,   412,   236,     0,
       0,   172,     0,   418,   431,   336,     0,   414,   280,     0,
     417,   428,   427,   432,   433,   434,   265,   265,   213,     0,
     399,   243,   198,   184,   337,     0,   264,     0,   261,   262,
     263,     0,   222,     0,     0,   395,   396,   397,   398,     0,
     240,   241,   242,   183,   182,     0,   176,   177,   178,   179,
     180,   181,     0,     0,     0,     0,     0,     0,     0,     0,
     294,     0,   284,   287,   288,   285,   289,   293,   286,   292,
     290,   291,   259,   260,   267,   221,     0,   217,   218,   220,
     219,     0,   393,   394,   238,   239,   174,   175,   382,   371,
       0,   307,     0,   317,   361,     0,   282,   283,   215,   216,
     400,   381,     0,   370,     0,   408,   306,     0,   415,   316,
       0,   360,     0,   416,   390,   380,   315,   324,   369,     0,
       0,   385,   386,   387,   388,   389,     0,   379,     0,   374,
     375,   376,   377,   378,   314,     0,   310,   311,   312,   313,
     323,     0,   320,   322,   321,   368,     0,   364,   365,   366,
     367,     0,   383,   384,     0,   372,   373,   308,   309,   318,
     319,   362,   363,   411,   410
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -307,  -307,    27,  -307,  -307,  -307,   340,  -307,  -307,   465,
    -307,   478,  -307,   525,    41,   137,   122,   -16,  -307,  -307,
     225,   135,   167,   138,    23,    73,  -142,  -307,  -307,   334,
    -138,  -307,  -307,   284,  -137,  -307,  -307,   269,  -104,  -307,
    -307,   252,  -307,  -307,  -307,   356,  -307,   -80,  -307,  -307,
      89,   -67,  -307,  -307,   388,  -307,  -307,  -307,   215,  -307,
    -307,  -307,    60,  -307,  -188,  -307,  -307,   378,   452,  -307,
    -307,   100,  -307,  -307,  -307,   246,  -307,  -307,   130,  -281,
    -307,  -307,   -25,  -307,  -307,   238,  -179,  -307,  -307,    88,
     295,  -307,  -307,   328,  -307,  -307,  -307,    25,  -307,  -307,
    -307,    20,  -307,  -307,  -307,   346,  -307,  -307,  -307,  -307,
     345,  -307,  -307,  -307,   336,  -307,  -307,  -307,    18,  -307,
    -307,  -307,    35,  -307,  -307,  -307,    47,  -157,  -307,  -307,
     136,   182,  -307,  -307,  -307,   343,    29,  -307,   310,  -307,
    -307,  -130,  -164,  -285,  -307,  -307,  -176,  -158,  -307,   480,
    -307,  -307,  -177,   512,  -307,  -181,  -178,   175,  -160,  -307,
    -172,  -307,  -307,  -307,  -306,  -163,    66,   226,  -307,   614,
      -6
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,    47,     4,    18,    86,    87,     5,    48,    49,
      88,    89,    50,    51,    52,    53,    54,    55,   161,   346,
     347,    56,    57,    58,    59,    60,    61,   140,   242,   243,
      62,   153,   294,   295,    63,   155,   311,   312,    64,   157,
     329,   330,    65,   137,   226,   227,   228,   212,   452,   495,
     496,    66,   134,   199,   200,    67,   166,   373,   374,   375,
     469,   526,   527,   376,    68,   135,   213,   214,   201,   449,
     489,   490,    69,   163,   352,   353,   354,   432,   477,   478,
     355,   433,    70,   164,   363,   364,   297,   459,   511,   512,
      71,   146,   272,   273,   513,   557,   585,   586,   514,   560,
     591,   592,    72,   143,   256,   257,   258,    73,   145,   263,
     264,    74,   148,   279,   280,   515,   562,   596,   597,   516,
     554,   578,   579,   517,   552,   570,   571,   202,   446,   484,
     485,   486,    75,   149,   285,   286,    76,   518,   203,   580,
     572,   204,   205,   282,   520,   521,   302,   235,    77,   287,
      78,    95,    96,    79,    80,   321,   322,    81,   208,   253,
     324,   343,   344,   384,   420,   117,     8,     9,    10,    11,
      12
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      17,   377,   422,   288,   339,   314,    20,   340,   319,   365,
     234,   250,   367,   342,   238,    82,     7,    82,   247,   301,
     318,   337,     7,   306,    20,   303,   298,   315,   334,    30,
     368,   386,   222,    20,   220,    30,   223,   224,   124,   150,
       1,   151,    82,   217,   233,   249,   259,   266,   274,   281,
      85,    14,    94,   300,   317,   336,    84,   359,   366,   380,
       2,    15,   234,   181,    90,    41,   238,   455,    13,   456,
     225,    41,   127,    20,     7,   124,   254,   197,   250,   291,
      82,   126,   292,   217,   222,   247,   430,    30,   223,   224,
     393,    97,   436,    99,   229,   101,   233,   103,   104,   105,
     472,   107,   108,   109,   110,   111,     7,   230,   288,   115,
     116,    16,   249,    85,   410,    94,   126,    94,     7,    30,
      30,   169,   225,    41,   483,     7,   259,    90,   416,   197,
     301,    30,   314,   266,   306,   319,   303,   298,    30,     7,
     191,   192,   274,   483,   404,    91,   229,   318,   339,   281,
     245,   340,    30,   270,   315,    41,    41,   342,    92,   230,
     332,    93,   356,   194,   300,   337,   209,    41,    82,    82,
      82,    82,   334,    82,    41,     7,   607,    82,    82,    82,
      82,   317,    82,    82,   365,   377,    19,   367,    41,   123,
     519,    20,    30,   209,   197,   611,   523,   483,    30,   336,
     523,   221,   240,   255,   262,   368,   278,     7,    91,   406,
     293,   310,   327,   345,    21,   362,   372,   245,    23,   220,
      82,    92,   359,   125,    93,     7,   519,   123,    41,   277,
      35,    36,     7,   366,    41,     6,    82,    46,    30,   172,
     195,     6,     7,   380,   196,    30,   211,   270,   241,   532,
      82,   269,    98,   221,   100,   534,   102,    82,   328,   125,
     106,    42,    28,   601,     7,    30,   112,   113,   114,   240,
     604,   118,   119,    82,    41,    30,   394,   548,   133,     7,
     197,    41,   483,   255,     7,   136,   211,   197,    82,   138,
     262,   220,    83,    40,   576,   411,   510,    30,    22,    20,
      84,    41,   605,   167,   332,    82,   278,   569,   139,   128,
     129,    41,   195,    41,   141,   241,   196,   197,    46,   173,
     403,   293,   530,    82,   529,   528,     7,   356,   142,     7,
     144,   181,   510,    41,   609,   147,   152,   154,   310,   197,
      82,   220,    30,   499,   483,   269,   576,   207,   219,   237,
     252,   261,   268,   276,   284,   156,   327,    82,   305,   323,
     341,   349,   361,   370,   382,   499,   530,    82,   529,   528,
     158,   159,    30,   345,   207,    41,   160,    30,    41,   162,
     165,     7,   483,   254,   197,   168,   291,   450,   219,   292,
     362,   426,   427,   190,    30,   170,   174,   171,   415,   441,
     372,   237,   328,    84,   569,   175,   176,   289,    41,   177,
     181,   178,   179,    41,   197,     7,   180,   252,   383,   385,
     118,   387,   388,   389,   390,   183,   131,   413,    30,   602,
      41,   261,   184,   483,   573,   581,   197,   438,   268,   185,
     573,   479,   479,   186,   187,   188,   397,   276,   581,   189,
      25,   442,   479,     7,   284,   290,   479,    27,   443,   444,
      29,   445,   447,   448,    41,   400,    30,    82,   451,   305,
     246,    33,   453,   271,   454,   457,    82,   194,    37,    38,
     333,    39,   357,   216,   232,   248,   323,   265,   458,    82,
     460,   461,   462,   299,   316,   335,   463,   358,   464,   379,
     493,   465,    41,   118,   341,   466,   467,    44,   197,   525,
      45,   468,   470,   121,   471,   473,   475,   118,   417,   522,
      82,   349,   493,   216,   474,   482,   550,   361,   551,   553,
     277,   555,   502,   421,   421,   423,   232,   246,   370,   476,
     476,   556,   503,   558,   559,   561,   494,   504,   382,   563,
     476,   613,   248,   525,   476,   564,   565,   505,   566,    82,
      82,    82,    82,   567,   568,   614,   132,   271,   494,   506,
     507,   431,    82,   265,   508,   122,   402,   509,   419,    82,
     425,   429,   399,   291,   537,    82,   549,   392,   440,   535,
      82,   396,   577,   584,   590,   595,   546,   481,   435,   547,
     409,   437,   405,     7,   299,   577,     7,   277,   407,    26,
     608,   610,   584,   606,   612,   412,    30,   603,   590,    30,
     533,   316,    25,   595,   333,   215,   231,   244,   414,    27,
     194,   182,    29,    24,     0,   296,   313,   331,     0,   335,
       0,   378,     0,    33,     0,   488,   492,   357,   501,     0,
      37,    38,    41,    39,     0,    41,   371,     0,   197,   488,
       0,   197,   358,     0,   492,   215,     0,     0,     0,   198,
     501,     0,     0,     0,     0,     0,   439,     0,   231,    44,
       0,     0,    45,   379,   206,   218,   236,   251,   260,   267,
     275,   283,     0,     0,   244,   304,   320,   338,   348,   360,
     369,   381,     7,     0,     0,    26,     0,     0,     0,   531,
       0,   206,     0,     0,     0,    30,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   218,   194,     0,   538,   539,
     540,   541,   542,   543,   544,   545,     0,     0,   236,   575,
     583,   589,   594,   600,     0,   575,   296,     0,   587,   593,
     598,    41,   371,   583,   251,     0,     0,   197,     0,     0,
     589,   480,   480,   313,     0,   198,   594,   587,   260,     0,
       0,   600,   480,   593,     0,   267,   480,     0,   598,     7,
       0,   331,     0,   498,   275,     0,     0,     0,   193,     0,
       0,   283,    30,     0,     0,   421,     0,     0,     0,     0,
       0,     0,   421,   194,     0,   498,   304,     7,    25,     0,
      26,     0,   195,     0,     0,    27,   196,    28,    29,     0,
      30,     0,     0,   320,     0,   378,    31,    32,    41,    33,
      34,     0,    35,    36,   197,     0,    37,    38,     0,    39,
       0,   338,   198,     0,     0,    83,     0,     0,    40,   391,
       0,     0,     0,    84,     0,     0,    41,     0,   348,    42,
       0,    43,     0,     0,   360,    44,     0,     0,    45,     0,
       0,    46,     0,     0,     0,   369,     0,   130,     7,    25,
       0,    26,     0,     0,     0,   381,    27,     0,    28,    29,
       0,    30,    25,     0,     0,     0,     0,    31,    32,    27,
      33,    34,    29,    35,    36,     7,    25,    37,    38,     0,
      39,     0,   210,    33,   193,     0,    29,   220,    30,    40,
      37,    38,     0,    39,     0,   497,     0,    41,     0,   194,
      42,     0,    43,     0,    37,    38,    44,    39,   195,    45,
       0,     0,    46,     0,     0,     0,     0,   497,   120,    44,
       0,     0,    45,     0,    41,     0,     0,     0,     0,     0,
     197,   524,     0,     0,     0,     7,    25,     0,   198,     0,
       0,     0,     0,    27,   193,   398,    29,    30,    30,     0,
       0,     0,   487,   491,     0,   500,    33,    33,   194,   194,
       0,   350,     0,   325,    37,    38,   487,    39,     0,   307,
     308,   491,   196,     0,     0,   309,   351,   500,     0,     0,
       0,     0,     0,    41,    41,     0,     7,     0,     0,   197,
     197,     0,    44,    44,   326,   193,    45,     0,   198,    30,
       0,     0,     0,     0,   434,   428,     0,     7,    25,     0,
     194,     0,     0,     0,     0,    27,   193,     0,    29,   195,
      30,     0,     0,   196,     0,     0,     0,     0,     0,    33,
       0,   194,     0,     0,     0,    41,    37,    38,     0,    39,
       0,   197,     0,     0,   196,     0,   574,   582,   588,   198,
     599,     0,   574,     0,   239,     0,    41,     0,     0,     0,
     582,     0,   197,     7,     0,    44,     0,   588,    45,     0,
     198,     0,   193,     0,     0,     0,    30,   401,   599,     0,
       0,     7,    25,     0,     0,     0,     0,   194,     0,    27,
       0,     0,    29,    30,    30,     0,     0,   307,   308,     0,
     196,     0,    33,   309,   194,   194,     0,   350,     0,     0,
      37,    38,    41,    39,     0,     7,     0,     0,   197,     0,
     291,     0,   351,   292,   193,     0,   198,   220,    30,    41,
      41,     0,     0,   424,     0,   197,   197,     0,    44,   194,
       0,     0,    45,     0,   198,     0,     0,     0,   195,     0,
       0,   536,   196,    25,     0,     0,     0,     0,     0,   210,
      27,     0,     0,    29,    41,    30,     0,     0,     0,     0,
     197,     0,   291,     0,     0,   292,   194,     0,   198,     0,
       0,    37,    38,    25,    39,   418,     0,     0,     0,     0,
      27,     0,     0,    29,     0,    30,     0,     0,     0,     0,
       0,    41,     0,     0,    33,     0,     0,   197,     0,     0,
       0,    37,    38,    45,    39,   198,     7,    25,     0,    26,
       0,     0,   395,     0,    27,     0,    28,    29,     0,    30,
       0,    41,     0,     0,     0,    31,    32,   197,    33,    34,
      44,    35,    36,    45,     0,    37,    38,     0,    39,     0,
       0,     0,   408,     0,    83,     0,     0,    40,     0,     0,
       7,    25,    84,     0,     0,    41,     0,   210,    42,   193,
      43,    29,   220,    30,    44,     7,    25,    45,    26,     0,
      46,     0,     0,    27,   194,    28,    29,     0,    30,    37,
      38,     0,    39,   195,    31,    32,     0,    33,    34,     0,
      35,    36,     0,     0,    37,    38,     0,    39,     0,    41,
       0,     0,     0,     0,     0,   197,    40,     0,     0,     0,
       0,     0,     0,   198,    41,     0,     0,    42,     0,    43,
       0,     0,     0,    44,     7,    25,    45,     0,     0,    46,
       0,     0,    27,   193,     0,    29,     0,    30,     0,     0,
       0,     0,     0,     0,     0,     0,    33,     0,   194,     0,
       0,     0,   325,    37,    38,     0,    39,     0,   307,   308,
       0,   196,     0,     0,   309,     0,     0,     7,    25,     0,
       0,     0,     0,    41,     0,    27,   193,     0,    29,   197,
      30,     0,    44,   326,     0,    45,     0,   198,     0,    33,
       0,   194,     0,     0,     0,     0,    37,    38,     0,    39,
       7,     0,     0,     0,   196,     0,     0,     0,     0,   193,
       0,     0,     0,    30,   239,     0,    41,     0,     7,    25,
       0,     0,   197,     0,   194,    44,    27,     0,    45,    29,
     198,    30,     0,     0,   307,   308,     0,   196,     0,     0,
     309,     0,   194,     0,     0,     0,     0,    37,    38,    41,
      39,     0,     7,     0,     0,   197,     0,   291,     0,     0,
     292,   193,     0,   198,   220,    30,     0,    41,    25,     0,
       0,     0,     0,   197,   210,    27,   194,     0,    29,    45,
      30,   198,     0,     0,     0,   195,     0,     0,     0,   196,
       0,   194,     0,     0,     0,     0,    37,    38,     0,    39,
       0,    41,     0,     0,     0,     0,     0,   197,     0,   291,
       0,     0,   292,     0,     0,   198,    41,    25,     0,    26,
       0,     0,   197,     0,    27,     0,     0,    29,    45,     0,
     198,     0,     0,     0,     0,    31,    32,    25,    33,    34,
       0,     0,     0,     0,    27,    37,    38,    29,    39,    30,
       0,     0,     0,     0,     0,     0,     0,     0,    33,   277,
       0,   502,     0,     0,     0,    37,    38,     0,    39,     0,
      43,   503,     0,     0,    44,     0,   504,    45,     0,     0,
       0,     0,     0,     0,     0,    41,   505,     0,     0,     0,
       0,   197,     0,     0,    44,     0,     0,    45,   506,   507,
       0,     0,     0,   508,     0,     0,   509,     0,     0,     0,
       0,     0,   291
};

static const yytype_int16 yycheck[] =
{
       6,   189,   308,   180,   185,   184,     5,   185,   184,   188,
     174,   175,   188,   185,   174,    21,     5,    23,   175,   183,
     184,   185,     5,   183,     5,   183,   183,   184,   185,    18,
     188,   194,   174,     5,    17,    18,   174,   174,    54,    72,
      41,    74,    48,   173,   174,   175,   176,   177,   178,   179,
      23,     0,    23,   183,   184,   185,    51,   187,   188,   189,
      61,     3,   226,    58,    23,    54,   226,    72,     2,    74,
     174,    54,    71,     5,     5,    91,     7,    60,   242,    62,
      86,    58,    65,   213,   226,   242,    75,    18,   226,   226,
      71,    25,    75,    27,   174,    29,   226,    31,    32,    33,
      72,    35,    36,    37,    38,    39,     5,   174,   285,    43,
      44,     3,   242,    86,   277,    86,    93,    88,     5,    18,
      18,   127,   226,    54,    23,     5,   256,    86,   291,    60,
     294,    18,   311,   263,   294,   311,   294,   294,    18,     5,
      72,    73,   272,    23,    75,    23,   226,   311,   329,   279,
     175,   329,    18,   178,   311,    54,    54,   329,    23,   226,
     185,    23,   187,    29,   294,   329,   172,    54,   174,   175,
     176,   177,   329,   179,    54,     5,    75,   183,   184,   185,
     186,   311,   188,   189,   363,   373,    76,   363,    54,    52,
     475,     5,    18,   199,    60,    75,   477,    23,    18,   329,
     481,   174,   175,   176,   177,   363,   179,     5,    86,    75,
     183,   184,   185,   186,    74,   188,   189,   242,    74,    17,
     226,    86,   352,    56,    86,     5,   511,    90,    54,     9,
      30,    31,     5,   363,    54,     4,   242,    69,    18,    74,
      38,     4,     5,   373,    42,    18,   173,   272,   175,    75,
     256,   178,    26,   226,    28,    75,    30,   263,   185,    92,
      34,    57,    15,   569,     5,    18,    40,    41,    42,   242,
     576,    45,    46,   279,    54,    18,   210,    75,    72,     5,
      60,    54,    23,   256,     5,    72,   213,    60,   294,    72,
     263,    17,    43,    46,    67,    75,   475,    18,     4,     5,
      51,    54,    75,    71,   329,   311,   279,    50,    72,    83,
      84,    54,    38,    54,    72,   242,    42,    60,    69,    74,
     254,   294,   482,   329,   482,   482,     5,   352,    72,     5,
      72,    58,   511,    54,    75,    72,    72,    72,   311,    60,
     346,    17,    18,   473,    23,   272,    67,   172,   173,   174,
     175,   176,   177,   178,   179,    72,   329,   363,   183,   184,
     185,   186,   187,   188,   189,   495,   526,   373,   526,   526,
      72,    72,    18,   346,   199,    54,    72,    18,    54,    72,
      72,     5,    23,     7,    60,    72,    62,   393,   213,    65,
     363,   325,   326,   167,    18,    72,    74,    72,    72,    72,
     373,   226,   329,    51,    50,    74,    74,   181,    54,    74,
      58,    74,    74,    54,    60,     5,    74,   242,   192,   193,
     194,   195,   196,   197,   198,    74,    86,    75,    18,    75,
      54,   256,    74,    23,   564,   565,    60,   371,   263,    74,
     570,   466,   467,    74,    74,    74,   220,   272,   578,    74,
       6,    72,   477,     5,   279,    75,   481,    13,    72,    72,
      16,    72,    72,    72,    54,   239,    18,   473,    72,   294,
     175,    27,    72,   178,    72,    72,   482,    29,    34,    35,
     185,    37,   187,   173,   174,   175,   311,   177,    72,   495,
      72,    72,    72,   183,   184,   185,    72,   187,    72,   189,
     473,    72,    54,   277,   329,    74,    74,    63,    60,   482,
      66,    72,    74,    48,    74,    74,    74,   291,   292,    75,
     526,   346,   495,   213,    75,    74,    72,   352,    72,    72,
       9,    72,    11,   307,   308,   309,   226,   242,   363,   466,
     467,    72,    21,    72,    72,    72,   473,    26,   373,    72,
     477,    72,   242,   526,   481,    74,    74,    36,    74,   565,
     566,   567,   568,    74,    74,    72,    88,   272,   495,    48,
      49,   346,   578,   263,    53,    50,   242,    56,   294,   585,
     311,   329,   226,    62,   495,   591,   526,   199,   373,   489,
     596,   213,   565,   566,   567,   568,    75,   467,   352,   511,
     272,   363,   256,     5,   294,   578,     5,     9,   263,     8,
     585,   591,   585,   578,   596,   279,    18,   570,   591,    18,
     484,   311,     6,   596,   329,   173,   174,   175,   285,    13,
      29,   151,    16,    19,    -1,   183,   184,   185,    -1,   329,
      -1,   189,    -1,    27,    -1,   470,   471,   352,   473,    -1,
      34,    35,    54,    37,    -1,    54,    55,    -1,    60,   484,
      -1,    60,   352,    -1,   489,   213,    -1,    -1,    -1,    68,
     495,    -1,    -1,    -1,    -1,    -1,    75,    -1,   226,    63,
      -1,    -1,    66,   373,   172,   173,   174,   175,   176,   177,
     178,   179,    -1,    -1,   242,   183,   184,   185,   186,   187,
     188,   189,     5,    -1,    -1,     8,    -1,    -1,    -1,   483,
      -1,   199,    -1,    -1,    -1,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   213,    29,    -1,   502,   503,
     504,   505,   506,   507,   508,   509,    -1,    -1,   226,   564,
     565,   566,   567,   568,    -1,   570,   294,    -1,   566,   567,
     568,    54,    55,   578,   242,    -1,    -1,    60,    -1,    -1,
     585,   466,   467,   311,    -1,    68,   591,   585,   256,    -1,
      -1,   596,   477,   591,    -1,   263,   481,    -1,   596,     5,
      -1,   329,    -1,   473,   272,    -1,    -1,    -1,    14,    -1,
      -1,   279,    18,    -1,    -1,   569,    -1,    -1,    -1,    -1,
      -1,    -1,   576,    29,    -1,   495,   294,     5,     6,    -1,
       8,    -1,    38,    -1,    -1,    13,    42,    15,    16,    -1,
      18,    -1,    -1,   311,    -1,   373,    24,    25,    54,    27,
      28,    -1,    30,    31,    60,    -1,    34,    35,    -1,    37,
      -1,   329,    68,    -1,    -1,    43,    -1,    -1,    46,    75,
      -1,    -1,    -1,    51,    -1,    -1,    54,    -1,   346,    57,
      -1,    59,    -1,    -1,   352,    63,    -1,    -1,    66,    -1,
      -1,    69,    -1,    -1,    -1,   363,    -1,    75,     5,     6,
      -1,     8,    -1,    -1,    -1,   373,    13,    -1,    15,    16,
      -1,    18,     6,    -1,    -1,    -1,    -1,    24,    25,    13,
      27,    28,    16,    30,    31,     5,     6,    34,    35,    -1,
      37,    -1,    12,    27,    14,    -1,    16,    17,    18,    46,
      34,    35,    -1,    37,    -1,   473,    -1,    54,    -1,    29,
      57,    -1,    59,    -1,    34,    35,    63,    37,    38,    66,
      -1,    -1,    69,    -1,    -1,    -1,    -1,   495,    75,    63,
      -1,    -1,    66,    -1,    54,    -1,    -1,    -1,    -1,    -1,
      60,    75,    -1,    -1,    -1,     5,     6,    -1,    68,    -1,
      -1,    -1,    -1,    13,    14,    75,    16,    18,    18,    -1,
      -1,    -1,   470,   471,    -1,   473,    27,    27,    29,    29,
      -1,    32,    -1,    33,    34,    35,   484,    37,    -1,    39,
      40,   489,    42,    -1,    -1,    45,    47,   495,    -1,    -1,
      -1,    -1,    -1,    54,    54,    -1,     5,    -1,    -1,    60,
      60,    -1,    63,    63,    64,    14,    66,    -1,    68,    18,
      -1,    -1,    -1,    -1,    75,    75,    -1,     5,     6,    -1,
      29,    -1,    -1,    -1,    -1,    13,    14,    -1,    16,    38,
      18,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    27,
      -1,    29,    -1,    -1,    -1,    54,    34,    35,    -1,    37,
      -1,    60,    -1,    -1,    42,    -1,   564,   565,   566,    68,
     568,    -1,   570,    -1,    52,    -1,    54,    -1,    -1,    -1,
     578,    -1,    60,     5,    -1,    63,    -1,   585,    66,    -1,
      68,    -1,    14,    -1,    -1,    -1,    18,    75,   596,    -1,
      -1,     5,     6,    -1,    -1,    -1,    -1,    29,    -1,    13,
      -1,    -1,    16,    18,    18,    -1,    -1,    39,    40,    -1,
      42,    -1,    27,    45,    29,    29,    -1,    32,    -1,    -1,
      34,    35,    54,    37,    -1,     5,    -1,    -1,    60,    -1,
      62,    -1,    47,    65,    14,    -1,    68,    17,    18,    54,
      54,    -1,    -1,    75,    -1,    60,    60,    -1,    63,    29,
      -1,    -1,    66,    -1,    68,    -1,    -1,    -1,    38,    -1,
      -1,    75,    42,     6,    -1,    -1,    -1,    -1,    -1,    12,
      13,    -1,    -1,    16,    54,    18,    -1,    -1,    -1,    -1,
      60,    -1,    62,    -1,    -1,    65,    29,    -1,    68,    -1,
      -1,    34,    35,     6,    37,    75,    -1,    -1,    -1,    -1,
      13,    -1,    -1,    16,    -1,    18,    -1,    -1,    -1,    -1,
      -1,    54,    -1,    -1,    27,    -1,    -1,    60,    -1,    -1,
      -1,    34,    35,    66,    37,    68,     5,     6,    -1,     8,
      -1,    -1,    75,    -1,    13,    -1,    15,    16,    -1,    18,
      -1,    54,    -1,    -1,    -1,    24,    25,    60,    27,    28,
      63,    30,    31,    66,    -1,    34,    35,    -1,    37,    -1,
      -1,    -1,    75,    -1,    43,    -1,    -1,    46,    -1,    -1,
       5,     6,    51,    -1,    -1,    54,    -1,    12,    57,    14,
      59,    16,    17,    18,    63,     5,     6,    66,     8,    -1,
      69,    -1,    -1,    13,    29,    15,    16,    -1,    18,    34,
      35,    -1,    37,    38,    24,    25,    -1,    27,    28,    -1,
      30,    31,    -1,    -1,    34,    35,    -1,    37,    -1,    54,
      -1,    -1,    -1,    -1,    -1,    60,    46,    -1,    -1,    -1,
      -1,    -1,    -1,    68,    54,    -1,    -1,    57,    -1,    59,
      -1,    -1,    -1,    63,     5,     6,    66,    -1,    -1,    69,
      -1,    -1,    13,    14,    -1,    16,    -1,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    29,    -1,
      -1,    -1,    33,    34,    35,    -1,    37,    -1,    39,    40,
      -1,    42,    -1,    -1,    45,    -1,    -1,     5,     6,    -1,
      -1,    -1,    -1,    54,    -1,    13,    14,    -1,    16,    60,
      18,    -1,    63,    64,    -1,    66,    -1,    68,    -1,    27,
      -1,    29,    -1,    -1,    -1,    -1,    34,    35,    -1,    37,
       5,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    14,
      -1,    -1,    -1,    18,    52,    -1,    54,    -1,     5,     6,
      -1,    -1,    60,    -1,    29,    63,    13,    -1,    66,    16,
      68,    18,    -1,    -1,    39,    40,    -1,    42,    -1,    -1,
      45,    -1,    29,    -1,    -1,    -1,    -1,    34,    35,    54,
      37,    -1,     5,    -1,    -1,    60,    -1,    62,    -1,    -1,
      65,    14,    -1,    68,    17,    18,    -1,    54,     6,    -1,
      -1,    -1,    -1,    60,    12,    13,    29,    -1,    16,    66,
      18,    68,    -1,    -1,    -1,    38,    -1,    -1,    -1,    42,
      -1,    29,    -1,    -1,    -1,    -1,    34,    35,    -1,    37,
      -1,    54,    -1,    -1,    -1,    -1,    -1,    60,    -1,    62,
      -1,    -1,    65,    -1,    -1,    68,    54,     6,    -1,     8,
      -1,    -1,    60,    -1,    13,    -1,    -1,    16,    66,    -1,
      68,    -1,    -1,    -1,    -1,    24,    25,     6,    27,    28,
      -1,    -1,    -1,    -1,    13,    34,    35,    16,    37,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,     9,
      -1,    11,    -1,    -1,    -1,    34,    35,    -1,    37,    -1,
      59,    21,    -1,    -1,    63,    -1,    26,    66,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    54,    36,    -1,    -1,    -1,
      -1,    60,    -1,    -1,    63,    -1,    -1,    66,    48,    49,
      -1,    -1,    -1,    53,    -1,    -1,    56,    -1,    -1,    -1,
      -1,    -1,    62
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    41,    61,    78,    80,    84,     4,     5,   243,   244,
     245,   246,   247,   243,     0,     3,     3,   247,    81,    76,
       5,    74,     4,    74,   246,     6,     8,    13,    15,    16,
      18,    24,    25,    27,    28,    30,    31,    34,    35,    37,
      46,    54,    57,    59,    63,    66,    69,    79,    85,    86,
      89,    90,    91,    92,    93,    94,    98,    99,   100,   101,
     102,   103,   107,   111,   115,   119,   128,   132,   141,   149,
     159,   167,   179,   184,   188,   209,   213,   225,   227,   230,
     231,   234,   247,    43,    51,    79,    82,    83,    87,    88,
      91,    93,    98,   100,   213,   228,   229,   243,   244,   243,
     244,   243,   244,   243,   243,   243,   244,   243,   243,   243,
     243,   243,   244,   244,   244,   243,   243,   242,   244,   244,
      75,    86,    90,    92,    94,    99,   101,    71,   244,   244,
      75,    83,    88,    72,   129,   142,    72,   120,    72,    72,
     104,    72,    72,   180,    72,   185,   168,    72,   189,   210,
      72,    74,    72,   108,    72,   112,    72,   116,    72,    72,
      72,    95,    72,   150,   160,    72,   133,    71,    72,   247,
      72,    72,    74,    74,    74,    74,    74,    74,    74,    74,
      74,    58,   226,    74,    74,    74,    74,    74,    74,    74,
     244,    72,    73,    14,    29,    38,    42,    60,    68,   130,
     131,   145,   204,   215,   218,   219,   230,   234,   235,   247,
      12,   102,   124,   143,   144,   145,   215,   218,   230,   234,
      17,    79,   103,   107,   111,   115,   121,   122,   123,   124,
     128,   145,   215,   218,   219,   224,   230,   234,   235,    52,
      79,   102,   105,   106,   145,   159,   167,   204,   215,   218,
     219,   230,   234,   236,     7,    79,   181,   182,   183,   218,
     230,   234,    79,   186,   187,   215,   218,   230,   234,   102,
     159,   167,   169,   170,   218,   230,   234,     9,    79,   190,
     191,   218,   220,   230,   234,   211,   212,   226,   229,   244,
      75,    62,    65,    79,   109,   110,   145,   163,   204,   215,
     218,   219,   223,   224,   230,   234,   235,    39,    40,    45,
      79,   113,   114,   145,   163,   204,   215,   218,   219,   223,
     230,   232,   233,   234,   237,    33,    64,    79,   102,   117,
     118,   145,   159,   167,   204,   215,   218,   219,   230,   232,
     233,   234,   237,   238,   239,    79,    96,    97,   230,   234,
      32,    47,   151,   152,   153,   157,   159,   167,   215,   218,
     230,   234,    79,   161,   162,   163,   218,   223,   224,   230,
     234,    55,    79,   134,   135,   136,   140,   141,   145,   215,
     218,   230,   234,   244,   240,   244,   242,   244,   244,   244,
     244,    75,   131,    71,   243,    75,   144,   244,    75,   122,
     244,    75,   106,   243,    75,   182,    75,   187,    75,   170,
     242,    75,   191,    75,   212,    72,   242,   244,    75,   110,
     241,   244,   241,   244,    75,   114,   243,   243,    75,   118,
      75,    97,   154,   158,    75,   152,    75,   162,   243,    75,
     135,    72,    72,    72,    72,    72,   205,    72,    72,   146,
     247,    72,   125,    72,    72,    72,    74,    72,    72,   164,
      72,    72,    72,    72,    72,    72,    74,    74,    72,   137,
      74,    74,    72,    74,    75,    74,   102,   155,   156,   159,
     167,   155,    74,    23,   206,   207,   208,   230,   234,   147,
     148,   230,   234,    79,   102,   126,   127,   145,   215,   218,
     230,   234,    11,    21,    26,    36,    48,    49,    53,    56,
     163,   165,   166,   171,   175,   192,   196,   200,   214,   220,
     221,   222,    75,   156,    75,    79,   138,   139,   204,   224,
     235,   244,    75,   207,    75,   148,    75,   127,   244,   244,
     244,   244,   244,   244,   244,   244,    75,   166,    75,   139,
      72,    72,   201,    72,   197,    72,    72,   172,    72,    72,
     176,    72,   193,    72,    74,    74,    74,    74,    74,    50,
     202,   203,   217,   218,   230,   234,    67,    79,   198,   199,
     216,   218,   230,   234,    79,   173,   174,   208,   230,   234,
      79,   177,   178,   208,   234,    79,   194,   195,   208,   230,
     234,   241,    75,   203,   241,    75,   199,    75,   174,    75,
     178,    75,   195,    72,    72
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    77,    78,    78,    79,    79,    81,    80,    82,    82,
      83,    83,    83,    83,    83,    83,    83,    84,    85,    85,
      86,    86,    86,    86,    86,    86,    86,    87,    87,    88,
      88,    88,    89,    89,    90,    91,    91,    92,    92,    93,
      93,    94,    95,    94,    96,    96,    97,    97,    97,    97,
      98,    98,    99,    99,    99,    99,   100,   100,   101,   101,
     101,   101,   101,   101,   101,   101,   102,   102,   102,   102,
     102,   102,   102,   103,   104,   103,   105,   105,   106,   106,
     106,   106,   106,   106,   106,   106,   106,   106,   106,   106,
     106,   107,   108,   107,   109,   109,   110,   110,   110,   110,
     110,   110,   110,   110,   110,   110,   110,   110,   110,   111,
     112,   111,   113,   113,   114,   114,   114,   114,   114,   114,
     114,   114,   114,   114,   114,   114,   114,   114,   115,   116,
     115,   117,   117,   118,   118,   118,   118,   118,   118,   118,
     118,   118,   118,   118,   118,   118,   118,   118,   118,   118,
     119,   120,   119,   121,   121,   122,   122,   122,   122,   122,
     122,   122,   122,   122,   122,   122,   122,   123,   123,   123,
     123,   123,   124,   125,   124,   126,   126,   127,   127,   127,
     127,   127,   127,   127,   127,   128,   129,   128,   130,   130,
     131,   131,   131,   131,   131,   131,   131,   131,   131,   132,
     133,   132,   134,   134,   135,   135,   135,   135,   135,   135,
     135,   135,   135,   136,   137,   136,   138,   138,   139,   139,
     139,   139,   139,   140,   142,   141,   143,   143,   144,   144,
     144,   144,   144,   144,   144,   144,   145,   146,   145,   147,
     147,   148,   148,   148,   149,   150,   149,   151,   151,   152,
     152,   152,   152,   152,   152,   152,   152,   152,   154,   153,
     155,   155,   156,   156,   156,   156,   158,   157,   160,   159,
     161,   161,   162,   162,   162,   162,   162,   162,   162,   162,
     163,   164,   163,   165,   165,   166,   166,   166,   166,   166,
     166,   166,   166,   166,   166,   168,   167,   169,   169,   170,
     170,   170,   170,   170,   170,   170,   171,   172,   171,   173,
     173,   174,   174,   174,   174,   174,   175,   176,   175,   177,
     177,   178,   178,   178,   178,   179,   180,   179,   181,   181,
     182,   182,   182,   182,   182,   182,   183,   183,   184,   185,
     184,   186,   186,   187,   187,   187,   187,   187,   187,   188,
     189,   188,   190,   190,   191,   191,   191,   191,   191,   191,
     192,   193,   192,   194,   194,   195,   195,   195,   195,   195,
     196,   197,   196,   198,   198,   199,   199,   199,   199,   199,
     199,   200,   201,   200,   202,   202,   203,   203,   203,   203,
     203,   204,   205,   204,   206,   206,   207,   207,   207,   207,
     208,   210,   209,   211,   211,   212,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   242,   243,
     244,   244,   245,   245,   246,   247,   247
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     4,     6,     0,     6,     2,     1,
       1,     1,     1,     1,     1,     1,     0,     5,     2,     1,
       1,     1,     1,     1,     1,     1,     0,     2,     1,     1,
       1,     1,     2,     1,     1,     2,     1,     1,     1,     2,
       1,     3,     0,     6,     2,     1,     1,     1,     1,     0,
       2,     1,     1,     1,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     0,     6,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     3,     0,     6,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     3,
       0,     6,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     3,     0,
       6,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       3,     0,     6,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     1,     1,     1,
       1,     1,     3,     0,     6,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     3,     0,     6,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     3,
       0,     6,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     3,     0,     6,     2,     1,     1,     1,
       1,     1,     0,     1,     0,     6,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     3,     0,     6,     2,
       1,     1,     1,     0,     3,     0,     6,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     0,     5,
       2,     1,     1,     1,     1,     0,     0,     5,     0,     6,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       3,     0,     6,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     6,     2,     1,     1,
       1,     1,     1,     1,     1,     0,     3,     0,     6,     2,
       1,     1,     1,     1,     1,     0,     3,     0,     6,     2,
       1,     1,     1,     1,     0,     3,     0,     6,     2,     1,
       1,     1,     1,     1,     1,     0,     3,     4,     3,     0,
       6,     2,     1,     1,     1,     1,     1,     1,     0,     3,
       0,     6,     2,     1,     1,     1,     1,     1,     1,     0,
       3,     0,     6,     2,     1,     1,     1,     1,     1,     0,
       3,     0,     6,     2,     1,     1,     1,     1,     1,     1,
       0,     3,     0,     6,     2,     1,     1,     1,     1,     1,
       0,     3,     0,     6,     2,     1,     1,     1,     1,     0,
       3,     0,     6,     2,     1,     1,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     5,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     1,     1,     1,     3,     1,
       1,     1,     3,     1,     3,     2,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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
      yyerror (_yy, YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, _yy); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, void *_yy)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (_yy);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, void *_yy)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, _yy);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule, void *_yy)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              , _yy);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule, _yy); \
} while (0)

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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, void *_yy)
{
  YYUSE (yyvaluep);
  YYUSE (_yy);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void *_yy)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
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
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex (_yy);
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
     '$$ = $1'.

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

    { clicon_debug(2,"file->module-stmt"); YYACCEPT; }

    break;

  case 3:

    { clicon_debug(2,"file->submodule-stmt"); YYACCEPT; }

    break;

  case 4:

    { char *id; if ((id=prefix_id_join((yyvsp[-3].string), (yyvsp[-1].string))) == NULL) _YYERROR("0");
		   if (ysp_add(_yy, Y_UNKNOWN, id, NULL) == NULL) _YYERROR("0"); 
		   clicon_debug(2,"unknown-stmt -> ustring : ustring");
	       }

    break;

  case 5:

    { char *id; if ((id=prefix_id_join((yyvsp[-5].string), (yyvsp[-3].string))) == NULL) _YYERROR("0");
		   if (ysp_add(_yy, Y_UNKNOWN, id, (yyvsp[-1].string)) == NULL) _YYERROR("0"); 
		   clicon_debug(2,"unknown-stmt -> ustring : ustring string");
	       }

    break;

  case 6:

    { if ((_YY->yy_module = ysp_add_push(_yy, Y_MODULE, (yyvsp[0].string))) == NULL) _YYERROR("1");
                        }

    break;

  case 7:

    { if (ystack_pop(_yy) < 0) _YYERROR("2");
			  clicon_debug(2,"module_stmt -> id-arg-str { module-substmts }");}

    break;

  case 8:

    { clicon_debug(2,"module-substmts -> module-substmts module-substm");}

    break;

  case 9:

    { clicon_debug(2,"module-substmts ->");}

    break;

  case 10:

    { clicon_debug(2,"module-substmt -> module-header-stmts");}

    break;

  case 11:

    { clicon_debug(2,"module-substmt -> linake-stmts");}

    break;

  case 12:

    { clicon_debug(2,"module-substmt -> meta-stmts");}

    break;

  case 13:

    { clicon_debug(2,"module-substmt -> revision-stmts");}

    break;

  case 14:

    { clicon_debug(2,"module-substmt -> body-stmts");}

    break;

  case 15:

    { clicon_debug(2,"module-substmt -> unknown-stmt");}

    break;

  case 16:

    { clicon_debug(2,"module-substmt ->");}

    break;

  case 17:

    { if ((_YY->yy_module = ysp_add_push(_yy, Y_SUBMODULE, (yyvsp[-3].string))) == NULL) _YYERROR("3"); 
                        clicon_debug(2,"submodule -> id-arg-str { submodule-stmts }"); 
                      }

    break;

  case 18:

    { clicon_debug(2,"submodule-stmts -> submodule-substmts submodule-substmt"); }

    break;

  case 19:

    { clicon_debug(2,"submodule-stmts -> submodule-substmt"); }

    break;

  case 20:

    { clicon_debug(2,"submodule-substmt -> submodule-header-stmts"); }

    break;

  case 21:

    { clicon_debug(2,"submodule-substmt -> linake-stmts");}

    break;

  case 22:

    { clicon_debug(2,"submodule-substmt -> meta-stmts");}

    break;

  case 23:

    { clicon_debug(2,"submodule-substmt -> revision-stmts");}

    break;

  case 24:

    { clicon_debug(2,"submodule-stmt -> body-stmts"); }

    break;

  case 25:

    { clicon_debug(2,"submodule-substmt -> unknown-stmt");}

    break;

  case 26:

    { clicon_debug(2,"submodule-substmt ->");}

    break;

  case 27:

    { clicon_debug(2,"module-header-stmts -> module-header-stmts module-header-stmt"); }

    break;

  case 28:

    { clicon_debug(2,"module-header-stmts -> "); }

    break;

  case 29:

    { clicon_debug(2,"module-header-stmt -> yang-version-stmt"); }

    break;

  case 30:

    { clicon_debug(2,"module-header-stmt -> namespace-stmt"); }

    break;

  case 31:

    { clicon_debug(2,"module-header-stmt -> prefix-stmt"); }

    break;

  case 32:

    { clicon_debug(2,"submodule-header-stmts -> submodule-header-stmts submodule-header-stmt"); }

    break;

  case 33:

    { clicon_debug(2,"submodule-header-stmts -> submodule-header-stmt"); }

    break;

  case 34:

    { clicon_debug(2,"submodule-header-stmt -> yang-version-stmt"); }

    break;

  case 35:

    { clicon_debug(2,"linkage-stmts -> linkage-stmts linkage-stmt"); }

    break;

  case 36:

    { clicon_debug(2,"linkage-stmts -> linkage-stmt"); }

    break;

  case 37:

    { clicon_debug(2,"linkage-stmt -> import-stmt"); }

    break;

  case 38:

    { clicon_debug(2,"linkage-stmt -> include-stmt"); }

    break;

  case 39:

    { clicon_debug(2,"revision-stmts -> revision-stmts revision-stmt"); }

    break;

  case 40:

    { clicon_debug(2,"revision-stmts -> "); }

    break;

  case 41:

    { if (ysp_add(_yy, Y_REVISION, (yyvsp[-1].string), NULL) == NULL) _YYERROR("4"); 
			 clicon_debug(2,"revision-stmt -> date-arg-str ;"); }

    break;

  case 42:

    { if (ysp_add_push(_yy, Y_REVISION, (yyvsp[0].string)) == NULL) _YYERROR("5"); }

    break;

  case 43:

    { if (ystack_pop(_yy) < 0) _YYERROR("6");
		       clicon_debug(2,"revision-stmt -> date-arg-str { revision-substmts  }"); }

    break;

  case 44:

    { clicon_debug(2,"revision-substmts -> revision-substmts revision-substmt }"); }

    break;

  case 45:

    { clicon_debug(2,"revision-substmts -> }"); }

    break;

  case 46:

    { clicon_debug(2,"revision-substmt -> description-stmt"); }

    break;

  case 47:

    { clicon_debug(2,"revision-substmt -> reference-stmt"); }

    break;

  case 48:

    { clicon_debug(2,"revision-substmt -> unknown-stmt");}

    break;

  case 49:

    { clicon_debug(2,"revision-substmt -> "); }

    break;

  case 50:

    { clicon_debug(2,"meta-stmts -> meta-stmts meta-stmt"); }

    break;

  case 51:

    { clicon_debug(2,"meta-stmts -> meta-stmt"); }

    break;

  case 52:

    { clicon_debug(2,"meta-stmt -> organization-stmt"); }

    break;

  case 53:

    { clicon_debug(2,"meta-stmt -> contact-stmt"); }

    break;

  case 54:

    { clicon_debug(2,"meta-stmt -> description-stmt"); }

    break;

  case 55:

    { clicon_debug(2,"meta-stmt -> reference-stmt"); }

    break;

  case 56:

    { clicon_debug(2,"body-stmts -> body-stmts body-stmt"); }

    break;

  case 57:

    { clicon_debug(2,"body-stmts -> body-stmt");}

    break;

  case 58:

    { clicon_debug(2,"body-stmt -> extension-stmt");}

    break;

  case 59:

    { clicon_debug(2,"body-stmt -> feature-stmt");}

    break;

  case 60:

    { clicon_debug(2,"body-stmt -> identity-stmt");}

    break;

  case 61:

    { clicon_debug(2,"body-stmt -> typedef-stmt");}

    break;

  case 62:

    { clicon_debug(2,"body-stmt -> grouping-stmt");}

    break;

  case 63:

    { clicon_debug(2,"body-stmt -> data-def-stmt");}

    break;

  case 64:

    { clicon_debug(2,"body-stmt -> augment-stmt");}

    break;

  case 65:

    { clicon_debug(2,"body-stmt -> rpc-stmt");}

    break;

  case 66:

    { clicon_debug(2,"data-def-stmt -> container-stmt");}

    break;

  case 67:

    { clicon_debug(2,"data-def-stmt -> leaf-stmt");}

    break;

  case 68:

    { clicon_debug(2,"data-def-stmt -> leaf-list-stmt");}

    break;

  case 69:

    { clicon_debug(2,"data-def-stmt -> list-stmt");}

    break;

  case 70:

    { clicon_debug(2,"data-def-stmt -> choice-stmt");}

    break;

  case 71:

    { clicon_debug(2,"data-def-stmt -> anyxml-stmt");}

    break;

  case 72:

    { clicon_debug(2,"data-def-stmt -> uses-stmt");}

    break;

  case 73:

    { if (ysp_add(_yy, Y_CONTAINER, (yyvsp[-1].string), NULL) == NULL) _YYERROR("7"); 
                             clicon_debug(2,"container-stmt -> CONTAINER id-arg-str ;");}

    break;

  case 74:

    { if (ysp_add_push(_yy, Y_CONTAINER, (yyvsp[0].string)) == NULL) _YYERROR("8"); }

    break;

  case 75:

    { if (ystack_pop(_yy) < 0) _YYERROR("9");
                             clicon_debug(2,"container-stmt -> CONTAINER id-arg-str { container-substmts }");}

    break;

  case 78:

    { clicon_debug(2,"container-substmt -> when-stmt"); }

    break;

  case 79:

    { clicon_debug(2,"container-substmt -> if-feature-stmt"); }

    break;

  case 80:

    { clicon_debug(2,"container-substmt -> must-stmt"); }

    break;

  case 81:

    { clicon_debug(2,"container-substmt -> presence-stmt"); }

    break;

  case 82:

    { clicon_debug(2,"container-substmt -> config-stmt"); }

    break;

  case 83:

    { clicon_debug(2,"container-substmt -> status-stmt"); }

    break;

  case 84:

    { clicon_debug(2,"container-substmt -> description-stmt");}

    break;

  case 85:

    { clicon_debug(2,"container-substmt -> reference-stmt"); }

    break;

  case 86:

    { clicon_debug(2,"container-substmt -> typedef-stmt"); }

    break;

  case 87:

    { clicon_debug(2,"container-substmt -> grouping-stmt"); }

    break;

  case 88:

    { clicon_debug(2,"container-substmt -> data-def-stmt");}

    break;

  case 89:

    { clicon_debug(2,"container-substmt -> unknown-stmt");}

    break;

  case 90:

    { clicon_debug(2,"container-substmt ->");}

    break;

  case 91:

    { if (ysp_add(_yy, Y_LEAF, (yyvsp[-1].string), NULL) == NULL) _YYERROR("10"); 
			   clicon_debug(2,"leaf-stmt -> LEAF id-arg-str ;");}

    break;

  case 92:

    { if (ysp_add_push(_yy, Y_LEAF, (yyvsp[0].string)) == NULL) _YYERROR("11"); }

    break;

  case 93:

    { if (ystack_pop(_yy) < 0) _YYERROR("12");
                             clicon_debug(2,"leaf-stmt -> LEAF id-arg-str { lead-substmts }");}

    break;

  case 96:

    { clicon_debug(2,"leaf-substmt -> when-stmt"); }

    break;

  case 97:

    { clicon_debug(2,"leaf-substmt -> if-feature-stmt"); }

    break;

  case 98:

    { clicon_debug(2,"leaf-substmt -> type-stmt"); }

    break;

  case 99:

    { clicon_debug(2,"leaf-substmt -> units-stmt"); }

    break;

  case 100:

    { clicon_debug(2,"leaf-substmt -> must-stmt"); }

    break;

  case 101:

    { clicon_debug(2,"leaf-substmt -> default-stmt"); }

    break;

  case 102:

    { clicon_debug(2,"leaf-substmt -> config-stmt"); }

    break;

  case 103:

    { clicon_debug(2,"leaf-substmt -> mandatory-stmt"); }

    break;

  case 104:

    { clicon_debug(2,"leaf-substmt -> status-stmt"); }

    break;

  case 105:

    { clicon_debug(2,"leaf-substmt -> description-stmt"); }

    break;

  case 106:

    { clicon_debug(2,"leaf-substmt -> reference-stmt"); }

    break;

  case 107:

    { clicon_debug(2,"leaf-substmt -> unknown-stmt");}

    break;

  case 108:

    { clicon_debug(2,"leaf-substmt ->"); }

    break;

  case 109:

    { if (ysp_add(_yy, Y_LEAF_LIST, (yyvsp[-1].string), NULL) == NULL) _YYERROR("13"); 
			   clicon_debug(2,"leaf-list-stmt -> LEAF id-arg-str ;");}

    break;

  case 110:

    { if (ysp_add_push(_yy, Y_LEAF_LIST, (yyvsp[0].string)) == NULL) _YYERROR("14"); }

    break;

  case 111:

    { if (ystack_pop(_yy) < 0) _YYERROR("15");
                             clicon_debug(2,"leaf-list-stmt -> LEAF-LIST id-arg-str { lead-substmts }");}

    break;

  case 114:

    { clicon_debug(2,"leaf-list-substmt -> when-stmt"); }

    break;

  case 115:

    { clicon_debug(2,"leaf-list-substmt -> if-feature-stmt"); }

    break;

  case 116:

    { clicon_debug(2,"leaf-list-substmt -> type-stmt"); }

    break;

  case 117:

    { clicon_debug(2,"leaf-list-substmt -> units-stmt"); }

    break;

  case 118:

    { clicon_debug(2,"leaf-list-substmt -> must-stmt"); }

    break;

  case 119:

    { clicon_debug(2,"leaf-list-substmt -> config-stmt"); }

    break;

  case 120:

    { clicon_debug(2,"leaf-list-substmt -> min-elements-stmt"); }

    break;

  case 121:

    { clicon_debug(2,"leaf-list-substmt -> max-elements-stmt"); }

    break;

  case 122:

    { clicon_debug(2,"leaf-list-substmt -> ordered-by-stmt"); }

    break;

  case 123:

    { clicon_debug(2,"leaf-list-substmt -> status-stmt"); }

    break;

  case 124:

    { clicon_debug(2,"leaf-list-substmt -> description-stmt"); }

    break;

  case 125:

    { clicon_debug(2,"leaf-list-substmt -> reference-stmt"); }

    break;

  case 126:

    { clicon_debug(2,"leaf-list-substmt -> unknown-stmt");}

    break;

  case 127:

    { clicon_debug(2,"leaf-list-stmt ->"); }

    break;

  case 128:

    { if (ysp_add(_yy, Y_LIST, (yyvsp[-1].string), NULL) == NULL) _YYERROR("16"); 
			   clicon_debug(2,"list-stmt -> LIST id-arg-str ;"); }

    break;

  case 129:

    { if (ysp_add_push(_yy, Y_LIST, (yyvsp[0].string)) == NULL) _YYERROR("17"); }

    break;

  case 130:

    { if (ystack_pop(_yy) < 0) _YYERROR("18");
			     clicon_debug(2,"list-stmt -> LIST id-arg-str { list-substmts }"); }

    break;

  case 131:

    { clicon_debug(2,"list-substmts -> list-substmts list-substmt"); }

    break;

  case 132:

    { clicon_debug(2,"list-substmts -> list-substmt"); }

    break;

  case 133:

    { clicon_debug(2,"list-substmt -> when-stmt"); }

    break;

  case 134:

    { clicon_debug(2,"list-substmt -> if-feature-stmt"); }

    break;

  case 135:

    { clicon_debug(2,"list-substmt -> must-stmt"); }

    break;

  case 136:

    { clicon_debug(2,"list-substmt -> key-stmt"); }

    break;

  case 137:

    { clicon_debug(2,"list-substmt -> unique-stmt"); }

    break;

  case 138:

    { clicon_debug(2,"list-substmt -> config-stmt"); }

    break;

  case 139:

    { clicon_debug(2,"list-substmt -> min-elements-stmt"); }

    break;

  case 140:

    { clicon_debug(2,"list-substmt -> max-elements-stmt"); }

    break;

  case 141:

    { clicon_debug(2,"list-substmt -> ordered-by-stmt"); }

    break;

  case 142:

    { clicon_debug(2,"list-substmt -> status-stmt"); }

    break;

  case 143:

    { clicon_debug(2,"list-substmt -> description-stmt"); }

    break;

  case 144:

    { clicon_debug(2,"list-substmt -> reference-stmt"); }

    break;

  case 145:

    { clicon_debug(2,"list-substmt -> typedef-stmt"); }

    break;

  case 146:

    { clicon_debug(2,"list-substmt -> grouping-stmt"); }

    break;

  case 147:

    { clicon_debug(2,"list-substmt -> data-def-stmt"); }

    break;

  case 148:

    { clicon_debug(2,"list-substmt -> unknown-stmt");}

    break;

  case 149:

    { clicon_debug(2,"list-substmt -> "); }

    break;

  case 150:

    { if (ysp_add(_yy, Y_CHOICE, (yyvsp[-1].string), NULL) == NULL) _YYERROR("19"); 
			   clicon_debug(2,"choice-stmt -> CHOICE id-arg-str ;"); }

    break;

  case 151:

    { if (ysp_add_push(_yy, Y_CHOICE, (yyvsp[0].string)) == NULL) _YYERROR("20"); }

    break;

  case 152:

    { if (ystack_pop(_yy) < 0) _YYERROR("21");
			     clicon_debug(2,"choice-stmt -> CHOICE id-arg-str { choice-substmts }"); }

    break;

  case 153:

    { clicon_debug(2,"choice-substmts -> choice-substmts choice-substmt"); }

    break;

  case 154:

    { clicon_debug(2,"choice-substmts -> choice-substmt"); }

    break;

  case 155:

    { clicon_debug(2,"choice-substmt -> when-stmt"); }

    break;

  case 156:

    { clicon_debug(2,"choice-substmt -> if-feature-stmt"); }

    break;

  case 157:

    { clicon_debug(2,"choice-substmt -> default-stmt"); }

    break;

  case 158:

    { clicon_debug(2,"choice-substmt -> config-stmt"); }

    break;

  case 159:

    { clicon_debug(2,"choice-substmt -> mandatory-stmt"); }

    break;

  case 160:

    { clicon_debug(2,"choice-substmt -> status-stmt"); }

    break;

  case 161:

    { clicon_debug(2,"choice-substmt -> description-stmt"); }

    break;

  case 162:

    { clicon_debug(2,"choice-substmt -> reference-stmt"); }

    break;

  case 163:

    { clicon_debug(2,"choice-substmt -> short-case-stmt");}

    break;

  case 164:

    { clicon_debug(2,"choice-substmt -> case-stmt");}

    break;

  case 165:

    { clicon_debug(2,"choice-substmt -> unknown-stmt");}

    break;

  case 166:

    { clicon_debug(2,"choice-substmt -> "); }

    break;

  case 167:

    { clicon_debug(2,"short-case-substmt -> container-stmt"); }

    break;

  case 168:

    { clicon_debug(2,"short-case-substmt -> leaf-stmt"); }

    break;

  case 169:

    { clicon_debug(2,"short-case-substmt -> leaf-list-stmt"); }

    break;

  case 170:

    { clicon_debug(2,"short-case-substmt -> list-stmt"); }

    break;

  case 171:

    { clicon_debug(2,"short-case-substmt -> anyxml-stmt");}

    break;

  case 172:

    { if (ysp_add(_yy, Y_CASE, (yyvsp[-1].string), NULL) == NULL) _YYERROR("22"); 
			   clicon_debug(2,"case-stmt -> CASE id-arg-str ;"); }

    break;

  case 173:

    { if (ysp_add_push(_yy, Y_CASE, (yyvsp[0].string)) == NULL) _YYERROR("23"); }

    break;

  case 174:

    { if (ystack_pop(_yy) < 0) _YYERROR("24");
			     clicon_debug(2,"case-stmt -> CASE id-arg-str { case-substmts }"); }

    break;

  case 175:

    { clicon_debug(2,"case-substmts -> case-substmts case-substmt"); }

    break;

  case 176:

    { clicon_debug(2,"case-substmts -> case-substmt"); }

    break;

  case 177:

    { clicon_debug(2,"case-substmt -> when-stmt"); }

    break;

  case 178:

    { clicon_debug(2,"case-substmt -> if-feature-stmt"); }

    break;

  case 179:

    { clicon_debug(2,"case-substmt -> status-stmt"); }

    break;

  case 180:

    { clicon_debug(2,"case-substmt -> description-stmt"); }

    break;

  case 181:

    { clicon_debug(2,"case-substmt -> reference-stmt"); }

    break;

  case 182:

    { clicon_debug(2,"case-substmt -> data-def-stmt");}

    break;

  case 183:

    { clicon_debug(2,"case-substmt -> unknown-stmt");}

    break;

  case 184:

    { clicon_debug(2,"case-substmt -> "); }

    break;

  case 185:

    { if (ysp_add(_yy, Y_ANYXML, (yyvsp[-1].string), NULL) == NULL) _YYERROR("25"); 
			   clicon_debug(2,"anyxml-stmt -> ANYXML id-arg-str ;"); }

    break;

  case 186:

    { if (ysp_add_push(_yy, Y_ANYXML, (yyvsp[0].string)) == NULL) _YYERROR("26"); }

    break;

  case 187:

    { if (ystack_pop(_yy) < 0) _YYERROR("27");
			     clicon_debug(2,"anyxml-stmt -> ANYXML id-arg-str { anyxml-substmts }"); }

    break;

  case 188:

    { clicon_debug(2,"anyxml-substmts -> anyxml-substmts anyxml-substmt"); }

    break;

  case 189:

    { clicon_debug(2,"anyxml-substmts -> anyxml-substmt"); }

    break;

  case 190:

    { clicon_debug(2,"anyxml-substmt -> when-stmt"); }

    break;

  case 191:

    { clicon_debug(2,"anyxml-substmt -> if-feature-stmt"); }

    break;

  case 192:

    { clicon_debug(2,"anyxml-substmt -> must-stmt"); }

    break;

  case 193:

    { clicon_debug(2,"anyxml-substmt -> config-stmt"); }

    break;

  case 194:

    { clicon_debug(2,"anyxml-substmt -> mandatory-stmt"); }

    break;

  case 195:

    { clicon_debug(2,"anyxml-substmt -> status-stmt"); }

    break;

  case 196:

    { clicon_debug(2,"anyxml-substmt -> description-stmt"); }

    break;

  case 197:

    { clicon_debug(2,"anyxml-substmt -> reference-stmt"); }

    break;

  case 198:

    { free((yyvsp[-3].string)); free((yyvsp[-1].string)); clicon_debug(2,"anyxml-substmt -> anyxml extension"); }

    break;

  case 199:

    { if (ysp_add(_yy, Y_USES, (yyvsp[-1].string), NULL) == NULL) _YYERROR("28"); 
			   clicon_debug(2,"uses-stmt -> USES id-arg-str ;"); }

    break;

  case 200:

    { if (ysp_add_push(_yy, Y_USES, (yyvsp[0].string)) == NULL) _YYERROR("29"); }

    break;

  case 201:

    { if (ystack_pop(_yy) < 0) _YYERROR("30");
			     clicon_debug(2,"uses-stmt -> USES id-arg-str { uses-substmts }"); }

    break;

  case 202:

    { clicon_debug(2,"uses-substmts -> uses-substmts uses-substmt"); }

    break;

  case 203:

    { clicon_debug(2,"uses-substmts -> uses-substmt"); }

    break;

  case 204:

    { clicon_debug(2,"uses-substmt -> when-stmt"); }

    break;

  case 205:

    { clicon_debug(2,"uses-substmt -> if-feature-stmt"); }

    break;

  case 206:

    { clicon_debug(2,"uses-substmt -> status-stmt"); }

    break;

  case 207:

    { clicon_debug(2,"uses-substmt -> description-stmt"); }

    break;

  case 208:

    { clicon_debug(2,"uses-substmt -> reference-stmt"); }

    break;

  case 209:

    { clicon_debug(2,"uses-substmt -> refine-stmt"); }

    break;

  case 210:

    { clicon_debug(2,"uses-substmt -> uses-augment-stmt"); }

    break;

  case 211:

    { clicon_debug(2,"uses-substmt -> unknown-stmt");}

    break;

  case 212:

    { clicon_debug(2,"uses-substmt -> "); }

    break;

  case 213:

    { if (ysp_add(_yy, Y_REFINE, (yyvsp[-1].string), NULL) == NULL) _YYERROR("31"); 
			   clicon_debug(2,"refine-stmt -> REFINE id-arg-str ;"); }

    break;

  case 214:

    { if (ysp_add_push(_yy, Y_REFINE, (yyvsp[0].string)) == NULL) _YYERROR("32"); }

    break;

  case 215:

    { if (ystack_pop(_yy) < 0) _YYERROR("33");
			     clicon_debug(2,"refine-stmt -> REFINE id-arg-str { refine-substmts }"); }

    break;

  case 216:

    { clicon_debug(2,"refine-substmts -> refine-substmts refine-substmt"); }

    break;

  case 217:

    { clicon_debug(2,"refine-substmts -> refine-substmt"); }

    break;

  case 218:

    { clicon_debug(2,"refine-substmt -> must-stmt"); }

    break;

  case 219:

    { clicon_debug(2,"refine-substmt -> mandatory-stmt"); }

    break;

  case 220:

    { clicon_debug(2,"refine-substmt -> default-stmt"); }

    break;

  case 221:

    { clicon_debug(2,"refine-substmt -> unknown-stmt");}

    break;

  case 222:

    { clicon_debug(2,"refine-substmt -> "); }

    break;

  case 224:

    { if (ysp_add_push(_yy, Y_AUGMENT, (yyvsp[0].string)) == NULL) _YYERROR("34"); }

    break;

  case 225:

    { if (ystack_pop(_yy) < 0) _YYERROR("35");
			     clicon_debug(2,"augment-stmt -> AUGMENT string { augment-substmts }"); }

    break;

  case 226:

    { clicon_debug(2,"augment-substmts -> augment-substmts augment-substmt"); }

    break;

  case 227:

    { clicon_debug(2,"augment-substmts -> augment-substmt"); }

    break;

  case 228:

    { clicon_debug(2,"augment-substmt -> when-stmt"); }

    break;

  case 229:

    { clicon_debug(2,"augment-substmt -> if-feature-stmt"); }

    break;

  case 230:

    { clicon_debug(2,"augment-substmt -> status-stmt"); }

    break;

  case 231:

    { clicon_debug(2,"augment-substmt -> description-stmt"); }

    break;

  case 232:

    { clicon_debug(2,"augment-substmt -> reference-stmt"); }

    break;

  case 233:

    { clicon_debug(2,"augment-substmt -> data-def-stmt"); }

    break;

  case 234:

    { clicon_debug(2,"augment-substmt -> case-stmt");}

    break;

  case 235:

    { clicon_debug(2,"augment-substmt -> "); }

    break;

  case 236:

    { if (ysp_add(_yy, Y_WHEN, (yyvsp[-1].string), NULL) == NULL) _YYERROR("36"); 
			   clicon_debug(2,"when-stmt -> WHEN string ;"); }

    break;

  case 237:

    { if (ysp_add_push(_yy, Y_WHEN, (yyvsp[0].string)) == NULL) _YYERROR("37"); }

    break;

  case 238:

    { if (ystack_pop(_yy) < 0) _YYERROR("38");
			     clicon_debug(2,"when-stmt -> WHEN string { when-substmts }"); }

    break;

  case 239:

    { clicon_debug(2,"when-substmts -> when-substmts when-substmt"); }

    break;

  case 240:

    { clicon_debug(2,"when-substmts -> when-substmt"); }

    break;

  case 241:

    { clicon_debug(2,"when-substmt -> description-stmt"); }

    break;

  case 242:

    { clicon_debug(2,"when-substmt -> reference-stmt"); }

    break;

  case 243:

    { clicon_debug(2,"when-substmt -> "); }

    break;

  case 244:

    { if (ysp_add(_yy, Y_RPC, (yyvsp[-1].string), NULL) == NULL) _YYERROR("39"); 
			   clicon_debug(2,"rpc-stmt -> RPC id-arg-str ;"); }

    break;

  case 245:

    { if (ysp_add_push(_yy, Y_RPC, (yyvsp[0].string)) == NULL) _YYERROR("40"); }

    break;

  case 246:

    { if (ystack_pop(_yy) < 0) _YYERROR("41");
			     clicon_debug(2,"rpc-stmt -> RPC id-arg-str { rpc-substmts }"); }

    break;

  case 247:

    { clicon_debug(2,"rpc-substmts -> rpc-substmts rpc-substmt"); }

    break;

  case 248:

    { clicon_debug(2,"rpc-substmts -> rpc-substmt"); }

    break;

  case 249:

    { clicon_debug(2,"rpc-substmt -> if-feature-stmt"); }

    break;

  case 250:

    { clicon_debug(2,"rpc-substmt -> status-stmt"); }

    break;

  case 251:

    { clicon_debug(2,"rpc-substmt -> description-stmt"); }

    break;

  case 252:

    { clicon_debug(2,"rpc-substmt -> reference-stmt"); }

    break;

  case 253:

    { clicon_debug(2,"rpc-substmt -> typedef-stmt"); }

    break;

  case 254:

    { clicon_debug(2,"rpc-substmt -> grouping-stmt"); }

    break;

  case 255:

    { clicon_debug(2,"rpc-substmt -> input-stmt"); }

    break;

  case 256:

    { clicon_debug(2,"rpc-substmt -> output-stmt"); }

    break;

  case 257:

    { clicon_debug(2,"rpc-substmt -> "); }

    break;

  case 258:

    { if (ysp_add_push(_yy, Y_INPUT, NULL) == NULL) _YYERROR("42"); }

    break;

  case 259:

    { if (ystack_pop(_yy) < 0) _YYERROR("43");
			     clicon_debug(2,"input-stmt -> INPUT { input-substmts }"); }

    break;

  case 260:

    { clicon_debug(2,"input-substmts -> input-substmts input-substmt"); }

    break;

  case 261:

    { clicon_debug(2,"input-substmts -> input-substmt"); }

    break;

  case 262:

    { clicon_debug(2,"input-substmt -> typedef-stmt"); }

    break;

  case 263:

    { clicon_debug(2,"input-substmt -> grouping-stmt"); }

    break;

  case 264:

    { clicon_debug(2,"input-substmt -> data-def-stmt"); }

    break;

  case 265:

    { clicon_debug(2,"input-substmt -> "); }

    break;

  case 266:

    { if (ysp_add_push(_yy, Y_OUTPUT, NULL) == NULL) _YYERROR("44"); }

    break;

  case 267:

    { if (ystack_pop(_yy) < 0) _YYERROR("45");
			     clicon_debug(2,"output-stmt -> OUTPUT { input-substmts }"); }

    break;

  case 268:

    { if (ysp_add_push(_yy, Y_TYPEDEF, (yyvsp[0].string)) == NULL) _YYERROR("46"); }

    break;

  case 269:

    { if (ystack_pop(_yy) < 0) _YYERROR("47");
			     clicon_debug(2,"typedef-stmt -> TYPEDEF id-arg-str { typedef-substmts }"); }

    break;

  case 270:

    { clicon_debug(2,"typedef-substmts -> typedef-substmts typedef-substmt"); }

    break;

  case 271:

    { clicon_debug(2,"typedef-substmts -> typedef-substmt"); }

    break;

  case 272:

    { clicon_debug(2,"typedef-substmt -> type-stmt"); }

    break;

  case 273:

    { clicon_debug(2,"typedef-substmt -> units-stmt"); }

    break;

  case 274:

    { clicon_debug(2,"typedef-substmt -> default-stmt"); }

    break;

  case 275:

    { clicon_debug(2,"typedef-substmt -> status-stmt"); }

    break;

  case 276:

    { clicon_debug(2,"typedef-substmt -> description-stmt"); }

    break;

  case 277:

    { clicon_debug(2,"typedef-substmt -> reference-stmt"); }

    break;

  case 278:

    { clicon_debug(2,"typedef-substmt -> unknown-stmt");}

    break;

  case 279:

    { clicon_debug(2,"typedef-substmt -> "); }

    break;

  case 280:

    { if (ysp_add(_yy, Y_TYPE, (yyvsp[-1].string), NULL) == NULL) _YYERROR("48"); 
			   clicon_debug(2,"type-stmt -> TYPE identifier-ref-arg-str ;");}

    break;

  case 281:

    { if (ysp_add_push(_yy, Y_TYPE, (yyvsp[0].string)) == NULL) _YYERROR("49"); 
			 }

    break;

  case 282:

    { if (ystack_pop(_yy) < 0) _YYERROR("50");
                           clicon_debug(2,"type-stmt -> TYPE identifier-ref-arg-str { type-body-stmts }");}

    break;

  case 283:

    { clicon_debug(2,"type-body-stmts -> type-body-stmts type-body-stmt"); }

    break;

  case 284:

    { clicon_debug(2,"type-body-stmts -> type-body-stmt"); }

    break;

  case 285:

    { clicon_debug(2,"type-body-stmt -> range-stmt"); }

    break;

  case 286:

    { clicon_debug(2,"type-body-stmt -> fraction-digits-stmt"); }

    break;

  case 287:

    { clicon_debug(2,"type-body-stmt -> length-stmt"); }

    break;

  case 288:

    { clicon_debug(2,"type-body-stmt -> pattern-stmt"); }

    break;

  case 289:

    { clicon_debug(2,"type-body-stmt -> enum-stmt"); }

    break;

  case 290:

    { clicon_debug(2,"type-body-stmt -> path-stmt"); }

    break;

  case 291:

    { clicon_debug(2,"type-body-stmt -> require-instance-stmt"); }

    break;

  case 292:

    { clicon_debug(2,"type-body-stmt -> base-stmt"); }

    break;

  case 293:

    { clicon_debug(2,"type-body-stmt -> bit-stmt"); }

    break;

  case 294:

    { clicon_debug(2,"type-body-stmt -> type-stmt"); }

    break;

  case 295:

    { if (ysp_add_push(_yy, Y_GROUPING, (yyvsp[0].string)) == NULL) _YYERROR("51"); }

    break;

  case 296:

    { if (ystack_pop(_yy) < 0) _YYERROR("52");
			     clicon_debug(2,"grouping-stmt -> GROUPING id-arg-str { grouping-substmts }"); }

    break;

  case 297:

    { clicon_debug(2,"grouping-substmts -> grouping-substmts grouping-substmt"); }

    break;

  case 298:

    { clicon_debug(2,"grouping-substmts -> grouping-substmt"); }

    break;

  case 299:

    { clicon_debug(2,"grouping-substmt -> status-stmt"); }

    break;

  case 300:

    { clicon_debug(2,"grouping-substmt -> description-stmt"); }

    break;

  case 301:

    { clicon_debug(2,"grouping-substmt -> reference-stmt"); }

    break;

  case 302:

    { clicon_debug(2,"grouping-substmt -> typedef-stmt"); }

    break;

  case 303:

    { clicon_debug(2,"grouping-substmt -> grouping-stmt"); }

    break;

  case 304:

    { clicon_debug(2,"grouping-substmt -> data-def-stmt"); }

    break;

  case 305:

    { clicon_debug(2,"grouping-substmt -> "); }

    break;

  case 306:

    { if (ysp_add(_yy, Y_LENGTH, (yyvsp[-1].string), NULL) == NULL) _YYERROR("53"); 
			   clicon_debug(2,"length-stmt -> LENGTH string ;"); }

    break;

  case 307:

    { if (ysp_add_push(_yy, Y_LENGTH, (yyvsp[0].string)) == NULL) _YYERROR("54"); }

    break;

  case 308:

    { if (ystack_pop(_yy) < 0) _YYERROR("55");
			     clicon_debug(2,"length-stmt -> LENGTH string { length-substmts }"); }

    break;

  case 309:

    { clicon_debug(2,"length-substmts -> length-substmts length-substmt"); }

    break;

  case 310:

    { clicon_debug(2,"length-substmts -> length-substmt"); }

    break;

  case 311:

    { clicon_debug(2,"length-substmt -> error-message-stmt");}

    break;

  case 312:

    { clicon_debug(2,"length-substmt -> description-stmt"); }

    break;

  case 313:

    { clicon_debug(2,"length-substmt -> reference-stmt"); }

    break;

  case 314:

    { clicon_debug(2,"length-substmt -> unknown-stmt");}

    break;

  case 315:

    { clicon_debug(2,"length-substmt -> "); }

    break;

  case 316:

    { if (ysp_add(_yy, Y_PATTERN, (yyvsp[-1].string), NULL) == NULL) _YYERROR("56"); 
			   clicon_debug(2,"pattern-stmt -> PATTERN string ;"); }

    break;

  case 317:

    { if (ysp_add_push(_yy, Y_PATTERN, (yyvsp[0].string)) == NULL) _YYERROR("57"); }

    break;

  case 318:

    { if (ystack_pop(_yy) < 0) _YYERROR("58");
			     clicon_debug(2,"pattern-stmt -> PATTERN string { pattern-substmts }"); }

    break;

  case 319:

    { clicon_debug(2,"pattern-substmts -> pattern-substmts pattern-substmt"); }

    break;

  case 320:

    { clicon_debug(2,"pattern-substmts -> pattern-substmt"); }

    break;

  case 321:

    { clicon_debug(2,"pattern-substmt -> reference-stmt"); }

    break;

  case 322:

    { clicon_debug(2,"pattern-substmt -> error-message-stmt");}

    break;

  case 323:

    { clicon_debug(2,"pattern-substmt -> unknown-stmt");}

    break;

  case 324:

    { clicon_debug(2,"pattern-substmt -> "); }

    break;

  case 325:

    { if (ysp_add(_yy, Y_EXTENSION, (yyvsp[-1].string), NULL) == NULL) _YYERROR("59");
                    clicon_debug(2,"extenstion-stmt -> EXTENSION id-arg-str ;"); }

    break;

  case 326:

    { if (ysp_add_push(_yy, Y_EXTENSION, (yyvsp[0].string)) == NULL) _YYERROR("60"); }

    break;

  case 327:

    { if (ystack_pop(_yy) < 0) _YYERROR("61");
                    clicon_debug(2,"extension-stmt -> FEATURE id-arg-str { extension-substmts }"); }

    break;

  case 328:

    { clicon_debug(2,"extension-substmts -> extension-substmts extension-substmt"); }

    break;

  case 329:

    { clicon_debug(2,"extension-substmts -> extension-substmt"); }

    break;

  case 330:

    { clicon_debug(2,"extension-substmt -> argument-stmt"); }

    break;

  case 331:

    { clicon_debug(2,"extension-substmt -> status-stmt"); }

    break;

  case 332:

    { clicon_debug(2,"extension-substmt -> description-stmt"); }

    break;

  case 333:

    { clicon_debug(2,"extension-substmt -> reference-stmt"); }

    break;

  case 334:

    { clicon_debug(2,"extension-substmt -> unknown-stmt");}

    break;

  case 335:

    { clicon_debug(2,"extension-substmt -> "); }

    break;

  case 336:

    { free((yyvsp[-1].string)); }

    break;

  case 337:

    { free((yyvsp[-2].string)); }

    break;

  case 338:

    { if (ysp_add(_yy, Y_FEATURE, (yyvsp[-1].string), NULL) == NULL) _YYERROR("62");
		      clicon_debug(2,"feature-stmt -> FEATURE id-arg-str ;"); }

    break;

  case 339:

    { if (ysp_add_push(_yy, Y_FEATURE, (yyvsp[0].string)) == NULL) _YYERROR("63"); }

    break;

  case 340:

    { if (ystack_pop(_yy) < 0) _YYERROR("64");
                    clicon_debug(2,"feature-stmt -> FEATURE id-arg-str { feature-substmts }"); }

    break;

  case 341:

    { clicon_debug(2,"feature-substmts -> feature-substmts feature-substmt"); }

    break;

  case 342:

    { clicon_debug(2,"feature-substmts -> feature-substmt"); }

    break;

  case 343:

    { clicon_debug(2,"feature-substmt -> if-feature-stmt"); }

    break;

  case 344:

    { clicon_debug(2,"feature-substmt -> status-stmt"); }

    break;

  case 345:

    { clicon_debug(2,"feature-substmt -> description-stmt"); }

    break;

  case 346:

    { clicon_debug(2,"feature-substmt -> reference-stmt"); }

    break;

  case 347:

    { clicon_debug(2,"feature-substmt -> unknown-stmt");}

    break;

  case 348:

    { clicon_debug(2,"feature-substmt -> "); }

    break;

  case 349:

    { if (ysp_add(_yy, Y_IDENTITY, (yyvsp[-1].string), NULL) == NULL) _YYERROR("65"); 
			   clicon_debug(2,"identity-stmt -> IDENTITY string ;"); }

    break;

  case 350:

    { if (ysp_add_push(_yy, Y_IDENTITY, (yyvsp[0].string)) == NULL) _YYERROR("66"); }

    break;

  case 351:

    { if (ystack_pop(_yy) < 0) _YYERROR("67");
			     clicon_debug(2,"identity-stmt -> IDENTITY string { identity-substmts }"); }

    break;

  case 352:

    { clicon_debug(2,"identity-substmts -> identity-substmts identity-substmt"); }

    break;

  case 353:

    { clicon_debug(2,"identity-substmts -> identity-substmt"); }

    break;

  case 354:

    { clicon_debug(2,"identity-substmt -> base-stmt"); }

    break;

  case 355:

    { clicon_debug(2,"identity-substmt -> status-stmt"); }

    break;

  case 356:

    { clicon_debug(2,"identity-substmt -> description-stmt"); }

    break;

  case 357:

    { clicon_debug(2,"identity-substmt -> reference-stmt"); }

    break;

  case 358:

    { clicon_debug(2,"identity-substmt -> unknown-stmt");}

    break;

  case 359:

    { clicon_debug(2,"identity-substmt -> "); }

    break;

  case 360:

    { if (ysp_add(_yy, Y_RANGE, (yyvsp[-1].string), NULL) == NULL) _YYERROR("68"); 
			   clicon_debug(2,"range-stmt -> RANGE string ;"); }

    break;

  case 361:

    { if (ysp_add_push(_yy, Y_RANGE, (yyvsp[0].string)) == NULL) _YYERROR("69"); }

    break;

  case 362:

    { if (ystack_pop(_yy) < 0) _YYERROR("70");
			     clicon_debug(2,"range-stmt -> RANGE string { range-substmts }"); }

    break;

  case 363:

    { clicon_debug(2,"range-substmts -> range-substmts range-substmt"); }

    break;

  case 364:

    { clicon_debug(2,"range-substmts -> range-substmt"); }

    break;

  case 365:

    { clicon_debug(2,"range-substmt -> error-message-stmt");}

    break;

  case 366:

    { clicon_debug(2,"range-substmt -> description-stmt"); }

    break;

  case 367:

    { clicon_debug(2,"range-substmt -> reference-stmt"); }

    break;

  case 368:

    { clicon_debug(2,"range-substmt -> unknown-stmt");}

    break;

  case 369:

    { clicon_debug(2,"range-substmt -> "); }

    break;

  case 370:

    { if (ysp_add(_yy, Y_ENUM, (yyvsp[-1].string), NULL) == NULL) _YYERROR("71"); 
			   clicon_debug(2,"enum-stmt -> ENUM string ;"); }

    break;

  case 371:

    { if (ysp_add_push(_yy, Y_ENUM, (yyvsp[0].string)) == NULL) _YYERROR("72"); }

    break;

  case 372:

    { if (ystack_pop(_yy) < 0) _YYERROR("73");
			   clicon_debug(2,"enum-stmt -> ENUM string { enum-substmts }"); }

    break;

  case 373:

    { clicon_debug(2,"enum-substmts -> enum-substmts enum-substmt"); }

    break;

  case 374:

    { clicon_debug(2,"enum-substmts -> enum-substmt"); }

    break;

  case 375:

    { clicon_debug(2,"enum-substmt -> value-stmt"); }

    break;

  case 376:

    { clicon_debug(2,"enum-substmt -> status-stmt"); }

    break;

  case 377:

    { clicon_debug(2,"enum-substmt -> description-stmt"); }

    break;

  case 378:

    { clicon_debug(2,"enum-substmt -> reference-stmt"); }

    break;

  case 379:

    { clicon_debug(2,"enum-substmt -> unknown-stmt");}

    break;

  case 380:

    { clicon_debug(2,"enum-substmt -> "); }

    break;

  case 381:

    { if (ysp_add(_yy, Y_BIT, (yyvsp[-1].string), NULL) == NULL) _YYERROR("74"); 
			   clicon_debug(2,"bit-stmt -> BIT string ;"); }

    break;

  case 382:

    { if (ysp_add_push(_yy, Y_BIT, (yyvsp[0].string)) == NULL) _YYERROR("75"); }

    break;

  case 383:

    { if (ystack_pop(_yy) < 0) _YYERROR("76");
			   clicon_debug(2,"bit-stmt -> BIT string { bit-substmts }"); }

    break;

  case 384:

    { clicon_debug(2,"bit-substmts -> bit-substmts bit-substmt"); }

    break;

  case 385:

    { clicon_debug(2,"bit-substmts -> bit-substmt"); }

    break;

  case 386:

    { clicon_debug(2,"bit-substmt -> positition-stmt"); }

    break;

  case 387:

    { clicon_debug(2,"bit-substmt -> status-stmt"); }

    break;

  case 388:

    { clicon_debug(2,"bit-substmt -> description-stmt"); }

    break;

  case 389:

    { clicon_debug(2,"bit-substmt -> reference-stmt"); }

    break;

  case 390:

    { clicon_debug(2,"bit-substmt -> "); }

    break;

  case 391:

    { if (ysp_add(_yy, Y_MUST, (yyvsp[-1].string), NULL) == NULL) _YYERROR("77"); 
			   clicon_debug(2,"must-stmt -> MUST string ;"); }

    break;

  case 392:

    { if (ysp_add_push(_yy, Y_MUST, (yyvsp[0].string)) == NULL) _YYERROR("78"); }

    break;

  case 393:

    { if (ystack_pop(_yy) < 0) _YYERROR("79");
			   clicon_debug(2,"must-stmt -> MUST string { must-substmts }"); }

    break;

  case 394:

    { clicon_debug(2,"must-substmts -> must-substmts must-substmt"); }

    break;

  case 395:

    { clicon_debug(2,"must-substmts -> must-substmt"); }

    break;

  case 396:

    { clicon_debug(2,"must-substmt -> error-message-stmt"); }

    break;

  case 397:

    { clicon_debug(2,"must-substmt -> description-stmt"); }

    break;

  case 398:

    { clicon_debug(2,"must-substmt -> reference-stmt"); }

    break;

  case 399:

    { clicon_debug(2,"must-substmt -> "); }

    break;

  case 400:

    { if (ysp_add(_yy, Y_ERROR_MESSAGE, (yyvsp[-1].string), NULL) == NULL) _YYERROR("80"); }

    break;

  case 401:

    { if (ysp_add_push(_yy, Y_IMPORT, (yyvsp[0].string)) == NULL) _YYERROR("81"); }

    break;

  case 402:

    { if (ystack_pop(_yy) < 0) _YYERROR("82");
			  clicon_debug(2,"import-stmt -> IMPORT id-arg-str { import-substmts }");}

    break;

  case 403:

    { clicon_debug(2,"import-substmts -> import-substmts import-substm");}

    break;

  case 404:

    { clicon_debug(2,"import-substmts ->");}

    break;

  case 405:

    {  clicon_debug(2,"import-stmt -> prefix-stmt"); }

    break;

  case 406:

    {  clicon_debug(2,"import-stmt -> revision-date-stmt"); }

    break;

  case 407:

    { if (ysp_add(_yy, Y_YANG_VERSION, (yyvsp[-1].string), NULL) == NULL) _YYERROR("83");
                            clicon_debug(2,"yang-version-stmt -> YANG-VERSION string"); }

    break;

  case 408:

    { if (ysp_add(_yy, Y_FRACTION_DIGITS, (yyvsp[-1].string), NULL) == NULL) _YYERROR("84"); 
                            clicon_debug(2,"fraction-digits-stmt -> FRACTION-DIGITS string"); }

    break;

  case 409:

    { if (ysp_add(_yy, Y_IF_FEATURE, (yyvsp[-1].string), NULL) == NULL) _YYERROR("85"); 
                            clicon_debug(2,"if-feature-stmt -> IF-FEATURE identifier-ref-arg-str"); }

    break;

  case 410:

    { if (ysp_add(_yy, Y_VALUE, (yyvsp[-1].string), NULL) == NULL) _YYERROR("86"); 
                            clicon_debug(2,"value-stmt -> VALUE integer-value"); }

    break;

  case 411:

    { if (ysp_add(_yy, Y_POSITION, (yyvsp[-1].string), NULL) == NULL) _YYERROR("87"); 
                            clicon_debug(2,"position-stmt -> POSITION integer-value"); }

    break;

  case 412:

    { if (ysp_add(_yy, Y_STATUS, (yyvsp[-1].string), NULL) == NULL) _YYERROR("88"); 
                            clicon_debug(2,"status-stmt -> STATUS string"); }

    break;

  case 413:

    { if (ysp_add(_yy, Y_CONFIG, (yyvsp[-1].string), NULL) == NULL) _YYERROR("89"); 
                            clicon_debug(2,"config-stmt -> CONFIG config-arg-str"); }

    break;

  case 414:

    { if (ysp_add(_yy, Y_BASE, (yyvsp[-1].string), NULL)== NULL) _YYERROR("90"); 
                            clicon_debug(2,"base-stmt -> BASE identifier-ref-arg-str"); }

    break;

  case 415:

    { if (ysp_add(_yy, Y_PATH, (yyvsp[-1].string), NULL)== NULL) _YYERROR("91"); 
                            clicon_debug(2,"path-stmt -> PATH string"); }

    break;

  case 416:

    { if (ysp_add(_yy, Y_REQUIRE_INSTANCE, (yyvsp[-1].string), NULL)== NULL) _YYERROR("92"); 
                            clicon_debug(2,"require-instance-stmt -> REQUIRE-INSTANCE string"); }

    break;

  case 417:

    { if (ysp_add(_yy, Y_UNITS, (yyvsp[-1].string), NULL)== NULL) _YYERROR("93"); 
                            clicon_debug(2,"units-stmt -> UNITS string"); }

    break;

  case 418:

    { if (ysp_add(_yy, Y_DEFAULT, (yyvsp[-1].string), NULL)== NULL) _YYERROR("94"); 
                            clicon_debug(2,"default-stmt -> DEFAULT string"); }

    break;

  case 419:

    { if (ysp_add(_yy, Y_CONTACT, (yyvsp[-1].string), NULL)== NULL) _YYERROR("95"); 
                            clicon_debug(2,"contact-stmt -> CONTACT string"); }

    break;

  case 420:

    { if (ysp_add(_yy, Y_REVISION_DATE, (yyvsp[-1].string), NULL) == NULL) _YYERROR("96"); 
			 clicon_debug(2,"revision-date-stmt -> date;"); }

    break;

  case 421:

    { if (ysp_add(_yy, Y_INCLUDE, (yyvsp[-1].string), NULL)== NULL) _YYERROR("97"); 
                           clicon_debug(2,"include-stmt -> id-arg-str"); }

    break;

  case 422:

    { if (ysp_add(_yy, Y_INCLUDE, (yyvsp[-3].string), NULL)== NULL) _YYERROR("98"); 
                           clicon_debug(2,"include-stmt -> id-arg-str { revision-date-stmt }"); }

    break;

  case 423:

    { if (ysp_add(_yy, Y_NAMESPACE, (yyvsp[-1].string), NULL)== NULL) _YYERROR("99"); 
                            clicon_debug(2,"namespace-stmt -> NAMESPACE string"); }

    break;

  case 424:

    { if (ysp_add(_yy, Y_PREFIX, (yyvsp[-1].string), NULL)== NULL) _YYERROR("100"); 
			     clicon_debug(2,"prefix-stmt -> PREFIX string ;");}

    break;

  case 425:

    { if (ysp_add(_yy, Y_DESCRIPTION, (yyvsp[-1].string), NULL)== NULL) _YYERROR("101"); 
			   clicon_debug(2,"description-stmt -> DESCRIPTION string ;");}

    break;

  case 426:

    { if (ysp_add(_yy, Y_ORGANIZATION, (yyvsp[-1].string), NULL)== NULL) _YYERROR("102"); 
			   clicon_debug(2,"organization-stmt -> ORGANIZATION string ;");}

    break;

  case 427:

    { if (ysp_add(_yy, Y_MIN_ELEMENTS, (yyvsp[-1].string), NULL)== NULL) _YYERROR("103"); 
			   clicon_debug(2,"min-elements-stmt -> MIN-ELEMENTS integer ;");}

    break;

  case 428:

    { if (ysp_add(_yy, Y_MAX_ELEMENTS, (yyvsp[-1].string), NULL)== NULL) _YYERROR("104"); 
			   clicon_debug(2,"max-elements-stmt -> MIN-ELEMENTS integer ;");}

    break;

  case 429:

    { if (ysp_add(_yy, Y_REFERENCE, (yyvsp[-1].string), NULL)== NULL) _YYERROR("105"); 
			   clicon_debug(2,"reference-stmt -> REFERENCE string ;");}

    break;

  case 430:

    { yang_stmt *ys;
			     if ((ys = ysp_add(_yy, Y_MANDATORY, (yyvsp[-1].string), NULL))== NULL) _YYERROR("106"); 
			   clicon_debug(2,"mandatory-stmt -> MANDATORY mandatory-arg-str ;");}

    break;

  case 431:

    { yang_stmt *ys;
			     if ((ys = ysp_add(_yy, Y_PRESENCE, (yyvsp[-1].string), NULL))== NULL) _YYERROR("107"); 
			   clicon_debug(2,"presence-stmt -> PRESENCE string ;");}

    break;

  case 432:

    { yang_stmt *ys;
			     if ((ys = ysp_add(_yy, Y_ORDERED_BY, (yyvsp[-1].string), NULL))== NULL) _YYERROR("108"); 
			   clicon_debug(2,"ordered-by-stmt -> ORDERED-BY ordered-by-arg ;");}

    break;

  case 433:

    { if (ysp_add(_yy, Y_KEY, (yyvsp[-1].string), NULL)== NULL) _YYERROR("109"); 
			   clicon_debug(2,"key-stmt -> KEY id-arg-str ;");}

    break;

  case 434:

    { if (ysp_add(_yy, Y_UNIQUE, (yyvsp[-1].string), NULL)== NULL) _YYERROR("110"); 
			   clicon_debug(2,"key-stmt -> KEY id-arg-str ;");}

    break;

  case 435:

    { (yyval.string)=(yyvsp[0].string); }

    break;

  case 436:

    { (yyval.string)=(yyvsp[0].string); }

    break;

  case 437:

    {   if (((yyval.string)=prefix_id_join(NULL, (yyvsp[0].string))) == NULL) _YYERROR("111");
			clicon_debug(2,"identifier-ref-arg-str -> string"); }

    break;

  case 438:

    {   if (((yyval.string)=prefix_id_join((yyvsp[-2].string), (yyvsp[0].string))) == NULL) _YYERROR("112");
			clicon_debug(2,"identifier-ref-arg-str -> prefix : string"); }

    break;

  case 439:

    { (yyval.string)=(yyvsp[0].string); clicon_debug(2,"id-arg-str -> string"); }

    break;

  case 440:

    { (yyval.string)=(yyvsp[0].string); clicon_debug(2,"string -> qstrings (%s)", (yyvsp[0].string)); }

    break;

  case 441:

    { (yyval.string)=(yyvsp[0].string); clicon_debug(2,"string -> ustring (%s)", (yyvsp[0].string)); }

    break;

  case 442:

    {
			 int len = strlen((yyvsp[-2].string));
			 (yyval.string) = realloc((yyvsp[-2].string), len + strlen((yyvsp[0].string)) + 1); 
			 sprintf((yyval.string)+len, "%s", (yyvsp[0].string));
			 free((yyvsp[0].string)); 
			 clicon_debug(2,"qstrings-> qstrings + qstring"); 
		     }

    break;

  case 443:

    { (yyval.string)=(yyvsp[0].string); clicon_debug(2,"qstrings-> qstring"); }

    break;

  case 444:

    { (yyval.string)=(yyvsp[-1].string); clicon_debug(2,"string-> \" ustring \""); }

    break;

  case 445:

    {
			 int len = strlen((yyvsp[-1].string));
			 (yyval.string) = realloc((yyvsp[-1].string), len+strlen((yyvsp[0].string)) + 1);
			 sprintf((yyval.string)+len, "%s", (yyvsp[0].string)); 
			 free((yyvsp[0].string));
		     }

    break;

  case 446:

    {(yyval.string)=(yyvsp[0].string); }

    break;



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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (_yy, YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (_yy, yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
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
                      yytoken, &yylval, _yy);
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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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
                  yystos[yystate], yyvsp, _yy);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (_yy, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, _yy);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, _yy);
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
  return yyresult;
}



