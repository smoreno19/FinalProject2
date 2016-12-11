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


<<<<<<< HEAD
=======
	int rank;           // hold rank of card
	suits suit;           // hold suit of card
>>>>>>> 651b005e540da312c46a2853d9491acf16ba1239
};
#endif // !CARD_H