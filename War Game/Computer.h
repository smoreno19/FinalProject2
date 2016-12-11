#ifndef COMPUTER_H
#define COMPUTER_H
#include <iostream>
#include <algorithm>
#include <string>
#include <cstdlib>
#include <ctime>
#include "Deck.h"
#include "Player.h"
#include "Card.h" 
using namespace std;
//class for a computer player
class Computer : public Player {
	//polymorphised with the player class
public:
	//Computer default constructor, calls the player class because
	//it uses the same information as the player class
	Computer(Deck& aDeck) : Player(aDeck) {}
	//how the computer will draw from their hand
	Card draw();
};
#endif // !COMPUTER_H#pragma once
