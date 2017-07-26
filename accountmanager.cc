/* File: accountmanager.cc
   Author: Ovais Ahmed Yousufi
   Description: Implements functions from accountmanager.h
*/

#include "accountmanager.h"

#include "interface.h"

#include "current.h"

#include <iostream>

#include "loan.h"

AccountManager::AccountManager() {

}

AccountManager::~AccountManager() {
	Clear();	
}

bool AccountManager::FindAccount(int AccountID) {    //find whether account exists in a vector or not
	std::vector<Account*>::iterator itr;
    for (itr=accounts.begin(); itr!=accounts.end(); ++itr) {
 	    if ((*itr)->GetId() == AccountID)  {
  			return true;
    	}
    }
    return false;
}

Account* AccountManager::GetAccount(int AccountID) {    
	//if(FindAccount(AccountID)==true) {
	std::vector<Account*>::iterator itr;
    for (itr=accounts.begin(); itr!=accounts.end(); ++itr) {
		if ((*itr)->GetId() == AccountID)  { 		
			Account*a=NULL;
			a=(*itr);		
			return a;
		}
	
	}
	
		std::cout << "Sorry, your account does not exist in our data";
		return NULL;
	
}

void AccountManager::AddAccount(Account*b) {    //Add account in a vector
	accounts.push_back(b);
}

void AccountManager::RemoveAccount(int AccountID) {
	if(FindAccount(AccountID)==true) {
		std::vector<Account*>::iterator itr;
		for (itr=accounts.begin(); itr!=accounts.end(); ++itr) {
			Account*a = NULL;
			a = (*itr);
			if(a->GetId() == AccountID) {
				Account* temp = *itr;
				accounts.erase(itr);
				//delete temp;	
			}
		}
	}

	else{
		std::cout << "Account not found";
	}
}

void AccountManager::Clear() {
	accounts.clear();
}



