/*debugger.cpp*/

/**
  * @brief simplified version of gdb for nuPython
  *
  * Debugger for nuPython, C++ edition! Provides a simple gdb-like
  * interface, with support for step-by-step execution of nuPython.
  * Uses nuPython interpreter as execution engine.
  *
  * @note YOUR NAME
  *
  * @note original version by Ata Guvendi
  * @note turned into assignment by Prof. Hummel
  * @note Northwestern University
  */

#include <iostream>

#include "debugger.h"

using namespace std;


/**
  * @brief constructor
  *
  * @param program Pointer to first stmt in the program graph
  */
Debugger::Debugger(struct STMT* program)
{
  
}


/**
  * @brief destructor
  */
Debugger::~Debugger()
{
  
}


/**
  * @brief called to run one session of the debugger
  *
  * Run the debugger for one execution run of the given program.
  *
  * @return nothing
  */
void Debugger::run()
{
  string cmd;
   
  //
  // command loop until quit is entered:
  //
  while (true) {
    
    cout << endl;
    cout << "Enter a command, h for help > " << endl;
    cin >> cmd;
    
    if (cmd == "q") {
      break;
    }
    else if (cmd == "h") {
      cout << "Available commands:" << endl
        << "s -> Step to next stmt by executing current stmt" << endl
        << "p varname -> Print variable" << endl
        << "c varname newvalue -> Change variable to new value" << endl
        << "sm -> Show memory contents" << endl
        << "e -> Exection history" << endl
        << "w -> What line are we about to execute?" << endl
        << "pg -> Print program graph" << endl
        << "q -> Quit the debugger" << endl;   
    }
    else {
      cout << "unknown command" << endl;
    }
    
  }//while
  
}
