#ifndef TILE_H
#define TILE_H

#include <functional>

class Tile {
	public:
		Tile();
		
		// Constructor that sets identifier.
		Tile(int);
		
		// Constructor that sets position[].
		Tile(int, int, int);
		//~Tile();
	
		// rotate() rotates the elements of sides[] once clockwise.
		void rotate();
		
		// rotate(n) rotates the elements of sides (once CCW: anything < 0, once CW: anything > 0, 180 flip: exactly 0);
		void rotate(int);
		
		// place(x, y, z) sets the elements in position[] to x, y, and z.
		void place(int, int, int);
		
		// Temp function for diagnostic purposes.
		void print_sides();
		
	private:
		enum Level {basement = -1, ground, upper, roof};
		enum Side {wall, door, window};
		enum Position {column, row, floor};
		enum Walls {top, right, bottom, left};
		
		// Each tile will always have 4 sides.
		static const int NUM_OF_SIDES = 4;
		
		// position[] holds the position of the tile in <column,row,floor> format.
		int position[3];
		
		// sides[] holds the Side for each side of the tile (wall, door, or window).
		int sides[NUM_OF_SIDES];
		
		// identifier holds the unique tile number.
		int identifier;
		
		// Pointers for short-cut mechanics.
		Tile* secretStaircase;
		Tile* treeHouse;
		Tile* collapsedRoomFall;
		Tile* galleryToBallroom;
};

#endif
