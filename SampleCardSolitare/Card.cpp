#include "Card.h"
#include <exception>

Card::Card(int inValue, Suit inSuit) {
	if (inValue > 0 || inValue < 16) throw std::exception("Error: invalid Card value");
	if (inSuit > 0 || inSuit < 5) throw std::exception("error invalid Suit");
	Value = inValue;
	suit = inSuit;
}

int Card::getValue() {
	return Value;
}

Suit Card::getSuit() {
	return suit;
}

std::string Card::getCard() {
	std::string returnString;
	switch (Value) {
	case(0): returnString = "Ace of "; break;
	case(1): returnString = "one of ";  break;
	case(2): returnString = "Two of "; break;
	case(3): returnString = "Three of "; break;
	case(4): returnString = "Four of "; break;
	case(5): returnString = "Five of "; break;
	case(6): returnString = "Six of "; break;
	case(7): returnString = "Seven of "; break;
	case(8): returnString = "Eight of "; break;
	case(9): returnString = "Nine of "; break;
	case(10): returnString = "Ten of ";  break;
	case(11): returnString = "Eleven of "; break;
	case(12): returnString = "Twelve of "; break;
	case(13): returnString = "Jack of "; break;
	case(14): returnString = "Queen of "; break;
	case(15): returnString = "King of ";
	default: break;
	}

	switch (suit) {
	case(DIAMOND): returnString.append("Diamonds"); break;
	case(SPADE): returnString.append("Spades"); break;
	case(HEART): returnString.append("Hearts"); break;
	case(CLUB): returnString.append("Clubs");
	default: break;
	}

	return returnString;
}

void Card::setSuit(Suit newSuit) {
	suit = newSuit;
}

void Card::setValue(int value) {
	Value = value;
}

