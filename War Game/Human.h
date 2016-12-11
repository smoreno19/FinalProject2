#ifndef HUMAN_H
#define HUMAN_H
#include <iostream>
#include <algorithm>
#include <string>
#include "Player.h"
#include "Card.h" 
#include "Deck.h"
using namespace std;
//polymorhised with the class player,
//carries the same attributes as the class player
class humanPlayer : public Player {
public:
	//same as computer 
	humanPlayer(Deck& aDeck) : Player(aDeck) {}
	Card draw();
};
#endif // !HUMAN_H#pragma once
