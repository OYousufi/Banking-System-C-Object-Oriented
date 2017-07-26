/* File: creditcard.cc
   Author: Saad Nazir & Ovais Ahmed Yousufi
   Description: Implements functions from creditcard.h
*/

#include "creditcard.h"

#include <iostream>

CreditCard::CreditCard() {

}

float CreditCard::GetLimit(){
	return limit_;
}

void CreditCard::Transaction(float a) {
	if ((currentSpend_ + a) < limit_) {
		std::cout << "You have reached your limit.\n"; 
	}
	else {
		currentSpend_ = currentSpend_ + limit_;
		std::cout << "The total amount you have now spent is:\n" << currentSpend_ << "\n";
	}
}

void CreditCard::CancelCard() {
	limit_ = 0;
}