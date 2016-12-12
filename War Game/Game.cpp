#include <iostream>
#include <algorithm>
#include <string>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include "Deck.h"
#include "Player.h"
#include "Card.h" 
#include "Computer.h"
#include "Game.h"
#include "Human.h"
using namespace std;
//in game cpp so that the card1 and card2 can know what they are pulling from. 
ostream& operator << (ostream& out, Card& aCard)
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
void Game::menu()
{
	cout << "Welcome to the card game War. Would you like to play? (Y, N) ";
	char choice;
	cin >> choice;
	//If yes, then the came continues, if no, the program ends
	if (choice == 'Y') {
		cout << "Would you like to know the rules before playing the game or jump right ahead? (rules, jump) ";
		string ans;
		cin >> ans;
		//gives user the option to see rules or just start playing the game
		if (ans == "rules") {
			//we can have a text file that will input the rules or just write them down hereif (ans == "rules")
				ifstream rules("rules.txt");
				if (rules.fail())
				{
					cout << "File does not exist" << endl;
					cout << "Exit program" << endl;
				}

				string line; // Reads the incoming line
				while (!rules.eof())
				{
					getline(rules, line, '#');
					cout << line << endl;
				}
				rules.close();
			}
		//jumps right ahead with the game without knowing the rules of the game
				else if (ans == "jump") {

					Deck theDeck;
					//shuffle the deck
					theDeck.shuffle();

					Player* pp1 = 0;
					Player* pp2=0;
					//same as while not pp2
					while (!pp1)
					{
						cout << "Is player 1 a human or a computer? ";
						string answer;
						cin >> answer;
						if (answer == "human")
							pp1 = new humanPlayer(theDeck);
						else if (answer == "computer")
							pp1 = new Computer(theDeck);
					}
					while (!pp2)
					{//just to know if the virtual is going to be used or not. 
					 //allows the user to actually play the game
						cout << "Is player 2 a human or a computer? ";
						string answer;
						cin >> answer;
						if (answer == "human")
							pp2 = new humanPlayer(theDeck);
						else if (answer == "computer")
							pp2 = new Computer(theDeck);
					}
					Player* player1 = pp1;
					Player* player2 = pp2;
					//while the deck is not empty, the game will continue on 
					// so players draw from their deck and play the game
					while (!theDeck.isEmpty()) {
						Card card1 = player1->draw();
						cout << "Player 1 plays " << card1 << endl;
						Card card2 = player2->draw();
						cout << "Player 2 plays " << card2 << endl;
						//different types the players can win during the game
						if (card1.rank == card2.rank) { // tie
							player1->addPoints(1);
							player2->addPoints(1);
							cout << "Players tie\n";
						}// tie is equal to 1 point, if player wins a round, they get two
						else if (card1.rank > card2.rank) {
							player1->addPoints(2);
							cout << "Player 1 wins round\n";
						}
						else {
							player2->addPoints(2);
							cout << "Player 2 wins round\n";
						}//addpoints keeps track of them and then outputs the total at the very end
						 //put down a new card that has not been used 
						player1->replaceCard(theDeck);
						player2->replaceCard(theDeck);
					}
					//outputs their score
					cout << "Player 1 score " << player1->score() << endl;
					cout << "Player 2 score " << player2->score() << endl;
					//we can have a text file save their scores or just keep it like this
					//delete the player information
					delete pp1;
					delete pp2;
				}
		}
	//if answer is no then the program will exit
	else if (choice == 'N') {
		cout << "I see, well see you next time. " << endl;

	}
}