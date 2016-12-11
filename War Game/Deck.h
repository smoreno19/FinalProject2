#ifndef DECK_H
#define DECK_H
#include <iostream>
#include <algorithm>
#include <string>
#include <cstdlib>
#include <ctime>
#include "Card.h"
using namespace std;

class Deck {
public:
	Deck();
	void shuffle();
	bool isEmpty();
	Card draw();
protected:
	Card	cards[52];
	int 	topCard;
};
#endif // !DECK_H