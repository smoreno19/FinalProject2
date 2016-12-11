#ifndef CARD_H
#define CARD_H

#include <iostream>
#include <algorithm>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
enum suits { diamond, club, heart, spade };
//allows the names to be assigned to a value. 
class Card {
public:
	int  	rank;           // hold rank of card
	suits	suit;           // hold suit of card
	// constructors
	Card();            // initialize a card with default values
	Card(suits, int);   // initialize a card with given values


};
#endif // !CARD_H