##############################
# Makefile
# Author: Wyatt Emery
# Date: SEP 6, 2017
#
# COSC 4785, Homework 1
# 
# this will compile and generate an executable from program1.cpp
##############################

CC=g++
CFLAGS=-ggdb -Wall

.PHONY: clean


all: flex program1

flex: program2.lpp
	flex++ --warn program2.lpp

program1: program2.cpp program2_lex.cpp Lexeme.cpp Lexeme.h
	${CC} ${CFLAGS} program2.cpp program2_lex.cpp Lexeme.cpp -o program2

clean: 
	/bin/rm -f *.o program2 program2_lex.cpp
