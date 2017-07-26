/* File: current.h
   Author: Ovais Ahmed Yousufi
   Description: Declares functions that take care of functions
   				related to a current account.
*/

#ifndef CURRENT_H_
#define CURRENT_H_

#include "account.h"

class Current: public Account {
private:
	
public:
	Current();
	void Withdraw();
	void Deposit();
};

#endif // CURRENT_H_