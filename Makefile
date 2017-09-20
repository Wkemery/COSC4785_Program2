##############################
# Makefile
# Author: Wyatt Emery
# Date: SEP 6, 2017
#
# COSC 4785, Homework 1
# 
# this will compile and generate an executable from program2.cpp and program2.lpp
##############################

CXX=g++
CXXFLAGS=-ggdb -Wall
FLEX=flex++
FLEXFLAGS=--warn

.PHONY: clean tar

program2: program2.cpp program2_lex.cpp Lexeme.cpp Lexeme.h
	${CXX} ${CXXFLAGS} program2.cpp program2_lex.cpp Lexeme.cpp -o program2

program2_lex.cpp: program2.lpp
	${FLEX} ${FLEXFLAGS} program2.lpp

tar: program2.cpp program2.lpp Lexeme.cpp Lexeme.h Makefile
	tar -cf wemery_HW2.tar program2.cpp program2.lpp Lexeme.cpp Lexeme.h \
	Makefile

clean: 
	/bin/rm -f *.o core.* program2 program2_lex.cpp wemery_HW2.tar

