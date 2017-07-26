/* File: savings.cc
   Author: Ovais Ahmed Yousufi
   Description: Implements functions from savings.h
*/


#include "savings.h"

#include <iostream>

Savings::Savings() {
	type = "Savings";
}

void Savings::Withdraw() {
	std::cout << "How much do you want to withdraw?";
	float Withdraw = 0;
	std::cin >> Withdraw;
	if (Balance < 10000) {	
		std::cout << "\n Sorry minimum account balance must be greater than 5000 for withdrawal\n";
	}

	else if(Withdraw >= Balance) {
		std::cout << "\n Withdraw must be less than total balance\n";
	}

	else {
		Balance = Balance - Withdraw;
		std::cout << "\n New balance: " << Balance;
	}
}

void Savings::Deposit() {
	std::cout << "\nDeposit amount";
	float Depositt = 0;
	std::cin >> Depositt;
	std::cout << "Deposit: ";
	std::cin >> Depositt;
	Balance = Balance + Depositt;

}

void Savings::Deposit(float Depositt) {
	Balance = Balance + Depositt;
}

void Savings::Interest(float rate) {
	float Interestt = Balance * rate / 100;
 	Deposit(Interestt);
}
