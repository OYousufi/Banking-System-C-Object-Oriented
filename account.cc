/* File: account.cc
   Author: Ovais Ahmed Yousufi & Saad Nazir(functions relating to loan)
   Description: Implements functions from account.h
*/

#include "account.h"
#include "card.h"
#include "creditcard.h"
#include "debitcard.h"
#include <cstdlib>
#include <ctime>

#include <iostream>

//#include "LoanAccess.h"
#include "loan.h"

Account::Account() {
	FName = " ";
	LName = " ";
	PhoneNum = " ";
	type = " ";
	DOB = " ";
	Balance = 0;
	AccountId = 0;
	CustomerId = 0;
	//LoanAmount = 0;
	//c = NULL:
	l = new Loan;
}

/*void Account::ApplyForCard() {
	std::cout<<"Which Card c/s?";
	char atype;
	std::cin>>atype;
	if (atype == 'c') {
		c=new CreditCard;
	}

	else {
		c=new DebitCard;
	}
}
*/
void Account::ApplyForLoan(float loan) {
	if (loan < 2.5*Balance)
	{
		
		l->SetLoan(loan);
		std::cout << "Loan aproved!"<<"\n";
	}
	else
	{
		std::cout << "Sorry, loan denied due to insufficient account balance\n";
	}
	//Account* ptr = NULL;
	//float balance = 0;
	//float balance = ptr->GetBalance();
	//std::cout << "Allowed \n";
	//std::cout << "Hello \n";
	//float x = loann;
	//LoanAmount = loan;
	//std::cout << "Confirmed \n";
	//std::cout<<x;
	//std::cout << "loan ka pointer balance";
	/*if (loann < 2.5*balance) {
		std::cout << "allowed\n";
		loanAmount_ = loann;
		std::cout << "Hi";
	}*/

	/*else {
		std::cout << "Denied\n";
	}*/
}

/*
void Account::SetLoanAmount() {
	LoanAccess LA;
	LA.AccessLoan();
}*/

std::string Account::GetType() {
	return type;
}

int Account::GetId() {
	return AccountId;
}

float Account::GetLoan() {
	//return LoanAmount;
}
void Account::ViewAccount() {
	std::cout << "\nName: " << FName << " " << LName;
	std::cout << "\nDate of Birth: " << DOB;
	std::cout << "\nAccount ID: " << AccountId;
	std::cout << "\nYour account balance is: " << Balance;
	std::cout << "\nCustomer ID: " << CustomerId;
	std::cout << "\nPhone Number: " << PhoneNum;
	std::cout << "\nAccount Type: " << type;
	std::cout << "\nYour loan is: " <<l->GetLoanAmount() ; 
}

std::string Account::SetType(std::string atype) {
	type = atype;
}
void Account::OpenAccount() {
	std::cout << "Enter your First name: \n"; 
	std::cin >> FName;
	std::cout << "Enter Last name: \n"; 
	std::cin >> LName;

	std::string TPhoneNum;
	std::cout << "Enter phone number: \n"; 
	std::cin >> TPhoneNum;
	
	if(TPhoneNum.length()==8) {
		PhoneNum=TPhoneNum;
	}

	else if (TPhoneNum.length()!=8) {
			std::cout << "phone number must be 8 digit \n";
			std::cout << "input phone number: "; 
			std::cin >> TPhoneNum;
			PhoneNum=TPhoneNum;
		
	}

	std::cout << "Enter Date of Birth (dd/mm/yy): \n";
	std::cin >> DOB;
	
	//char atype = '\0';

	/*std::cout << "Saving S / Current C \n";
	std::cin >> atype;/*
/*
	if(atype=='c' or 'C') {
		type = "Current";
	}
	else
	{
		type = "Savings";
	}
*/
	srand(time(0));
	AccountId = rand();
	std::cout << "Account Number: " << AccountId;
	
	std::cout << "\n Enter 4 digit Password: ";
	std::cin >> Password;

	std::cout << "Deposit initial balance, must be greater than 10,000: ";
	float TBalance=0;
	std::cin >> TBalance;

	if(TBalance>10000) {
		Balance = TBalance;
	}
	else if (TBalance<10000)  {
		 
		std::cout << "Deposit initial balance, must be >10000";	
		std::cin >> TBalance;
		
	}
}

int Account::EditInfo() {
	std::cout << "\n1.Name.";
	std::cout << "\n2.Date of Birth.";
	std::cout << "\n3.Phone Number.";
	std::cout << "\n4.Account Type.";
	std::cout << "\n0.Exit";
	std::cout << "\nPress number to proceed";
	int num = 0;

	if(num == 1) {
		std::cout << "\nEnter your First name: "; 
		std::cin >> FName;
		std::cout << "\nEnter Last name: "; 
		std::cin >> LName;
	}

	if(num == 2) {
		std::cout << "\nEnter Date of Birth: ";
		std::cin >> DOB;
	}

	if(num == 3) {
		std::string TPhoneNum;
		std::cout << "Enter phone number: \n"; 
		std::cin >> TPhoneNum;
		
		if(TPhoneNum.length()==8) {
			PhoneNum=TPhoneNum;
		}

		else if (TPhoneNum.length()!=8) {
			std::cout << "phone number must be 8 digit \n";
			std::cout << "input phone number: "; 
			std::cin >> TPhoneNum;
			PhoneNum=TPhoneNum;
		}
		
		
	}	
	

	/*if(num == 4) {
		char atype = '\0';

		std::cout<<"Saving S / Current C \n";
		std::cin>>atype;

		if(atype=='c' or 'C') {
			type = "Current";
		}
		else
		{
			type = "Savings";
		}
	}
	*/
	if(num == 0) {
		return 0;
	}

	if(num >=4 or num <= -1) {
		std::cout << "number must be 0-4";
		std::cin >> num;
		while(num >=4 or num <= -1){
			std::cout << "number must be 0-12";
			std::cin >> num;
		}
	}

	return 0;
}

float Account::GetBalance() {
	return Balance;
}


void Account::CloseAccount() {

}

