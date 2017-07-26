/* File: loan.h
   Author: Saad Nazir
   Description: Declares a loan class that takes care of functions regarding
   				paying loan installment, et cetera.
*/

#ifndef LOAN_H_
#define LOAN_H_

//#include "Account.h"
//#include "Account.h"

class Loan {
private:
	//int ID_;
	float loanAmount_;
public:
	Loan();
	//void ApplyForLoan(float, Account*);
	void SetLoan(float);
	void PayInstallment(float);
	void CloseLoanAccount();
	float GetLoanAmount();
};

#endif // LOAN_H_