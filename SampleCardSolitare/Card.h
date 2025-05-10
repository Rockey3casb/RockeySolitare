#pragma once
#include <string>

// a enum to define a suit of cards, ranging from Diamond, spade, heart, and club
typedef enum Suit  {DIAMOND, SPADE, HEART, CLUB};

class Card {
public:
	Card(int inValue = 0, Suit inSuit = DIAMOND);
	int getValue();
	std::string getCard();
	Suit getSuit();
	void setValue(int value);
	void setSuit(Suit newSuit);
private:
	int Value; // 0 = Ace, 1-12 = # of <suit>, 13 = Jack, 14 = Queen, 15 = King
	Suit suit; 
};