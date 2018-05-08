#pragma once
#include <random>
class PairOfDice
{
public:
	PairOfDice();
	int roll();
	bool goToJail();
private:
	bool jail;
	int doubleStreak = 0;
	std::random_device randd;
	std::default_random_engine rande;
};

