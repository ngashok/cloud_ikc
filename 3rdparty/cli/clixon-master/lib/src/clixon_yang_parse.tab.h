/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
