#include <iostream>
#include <algorithm>
#include <string>
#include <cstdlib>
#include <ctime>
#include "Deck.h"
#include "Player.h"
using namespace std;

Player::Player(Deck & aDeck)
{//for loop draws a card from the players hand 
	myScore = 0;
	for (int i = 0; i < 3; i++)
		myCards[i] = aDeck.draw();
	removedCard = 0;
}

Card Player::draw()
{//returns the removed card
	return myCards[removedCard];
}

void Player::addPoints(int howMany)
{//adds the points that the player got 
	myScore += howMany;
}

int	Player::score()
{//returns the total score
	return myScore;
}

void Player::replaceCard(Deck & aDeck)
{// draws the card from the deck and replaces the before cards
	myCards[removedCard] = aDeck.draw();
}