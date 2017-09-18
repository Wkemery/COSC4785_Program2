/*
 * Lexeme.h
 * Author: Wyatt Emery
 * Date: SEP 15, 2017
 *
 * COSC 4785, Homework2
 *
 */


#include<string>


#define UNARYOP 50
#define RELATIONOP 51
#define SUMOP 52
#define PRODUCTOP 53
#define ASSIGNOP 54
#define CLASS 100
#define THIS 101
#define IF 102
#define ELSE 103
#define WHILE 104
#define RETURN 105
#define PRINT 106
#define READ 107
#define VOID 108
#define NEW 109
#define NULLKEYWORD 110


#define PUNCTUATION 12
#define BLOCK 13
#define INT 14
#define WORD 17
#define SPACE 10
#define TAB 11
#define NEWLINE 18

#define STARTCOMMENT 24
#define COMMENT 25
#define ERR 666

#define FLOAT 15
#define SCI 16




typedef struct lexeme Lexeme;

#ifndef PROGRAM1_H
#define PROGRAM1_H

extern Lexeme token;

struct lexeme
{
  std::string value;
  int column;
  int line;
};

extern void setToken(char* yytext, int yylineno, int column);
#endif