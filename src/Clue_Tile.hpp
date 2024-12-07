#pragma once

#include "Tile.hpp"
#include "Header.hpp"
#include "Math.hpp"

class Clue_Tile : public Tile {

public:
	Clue_Tile(Tile* field[Minefield_Width][Minefield_Height], float X, float Y) : Tile(X,Y){
		this->calculate_clue(field, X, Y);
	}

	virtual int flag(); // this is not a mine, lose the game
	virtual int reveal(); // this is a clue
	virtual int is_mine();

private:
	int Mine_Number;
	int calculate_clue(Tile* field[Minefield_Width][Minefield_Height], int X, int Y);
};