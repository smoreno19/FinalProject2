#ifndef CARD_H
#define CARD_H

#include <iostream>
#include <algorithm>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
enum suits { diamond, club, heart, spade };

class Card {
public:
	// constructors
	Card();            // initialize a card with default values
	Card(suits, int);   // initialize a card with given values


	int  	rank;           // hold rank of card
	suits	suit;           // hold suit of card
};
#endif // !CARD_H