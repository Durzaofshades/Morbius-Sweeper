#pragma once

#include "Tile.hpp"

class Mine_Tile : public Tile {
public:
	Mine_Tile(float X, float Y) : Tile(X, Y) {
		this->is_mine = 1;
	}

	// virtual int is_mine();
	virtual int reveal(); // this is a mine, lose the game
	virtual int flag();

	friend int calculate_clue(Tile* field[Minefield_Width][Minefield_Height], int X, int Y);
};