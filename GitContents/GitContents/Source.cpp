//

#include <iostream>
#include "PairOfDice.h"

int main() {
	PairOfDice dice;
	for (int i = 0; i < 100; i++)
	{
		std::cout << dice.roll() << " ";
		if (dice.goToJail()) {
			std::cout << "\n U GO JAIL NOW\n";
		}
	}
<<<<<<< HEAD

=======
	std::cout << "hi hi hi";
	std::cout << "This dont work";
>>>>>>> feature/dice
	getchar();
}