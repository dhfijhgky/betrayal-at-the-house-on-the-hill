#include "Tile.h"
#include <iostream>

int main() {
	Tile lobby(0);
	std::cout << "Tile created with id of 0 (lobby)." << std::endl;
	std::cout << "Current sides: ";
	lobby.print_sides();
	lobby.rotate();
	std::cout << "Rotated once." << std::endl;
	std::cout << "Current sides: ";
	lobby.print_sides();
	lobby.rotate(0);
	std::cout << "Rotated twice." << std::endl;
	std::cout << "Current sides: ";
	lobby.print_sides();
	lobby.rotate(-1);
	std::cout << "Rotated back once." << std::endl;
	std::cout << "Current sides: ";
	lobby.print_sides();
	lobby.rotate();
	std::cout << "Rotated once." << std::endl;
	std::cout << "Current sides: ";
	lobby.print_sides();

	return 0;
}