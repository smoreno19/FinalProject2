#include <iostream>
#include <algorithm>
#include <string>
#include <cstdlib>
#include <ctime>
#include "Deck.h"
#include "Player.h"
#include "Card.h" 
#include "Computer.h"
using namespace std;

Card Computer::draw() {
	removedCard = rand() % 3;

	return myCards[removedCard];
}