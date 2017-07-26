/* File: card.h
   Author: Saad Nazir
   Description: Declared an abstract class which is the base
   				for creditcard and debitcard classes.
*/

#ifndef CARD_H_
#define CARD_H_

#include <string>

class Card {
//protected:
	
	
	//int openDate_;
	//int expiryDate_;
	//int cardLimit_;
	
public:
	Card();

	virtual void Transaction()=0;    //declares a virtual function
	void CancelCard();
};

#endif // CARD_H_