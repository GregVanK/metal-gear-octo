//

#include <iostream>
#include "PairOfDice.h"

int main() {
	PairOfDice dice;
	for (int i = 0; i < 1000; i++)
	{
		std::cout << dice.roll() << " ";
		if (dice.goToJail()) {
			std::cout << "\n U GO JAIL NOW\n";
		}
	}

	getchar();
}