/*
 * Lexeme.cpp
 * Author: Wyatt Emery
 * Date: SEP 15, 2017
 *
 * COSC 4785, Homework2
 *
 */


#include"Lexeme.h"

extern void setToken(char* yytext, int lineno, int column)
{
  
  if(yytext != NULL) token.value = yytext;
  else token.value = "";
  token.line = lineno;
  token.column = column;
}