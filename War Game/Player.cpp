#include <iostream>
#include <algorithm>
#include <string>
#include <cstdlib>
#include <ctime>
#include "Deck.h"
#include "Player.h"
using namespace std;

Player::Player(Deck & aDeck)
{
	myScore = 0;
	for (int i = 0; i < 3; i++)
		myCards[i] = aDeck.draw();
	removedCard = 0;
}

Card Player::draw()
{
	//removedCard = randomizer(1);
	return myCards[removedCard];
}

void Player::addPoints(int howMany)
{
	myScore += howMany;
}

int	Player::score()
{
	return myScore;
}

void Player::replaceCard(Deck & aDeck)
{
	myCards[removedCard] = aDeck.draw();
}