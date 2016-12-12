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
//class player
class Player {
protected:
	//card class is being called 
	Card	myCards[3];
	int 	myScore;
	int 	removedCard;
public:
	//consstructor
	Player(Deck &);

	//calls an overridden method
	virtual Card draw() = 0;
	void	addPoints(int);
	int 	score();
	void	replaceCard(Deck &);


};
#endif // !PLAYER_H