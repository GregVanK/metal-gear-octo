#include "PairOfDice.h"




PairOfDice::PairOfDice(): rande(PairOfDice::randd())
{
	
}

int PairOfDice::roll()
{
	std::uniform_int_distribution<int> di(1, 6);
	int roll1 = di(rande);
	int roll2 = di(rande);
	doubleStreak = (roll1 != roll2 || doubleStreak > 2) ?
		0:
		doubleStreak + 1;
	return roll1 + roll2;
}

bool PairOfDice::goToJail()
{
	return (doubleStreak == 3);
}