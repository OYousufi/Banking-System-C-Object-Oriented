/* File: interface.cc
   Author: Ovais Ahmed Yousufi & Saad Nazir
   Description: Implements functions from interface.h
*/

#include "interface.h"

#include <iostream>

Interface::Interface() {    //constructor for object of type interface

}

void Interface::MainMenu() {  //main function for interface
	int choice = 0;
	float b = 0;
	char atype = '\0';
	bool flag = true;
	Account* a = NULL; 
	AccountManager am;
	Loan* l=NULL;
	while(flag == true){ 
		std::cout << "\n\t\t1.View Your Account.\n";        //displays all choices available to user
		std::cout << "\t\t2.Edit Account Information\n";
		std::cout << "\t\t3.Withdrawal.\n";
		std::cout << "\t\t4.Deposit.\n";
		std::cout << "\t\t5.Close Account.\n";
		std::cout << "\t\t6.Open Account.\n";
		//std::cout<<"\t\t7.Request Card.\n";
		//std::cout<<"\t\t8.Cancel Card.\n";
		std::cout<<"\t\t9.Apply for loan.\n";
		//std::cout<<"\t\t10.Loan installment.\n";
		//std::cout<<"\t\t11.Close loan account.\n";
		//std::cout<<"\t\t12.Card Transaction.\n";
		std::cout << "\t\t0.Exit.\n\n";
		std::cout << "\t\t=>Enter your Choice :: "; 
		std::cin >> choice;

		if(choice >11 or choice <= -1) {                       //if an invalid choice is picked
			std::cout << "\t\tnumber must be 0-12 \n" << "Press any key for menu \n"; 

			//std::cin>>choice;
			/*if(choice >13 or choice <= -1){
				std::cout<<"\t\tnumber must be 0-12";
				//std::cin>>choice;
			}*/
		}

		else {
			//std::cout<<"\t\tWhat is your account id?";
			int ID = 0;
			//std::cin>>ID;

			if(choice == 1) {                                  //if a valid choice is picked
				std::cout << "\t\tWhat is your account id?";   //functions are called accordingly
				//int ID = 0;
				std::cin >> ID;
				Account* a = am.GetAccount(ID);
				if(am.FindAccount(ID)) { 
					a->ViewAccount();
				}
			}

			if(choice == 2) {
				std::cout << "\t\tWhat is your account id? \n";
				std::cin >> ID;
				Account* a = am.GetAccount(ID);
				if(am.FindAccount(ID)) {
					a->EditInfo();
				}
			}

			if(choice == 3) {
				std::cout << "\t\tWhat is your account id? \n";
				std::cin >> ID;	
				Account* a = am.GetAccount(ID);
				if(am.FindAccount(ID)) {
					a->Withdraw();
				}
			}

			if(choice == 4) {
				std::cout << "\t\tWhat is your account id? \n";
				std::cin >> ID;
				Account* a = am.GetAccount(ID);
				if(am.FindAccount(ID)) {
					a->Deposit();
				}
			}

			if(choice == 5) {
				am.RemoveAccount(ID);
			}

			if(choice == 6) {
				std::cout << "Saving S / Current C \n";
				std::string atype;
				std::cin >> atype;



				if (atype =="c" or "C") {
					a = new Current;
					a->SetType(atype);
				}
				else {
					a = new Savings;
					a->SetType(atype);
				}
				a->OpenAccount();
				am.AddAccount(a);		
			}

			if(choice == 9) {
			/*std::cout << "\t\tWhat is your account id?";
			//int ID = 0;
			std::cin >> ID;
			Account* a = am.GetAccount(ID);
			if(am.FindAccount(ID)) {
				std::cout << "\t\tloan?";
				float loan;
				std::cin >> loan; 
				l->ApplyForLoan(loan,a);
			}*/
			std::cout << "\t\tWhat is your account id?";
			//int ID = 0;
			std::cin >> ID;
			Account* a = am.GetAccount(ID);
			if(am.FindAccount(ID)) {
				std::cout << "\t\tloan?";
				float loan;
				std::cin >> loan; 
				a->ApplyForLoan(loan);
			}
			}

			if(choice == 10) {
				Account* a = am.GetAccount(ID);
				if(am.FindAccount(ID)) {
						
				}
			}



			if(choice == 0) {         //if choice is zero, program aborts
				flag = false;
			}

		}	
	}
	
}
