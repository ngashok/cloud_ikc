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

#ifndef YY_CLIGEN_PARSE_Y_TAB_H_INCLUDED
# define YY_CLIGEN_PARSE_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int cligen_parsedebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    MY_EOF = 258,
    V_RANGE = 259,
    V_LENGTH = 260,
    V_CHOICE = 261,
    V_KEYWORD = 262,
    V_REGEXP = 263,
    V_FRACTION_DIGITS = 264,
    V_SHOW = 265,
    V_TREENAME = 266,
    V_TRANSLATE = 267,
    DOUBLEPARENT = 268,
    DQ = 269,
    DQP = 270,
    PDQ = 271,
    NAME = 272,
    NUMBER = 273,
    DECIMAL = 274,
    CHAR = 275
  };
#endif
/* Tokens.  */
#define MY_EOF 258
#define V_RANGE 259
#define V_LENGTH 260
#define V_CHOICE 261
#define V_KEYWORD 262
#define V_REGEXP 263
#define V_FRACTION_DIGITS 264
#define V_SHOW 265
#define V_TREENAME 266
#define V_TRANSLATE 267
#define DOUBLEPARENT 268
#define DQ 269
#define DQP 270
#define PDQ 271
#define NAME 272
#define NUMBER 273
#define DECIMAL 274
#define CHAR 275

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


extern YYSTYPE cligen_parselval;

int cligen_parseparse (void *_ya);

#endif /* !YY_CLIGEN_PARSE_Y_TAB_H_INCLUDED  */
