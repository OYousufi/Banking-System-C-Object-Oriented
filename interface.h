/* File: interface.h
   Author: Ovais Ahmed Yousufi & Saad Nazir
   Description: Declared an interface class that takes care of the user interface
*/

#ifndef INTERFACE_H_
#define INTERFACE_H_ 

#include "account.h"
#include "accountmanager.h"
#include "card.h"
#include "creditcard.h"
#include "current.h"
#include "debitcard.h"
#include "loan.h"
#include "savings.h"

class Interface {
private:
	
public:
	Interface();
	void MainMenu(); 
};

#endif // INTERFACE_H_
