#include <iostream>
#include <algorithm>
#include <string>
#include <cstdlib>
#include <ctime>
#include "Card.h"
#include "Game.h"
using namespace std; 
Card::Card()
{//default constructor  with a rank of 2 and suit of spade
	rank = 2;
	suit = spade;
}

Card::Card(suits s, int r)
{ // initialize a card with given values
	rank = r;
	suit = s;
}
