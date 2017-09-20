/*
 * program2.cpp
 * Author: Wyatt Emery
 * Date: SEP 15, 2017
 *
 * COSC 4785, Homework2
 *
 */

#include<iostream>
#include<FlexLexer.h>
#include<string>
#include<map>
#include<cstdlib>
#include"Lexeme.h"
using namespace std;


int main()
{
  //for printing stuff out for now
  map<int, string> pTable;
  pTable.insert(std::pair<int, string>(UNARYOP, "UNARYOP"));
  pTable.insert(std::pair<int, string>(RELATIONOP, "RELATOP"));
  pTable.insert(std::pair<int, string>(SUMOP, "SUMOP"));
  pTable.insert(std::pair<int, string>(PRODUCTOP, "PRODOP"));
  pTable.insert(std::pair<int, string>(ASSIGNOP, "ASSIGOP"));
  
  pTable.insert(std::pair<int, string>(CLASS, "CLASS"));
  pTable.insert(std::pair<int, string>(THIS, "THIS"));
  pTable.insert(std::pair<int, string>(IF, "IF"));
  pTable.insert(std::pair<int, string>(ELSE, "ELSE"));
  pTable.insert(std::pair<int, string>(WHILE, "WHILE"));
  pTable.insert(std::pair<int, string>(RETURN, "RETURN"));
  pTable.insert(std::pair<int, string>(PRINT, "PRINT"));
  pTable.insert(std::pair<int, string>(PRINT, "READ"));
  pTable.insert(std::pair<int, string>(VOID, "VOID"));
  pTable.insert(std::pair<int, string>(NEW, "NEW"));
  pTable.insert(std::pair<int, string>(NULLKEYWORD, "NULL"));
  pTable.insert(std::pair<int, string>(INT, "INT"));
  
  
  pTable.insert(std::pair<int, string>(PUNCTUATION, "PUNC"));
  pTable.insert(std::pair<int, string>(IDENTIFIER, "ID"));
  pTable.insert(std::pair<int, string>(ERR, "ERR"));
  pTable.insert(std::pair<int, string>(NUM, "NUM"));
  /****************************************************************************/
  
    yyFlexLexer myScanner;
    int rtn = 0;
    int errCount = 0;
    bool firstScan = true;
    
    
    while((rtn=myScanner.yylex()) != 0)
    {
      if(firstScan)
      {
        firstScan = false;
        cout << "Line" << "\t" << "Column" << "\t" << "Type" << "\t\t" 
        << "Length" << "\t" << "Value" << endl;
      }
      if((rtn!= SPACE) && (rtn!= IGNORE))
      {
        cout << token.line << "\t";
        cout << token.column << "\t";
        cout << pTable[rtn] << "\t\t";
        cout << token.value.length() << "\t";
        cout << token.value;
        cout << endl;   
      }
      
      if(rtn == ERR) errCount++;
      if(errCount > 20)
      {
        cout << "Error Processing Input: Too many Errors" << endl;
        exit(1);
      }
        
    }
  
    return 0;
  
}
