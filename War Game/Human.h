#ifndef HUMAN_H
#define HUMAN_H
#include <iostream>
#include <algorithm>
#include <string>
#include <cstdlib>
#include <ctime>
#include "Player.h"
#include "Card.h" 
#include "Deck.h"
using namespace std;

class humanPlayer : public Player {
public:
	humanPlayer(Deck& aDeck) : Player(aDeck) {}
	Card draw();
};
#endif // !HUMAN_H#pragma once
