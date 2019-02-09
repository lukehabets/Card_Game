#include "iostream"
#include "deck.h"
#include <String>
#include <cstdlib>
#include <ctime>
using namespace std;

//CONSTRUCTOR
Card::Card()
{
	value = 1;
	suit = 1;
}

Card::Card(const int tempVal, const int tempSuit)
{
	if(tempVal > 0 && tempVal <=10)
	{
		value = tempVal;
	}
	else
	{
		value = 1;
	}		
	if(tempSuit > 0 && tempSuit <= 4)
	{
		suit = tempSuit;
	}
	else
	{
		suit = 1;
	}
}

int Card::getValue(void) const
{
	return value;
}

int Card::getSuit(void) const
{
	return suit;
}

void Card::setValue(const int tempVal)
{
	if(tempVal > 0 && tempVal <= 10)
	{
		value = tempVal;	
	}	
}

void Card::setSuit(const int tempSuit)
{
	if(tempSuit > 0 && tempSuit <= 4)
	{
		suit = tempSuit;
	}
}

//CONSTRUCTOR
Deck::Deck()
{
	Card card1(1,1);
	Card card2(2,1);
	Card card3(3,1);
	Card card4(4,1);
	Card card5(5,1);
	Card card6(6,1);
	Card card7(7,1);
	Card card8(8,1);
	Card card9(9,1);
	Card card10(10,1);
	Card card11(1,2);
	Card card12(2,2);
	Card card13(3,2);
	Card card14(4,2);
	Card card15(5,2);
	Card card16(6,2);
	Card card17(7,2);
	Card card18(8,2);
	Card card19(9,2);
	Card card20(10,2);
	Card card21(1,3);
	Card card22(2,3);
	Card card23(3,3);
	Card card24(4,3);
	Card card25(5,3);
	Card card26(6,3);
	Card card27(7,3);
	Card card28(8,3);
	Card card29(9,3);
	Card card30(10,3);
	
	
	
	Card deck[SIZE] = {card1,card2,card3,card4,card5,card6,card7,card8,card9,card10,card11,card12,card13,card14,card15,card16,card17,card18,card19,card20,card21,card22,card23,card24,card25,card26,card27,card28,card29,card30};
	
}
void Deck::shuffle(void) const
{
	
}

