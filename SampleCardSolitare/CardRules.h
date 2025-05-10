#pragma once

/* CardRules
* a set of rules for each card game in this application
*/

class CardRules {
public:
	CardRules();
	int getHandSize();
	int cardCompare(int cardValue1, int cardValue2);
private:
	int pointVictory; // 0- inf for determining victory condition
	int handSize; //0 - inf starting hand size
};
