#ifndef DECK_H
#define DECK_H
#include <iostream>
#include <algorithm>
#include <string>
#include <cstdlib>
#include <ctime>
#include "Card.h"
using namespace std;
// class deck
class Deck {
public:
	//constructor and main funtions for deck
	Deck();
	void shuffle();
	bool isEmpty();
	Card draw();
protected: //accessed by this class
	Card	cards[52];
	int 	topCard;
};
#endif // !DECK_H