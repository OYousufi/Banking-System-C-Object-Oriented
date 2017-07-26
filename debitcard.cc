/* File: debitcard.cc
   Author: Saad Nazir
   Description: Implements functions from debitcard.h
*/

#include "debitcard.h"

#include <iostream>

#include "account.h"
#include "current.h"



DebitCard::DebitCard() {

}

void DebitCard::Transaction(float b) {
	Account* ptr = NULL;
	
	float a = ptr->GetBalance();	
	a = a-b;
}
