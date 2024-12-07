#pragma once

#include "Tile.hpp"
#include "Header.hpp"
#include "Math.hpp"

class Clue_Tile : public Tile {

public:
	Clue_Tile(Tile* field[Minefield_Width][Minefield_Height], float X, float Y) : Tile(X,Y){
		this->calculate_clue(field, X, Y);
	}

	int flag() override; // this is not a mine, lose the game
	int reveal() override; // this is a clue
	int is_mine() override;

private:
	int Mine_Number;
	int calculate_clue(Tile* field[Minefield_Width][Minefield_Height], int X, int Y);
};