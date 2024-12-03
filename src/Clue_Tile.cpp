#include "Clue_Tile.hpp"

int Clue_Tile::flag() { return -1; }

int Clue_Tile::reveal() { 
	// TODO GRAPHICS
	return 0; 
}

int Clue_Tile::is_mine() { return 0; }

int Clue_Tile::calculate_clue(Tile* field[Minefield_Width][Minefield_Height], int X, int Y) {
	int xLeft = max(0, (X - 1)); // x loop starts at this number
	int yLeft = max(0, (Y - 1));

	int xRight = min(Minefield_Width - 1, X + 1); // x loop stops 1 more than X, or the border
	int yRight = min(Minefield_Height - 1, Y + 1);

	int mines = 0;

	for (int X_index = xLeft; X_index < xRight; X_index++) {
		for (int Y_index = yLeft; Y_index < yRight; Y_index++) {
			// Double Loop
			if (field[X_index][Y_index]->is_Mine()) {
				mines++;
			}
		}
	}
	
	this->Mine_Number = mines;

	return mines
}
