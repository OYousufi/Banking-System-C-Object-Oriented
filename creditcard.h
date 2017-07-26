/* File: creditcard.h
   Author: Saad Nazir & Ovais Ahmed Yousufi
   Description: Declares a creditcard class that takes care
   				of transactions related to creditcard.
*/

#ifndef CREDITCARD_H_
#define CREDITCARD_H_

#include "card.h"

class CreditCard: public Card {
private:
	float limit_;
	float currentSpend_;
public:
	CreditCard();

	void Transaction(float);
	float GetLimit();
	void CancelCard();
};

#endif // CREDITCARD_H_
