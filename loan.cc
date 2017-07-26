/* File: loan.cc
   Author: Saad Nazir
   Description: Implements functions from loan.h
*/

#include "loan.h"

#include <iostream>

//#include "Account.h"

Loan::Loan() {              //sets initial loan amount to zero
	loanAmount_ = 0;
}

/*void Loan::ApplyForLoan(float loan, Account* ptr){
	//Account* ptr = NULL;
	//float balance = 0;
	float balance = ptr->GetBalance();
	std::cout << "Allowed \n";
	std::cout << "Hello \n";
	//float x = loann;
	loanAmount_ = loan;
	std::cout << "Confirmed \n";
	//std::cout<<x;
	//std::cout << "loan ka pointer balance";
	/*if (loann < 2.5*balance) {
		std::cout << "allowed\n";
		loanAmount_ = loann;
		std::cout << "Hi";
	}*/

	/*else {
		std::cout << "Denied\n";
	}
}*/

void Loan::CloseLoanAccount() {   //
	loanAmount_ = 0;
}

void Loan::PayInstallment(float time) {
	

}

float Loan::GetLoanAmount() {   //getter for loan amount
	return loanAmount_;
} 


void Loan::SetLoan(float a) {  //setter for loan amount
	loanAmount_ = a;
}