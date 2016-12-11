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
	Game* WarGame = new Game;
	WarGame->menu();

	delete WarGame;
 }

