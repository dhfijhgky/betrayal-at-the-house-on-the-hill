#include <iostream>
#include "PlayerCharacter.h"
#include <time.h>
#include <cstdlib>

int main() {
	srand(time(NULL));
	int temp = rand() % 12;
	
	PlayerCharacter* pc = new PlayerCharacter(temp);
	std::cout << "Created new character: " << pc->getFullName() << std::endl;
	std::cout << "Starting stats:   val//pip" << std::endl;
	std::cout << "\t    Might: " << pc->getValue(might) << " // " << pc->getPip(might) + 1 << std::endl;
	std::cout << "\t    Speed: " << pc->getValue(speed) << " // " << pc->getPip(speed) + 1 << std::endl;
	std::cout << "\tKnowledge: " << pc->getValue(knowledge) << " // " << pc->getPip(knowledge) + 1 << std::endl;
	std::cout << "\t   Sanity: " << pc->getValue(sanity) << " // " << pc->getPip(sanity) + 1 << std::endl;
	
	delete pc;
	return 0;
}
