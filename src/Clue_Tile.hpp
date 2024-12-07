#pragma once

#include "Tile.hpp"
#include "Header.hpp"
#include "Math.hpp"

class Clue_Tile : public Tile {

public:
	Clue_Tile(float X, float Y) : Tile(X,Y){
		this->is_mine = 0;
		this->Mine_Number = 0;
	}

	virtual int flag(); // this is not a mine, lose the game
	virtual int reveal(); // this is a clue
	// virtual int is_mine();
	
	friend int TEST_calculate_clue();

	int calculate_clue(Tile* field[Minefield_Width][Minefield_Height], int X, int Y);
private:
	int Mine_Number;
};