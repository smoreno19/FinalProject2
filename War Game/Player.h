#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <algorithm>
#include <string>
#include <cstdlib>
#include <ctime>
#include "Card.h"
#include "Deck.h"
using namespace std;

class Player {
protected:
	Card	myCards[1];
	int 	myScore;
	int 	removedCard;
public:

	Player(Deck &);


	virtual Card draw() = 0;
	void	addPoints(int);
	int 	score();
	void	replaceCard(Deck &);


};
#endif // !PLAYER_H