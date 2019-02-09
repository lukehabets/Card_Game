#include <String>
#include <ctime>
#include <cstdlib>
const int SIZE = 30;
using namespace std;

#ifndef DECK_H
#define DECK_H

class Card
{
	public:
	
		//CONSTRUCTOR
		Card();
		//PARAMETERIZED CONSTRUCTOR
		Card(const int tempVal,const int tempSuit);
	/*	//DESTRUCTOR
		~Card(); */
		
		//MODIFICAION MEMBER FUNCTIONS
		void setValue(const int);
		void setSuit (const int);
		
		//CONSTANT MEMBER FUNCTIONS
		int getValue (void) const;
		int getSuit (void) const;
		void display (void) const;
		
	private:
		int value;
		int suit;
};

class Deck
{
	public:
		//CONSTRUCTOR
		Deck();
		
	/*	//DESTRUCTOR
		~Deck(); */
		
		//MODIFICATION MEMBER FUNCTIONS
		void shuffle (void) const;
		void deal (void) const;
		//CONSTANT MEMBER FUNCTIONS
		void showCard (int) const;
		
	private:
		Card deck[SIZE] = {};
};
#endif
