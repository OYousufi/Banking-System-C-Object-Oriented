/* File: main.cc
   Author: Ovais Ahmed Yousufi
   Description: Runs the interface class that runs the whole program
*/

#include "Interface.h"

#include <iostream>

int main() {
	Interface* I = new Interface;
	I->MainMenu();
	delete I;
	return 0;
}









