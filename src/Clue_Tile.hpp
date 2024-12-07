#pragma once

#include "Tile.hpp"
#include "Header.hpp"
#include "Math.hpp"

class Clue_Tile : public Tile {

public:
	Clue_Tile(Tile* field[Minefield_Width][Minefield_Height], float X, float Y, sf::Texture new_Texture) : Tile(X, Y, new_Texture) {
		this->calculate_clue(field, X, Y);
	}

	int flag(); // this is not a mine, lose the game
	int reveal(int x, int y, int mines, sf::Texture new_Texture); // this is a clue
	int is_mine();

private:
	int Mine_Number;
	int calculate_clue(Tile* field[Minefield_Width][Minefield_Height], int X, int Y);
};