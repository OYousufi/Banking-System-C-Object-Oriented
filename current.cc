/* File: current.cc
   Author: Saad Nazir
   Description: Implements functions from current.h
*/

#include "current.h"

#include <iostream>

Current::Current() {
	//type = "Current";
}

void Current::Withdraw() {
	std::cout << "How mucch do you want to withdraw?";
	float Withdraww = 0;
	std::cin >> Withdraww;
	if(Balance < 5000) {	
		std::cout << "\n Sorry minimum account balance must be greater than 5000 for withdrawal\n";
	}

	else if(Withdraww > Balance) {
		std::cout << "\n Withdrawmust be less than total balance\n";
	}

	else {
		Balance = Balance - Withdraww;
		std::cout << "\n New balance: " << Balance;
	}
}


void Current::Deposit() {
	std::cout << "\nDeposit amount: ";
	float Depositt = 0;
	std::cin >> Depositt;
	Balance = Balance + Depositt;
}