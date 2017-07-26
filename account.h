/* File: account.h
   Author: Ovais Ahmed Yousufi & Saad Nazir(functions relating to loan)
   Description: Declares a class account that handles all the functions related
   				to the account class.
*/

#ifndef ACCOUNT_H_
#define ACCOUNT_H_

#include <string>

#include "loan.h"

class Account {
protected:
	int AccountId;
	int CustomerId;
	float Balance;
	std::string FName;
	std::string LName;
	std::string PhoneNum;
	std::string type;
	std::string DOB;
	int Password;
	Loan* l;
	//Card* c;
	//float LoanAmount;
public:	
	Account();
	void ApplyForLoan(float);
	void ApplyForCard();
	void ViewAccount();
	int EditInfo();
	std::string GetType();
	int GetId();
	std::string SetType(std::string);
	void OpenAccount();
	void CloseAccount();
	virtual void Deposit()=0;
	virtual void Withdraw()=0;
	//void SetLoanAmount();
	float GetBalance();
	float GetLoan();
};

#endif // ACCOUNT_H_