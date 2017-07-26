/* File: accountmanager.h
   Author: Ovais Ahmed Yousufi
   Description: Declared a class that is used to manage the account class
*/

#ifndef ACCOUNTMANAGER_H_
#define ACCOUNTMANAGER_H_ 

#include <vector>

#include "account.h"

class AccountManager {

private:
	std::vector<Account*> accounts;

public:
	AccountManager();
	~AccountManager();
	bool FindAccount(int);
	void AddAccount(Account*);
	void RemoveAccount(int);
	void Clear();
	Account* GetAccount(int);
};


#endif // ACCOUNTMANAGER_H_