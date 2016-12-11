#include <iostream>
#include <algorithm>
#include <string>
#include "Deck.h"
#include "Player.h"
#include "Card.h" 
#include "Computer.h"
using namespace std;
//Calls the computer function draw
Card Computer::draw() {
	removedCard = rand() % 3;
	//returns the removed card from their hand of cards
	return myCards[removedCard];
}