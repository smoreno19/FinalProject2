
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

Card humanPlayer::draw() {
	cout << "Put down a card:" << endl;
	cout << "a. " << endl;
	char answer;
	removedCard = -1;
	while (removedCard == -1) {
		cin >> answer;
		if (answer == 'a') {
			myCards[0];
			removedCard = 0;
		}
	}
	return myCards[removedCard];
}