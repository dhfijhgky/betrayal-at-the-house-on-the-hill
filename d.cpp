#include <iostream>
#include "Dice.h"
#include <time.h>
#include <cstdlib>

int main() {
	srand(time(NULL));
	
	Dice dice;
	std::cout << "Dice created." << std::endl;
	int temp = rand() % 5 + 3;
	dice.roll(temp);
	std::cout << temp << " dice rolled. Outcomes:" << std::endl;
	for (int i = 0; i < temp; i++) std::cout << dice.getValue(i) << " ";
	std::cout << "= " << dice.getSum(temp) << std::endl;
	std::cout << "Rerolling dice 1-3:" << std::endl;
	dice.reroll(0);
	dice.reroll(1);
	dice.reroll(2);
	for (int i = 0; i < temp; i++) std::cout << dice.getValue(i) << " ";
	std::cout << "= " << dice.getSum(temp) << std::endl;
	
	return 0;
}
