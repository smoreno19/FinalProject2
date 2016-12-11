#include <iostream>
#include <algorithm>
#include <string>
#include <cstdlib>
#include <ctime>
#include "Card.h"
using namespace std; 
Card::Card()
{
	rank = 2;
	suit = spade;
}

Card::Card(suits s, int r)
{
	rank = r;
	suit = s;
}

ostream & operator << (ostream & out, Card & aCard)
{
	switch (aCard.rank) {
	case 14:  out << "Ace";   break;
	case 11: out << "Jack";  break;
	case 12: out << "Queen"; break;
	case 13: out << "King";  break;
	default:
		out << aCard.rank; break;
	}

	switch (aCard.suit) {
	case diamond: out << " of Diamonds"; break;
	case spade:   out << " of Spades";   break;
	case heart:   out << " of Hearts";   break;
	case club:    out << " of Clubs";    break;
	}
	return out;
}