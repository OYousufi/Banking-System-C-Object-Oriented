/* File: savings.h
   Author: Ovais Ahmed Yousufi
   Description: Declares functions that take care of functions
   				related to a current account.
*/

#ifndef SAVINGS_H_
#define SAVINGS_H_

#include "account.h"

class Savings: public Account {
private:
	
public:
	Savings();
	void Withdraw();
	void Deposit();
	void Deposit(float);
	void Interest(float);
};

#endif // SAVINGS_H_