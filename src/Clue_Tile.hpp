#pragma once

#include "Header.hpp"
#include "Tile.hpp"
#include "Math.hpp"

class Clue_Tile : public Tile {

public:
	Clue_Tile(Tile* field[Minefield_X][Minefield_Y], int X, int Y) : Tile() {
		this->calculate_clue(field, X, Y);
	}

	int flag(); // this is not a mine, lose the game
	int reveal(); // this is a clue
	int is_mine();

private:
	int Mine_Number;
	
	int calculate_clue(Tile* field[Minefield_X][Minefield_Y], int X, int Y);
};