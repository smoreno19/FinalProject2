#include <iostream>
#include <algorithm>
#include <string>
#include <cstdlib>
#include <ctime>
#include "Deck.h"
using namespace std;
//shuffle function
void Deck::shuffle()
{
	random_shuffle(cards, cards + 52);
}
//checks once the deck is empty
//returns it 
bool Deck::isEmpty(){
	return topCard <= 0;
}
Deck::Deck()
{// for loop so that each suit is assigned from Ace to King
	topCard = 0;
	//numbers starts at 2 and ends at 12 because Ace is higher than the rest
	for (int i = 2; i <= 14; i++) {
		//calls card class and outputs the suit and the number with it for each loop
		Card c1(diamond, i), c2(spade, i), c3(heart, i), c4(club, i);
		cards[topCard++] = c1;
		cards[topCard++] = c2;
		cards[topCard++] = c3;
		cards[topCard++] = c4;
	}
}

Card Deck::draw()
{//if the deck is not empty then return the cards of the top of the deck

	if (!isEmpty())
		return cards[--topCard];
	else {
		Card spadeAce(spade, 1);
		return spadeAce;
	}
}