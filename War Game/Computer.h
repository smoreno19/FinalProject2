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


class Computer : public Player {
public:
	Computer::Computer(Deck& aDeck) : Player(aDeck) {}
	Card draw();
};
#endif // !COMPUTER_H#pragma once
