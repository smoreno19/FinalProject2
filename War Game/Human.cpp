#include <iostream>
#include <algorithm>
#include <string>
#include <cstdlib>
#include <ctime>
#include "Player.h"
#include "Card.h" 
#include "Deck.h"
#include "Human.h"
using namespace std; 
//calls the human player draw function
//which is calls the card class
// because that is where the cards are classified
Card humanPlayer::draw() {
	//the player puts down an a to put down a card
	cout << "Put down a card:" << endl;
	cout << "a. " << endl;
	char answer;
	removedCard = -1;
	while (removedCard == -1) {
		cin >> answer;
		if (answer == 'a') {
			//it will display the card drawn and remove it from his pile
			myCards[0];
			removedCard = 0;
		} 
		//player can press b to exit the game at any moment 
	}
	//return the card removed
	return myCards[removedCard];
}