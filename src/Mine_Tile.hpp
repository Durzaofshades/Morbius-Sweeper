#pragma once

#include "Tile.hpp"

class Mine_Tile : public Tile {
public:
	Mine_Tile(float x, float y) : Tile(x, y) {}

	int reveal(); // this is a mine, lose the game
	int flag();
	int is_mine();
};