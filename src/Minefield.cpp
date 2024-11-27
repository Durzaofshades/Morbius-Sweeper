#include "Minefield.hpp"

void Minefield::generate_field() {
	int x, y;
	

	for (int mine_count = 0; mine_count < MineNumber; mine_count++) {
		x = rand() % 15;
		y = rand() % 15;

		 this->field[x][y] = (Tile*) (new Mine_Tile());
	}

	for (int x_index = 0; x_index < Minefield_X; x_index++) {
		for (int y_index = 0; y_index < Minefield_Y; y_index++) {
			// loop over every tile
			// if tile is not a mine, create a new clue tile
			this->field[x][y] = (Tile*) (new Clue_Tile(this->field, x, y));
		}
	}
}

Minefield::Minefield() {
	this->generate_field();
	this->mine_count = 0; // every time a mine is flagged successfuly, decrement
}

void Minefield::reveal(int x, int y) {
	Tile* current_Tile = this->field[x][y];

	// check if tile is already revealed, if so do nothing (early return)
	if (current_Tile->state == Revealed) {
		return;
	}

	if (current_Tile->reveal() == -1) {
		// -1 means end game
		this->end_game();
	}

	/*
	if (current_Tile->flag() == -1) {
		this->end_game();
	}
	*/

}

void Minefield::flag(int x, int y) {
	Tile* current_Tile = this->field[x][y];
	current_Tile->flag();
}
