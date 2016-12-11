#include <iostream>
#include <algorithm>
#include <string>
#include <cstdlib>
#include <ctime>
#include "Deck.h"
#include "Player.h"
#include "Card.h" 
#include "Computer.h"
#include "Game.h"
#include "Human.h"
#include "Game.h"
using namespace std;
int main() {
	// calls the class game and sets it equal to a new game
	Game* WarGame = new Game;
	//points to the menu function
	WarGame->menu();
	//deletes the end of the game 
	delete WarGame;
 }

