#include <iostream>
#include <algorithm>
#include <string>
#include <cstdlib>
#include <ctime>
#include "Deck.h"
using namespace std;

void Deck::shuffle()
{
	random_shuffle(cards, cards + 52);
}
bool Deck::isEmpty(){
	return topCard <= 0;
}
Deck::Deck()
{
	topCard = 0;
	for (int i = 2; i <= 14; i++) {
		Card c1(diamond, i), c2(spade, i), c3(heart, i), c4(club, i);
		cards[topCard++] = c1;
		cards[topCard++] = c2;
		cards[topCard++] = c3;
		cards[topCard++] = c4;
	}
}

Card Deck::draw()
{
	if (!isEmpty())
		return cards[--topCard];
	else {
		Card spadeAce(spade, 1);
		return spadeAce;
	}
}