#include <iostream>
#include <algorithm>
#include <string>
#include <cstdlib>
#include <ctime>
#include "Card.h"
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

ostream & operator << (ostream & out, Card & aCard)
{ //the ace is the highest rank of everything,
// each non numbered cards are ranked with numbers that are higher than 10
	switch (aCard.rank) {
	case 14:  out << "Ace";   break;
	case 11: out << "Jack";  break;
	case 12: out << "Queen"; break;
	case 13: out << "King";  break;
	default:
		//outputs the rank of the cards
		out << aCard.rank; break;
	}
	// how the suits will be outputed in the program
	switch (aCard.suit) {
	case diamond: out << " of Diamonds"; break;
	case spade:   out << " of Spades";   break;
	case heart:   out << " of Hearts";   break;
	case club:    out << " of Clubs";    break;
	}
	// return the out of each
	return out;
}