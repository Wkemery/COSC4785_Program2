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

#include"Lexeme.h"
using namespace std;


int main()
{
  //for printing stuff out for now
  map<int, string> pTable;
  pTable.insert(std::pair<int, string>(50, "UNARYOP"));
  pTable.insert(std::pair<int, string>(51, "RELATOP"));
  pTable.insert(std::pair<int, string>(52, "SUMOP"));
  pTable.insert(std::pair<int, string>(53, "PRODOP"));
  pTable.insert(std::pair<int, string>(54, "ASSIGOP"));
  
  pTable.insert(std::pair<int, string>(100, "CLASS"));
  pTable.insert(std::pair<int, string>(101, "THIS"));
  pTable.insert(std::pair<int, string>(102, "IF"));
  pTable.insert(std::pair<int, string>(103, "ELSE"));
  pTable.insert(std::pair<int, string>(104, "WHILE"));
  pTable.insert(std::pair<int, string>(105, "RETURN"));
  pTable.insert(std::pair<int, string>(106, "PRINT"));
  pTable.insert(std::pair<int, string>(107, "READ"));
  pTable.insert(std::pair<int, string>(108, "VOID"));
  pTable.insert(std::pair<int, string>(109, "NEW"));
  pTable.insert(std::pair<int, string>(110, "NULL"));
  
  pTable.insert(std::pair<int, string>(12, "PUNC"));
  pTable.insert(std::pair<int, string>(13, "BLOCK"));
  pTable.insert(std::pair<int, string>(14, "INT"));
  pTable.insert(std::pair<int, string>(17, "WORD"));
  pTable.insert(std::pair<int, string>(11, "TAB"));
  pTable.insert(std::pair<int, string>(18, "NEWLINE"));
  pTable.insert(std::pair<int, string>(666, "ERR"));
  
  pTable.insert(std::pair<int, string>(25, "COMM"));

  
  
  
  
  
  
  
  
    yyFlexLexer myScanner;
    int rtn = 0;
    
    bool firstScan = true;
    
    
    while((rtn=myScanner.yylex()) != 0)
    {
        if(firstScan)
        {
            firstScan = false;
            cout << "Line" << "\t" << "Column" << "\t" << "Type" << "\t\t" << "Length" 
            << "\t" << "Value" << endl;
        }
        if(rtn!= SPACE)
      {
        cout << token.line << "\t";
        cout << token.column << "\t";
        cout << pTable[rtn] << "\t\t";
        cout << token.value.length() << "\t";
        if((rtn != TAB) && (rtn != NEWLINE))
          cout << token.value;
        cout << endl;   
      }

        
    }
  
    return 0;
  
}
