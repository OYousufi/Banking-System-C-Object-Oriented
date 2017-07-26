/* File: debitcard.h
   Author: Saad Nazir
   Description: Declares a debitcard class that takes care
   				of transactions related to debitcard.
*/

#ifndef DEBITCARD_H_
#define DEBITCARD_H_

#include "card.h"

class DebitCard: public Card {
public:
	DebitCard();
	void Transaction(float);
};


#endif // DEBITCARD_H_
