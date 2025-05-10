#include "CardRules.h"

CardRules::CardRules() {
	int pointVictory = 0;
	int handSize = 5;
}

int CardRules::getHandSize() {
	return handSize;
}

int CardRules::cardCompare(int cardValue1, int cardValue2) {
	if (cardValue1 > cardValue2) return 1;
	else if (cardValue1 < cardValue2) return 2;
	return 0;
}