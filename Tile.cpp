#include "Tile.h"
#include <iostream>

Tile::Tile() {
	this->position[column] = 0;
	this->position[row] = 0;
	this->position[floor] = -2;
}

Tile::Tile(int id) {
	this->identifier = id;
	if (id == 0) {
		this->sides[top] = door;
		this->sides[right] = door;
		this->sides[bottom] = wall;
		this->sides[left] = door;
		
		this->position[column] = 0;
		this->position[row] = 0;
		this->position[floor] = 0;
	}
}

Tile::Tile(int x, int y, int z) {
	this->position[column] = x;
	this->position[row] = y;
	this->position[floor] = z;
	
	this->identifier = 0;
}

void Tile::rotate() {
	this->rotate(1);
}

void Tile::rotate(int r) {
	int temp;
	if (r < 0) {
		// Counter clock wise rotation.
		temp = this->sides[0];
		for (int i = 0; i < NUM_OF_SIDES - 1; i++) {
			this->sides[i] = this->sides[i + 1];
		}
		this->sides[NUM_OF_SIDES - 1] = temp;
	} else {
		// Clock wise rotation.
		temp = this->sides[NUM_OF_SIDES - 1];
		for (int i = NUM_OF_SIDES - 1; i > 0; i--) {
			this->sides[i] = this->sides[i - 1];
		}
		this->sides[0] = temp;
	}
	
	if (r == 0) {
		// 180 flip.
		this->rotate(1);
	}
}

void Tile::place(int x, int y, int z) {
	this->position[column] = x;
	this->position[row] = y;
	this->position[floor] = z;
}

void Tile::print_sides() {
	std::cout << "Top: " << this->sides[top] << " Right: " << this->sides[right] << " Bottom: " << this->sides[bottom] << " Left: " << this->sides[left] << std::endl;
}
