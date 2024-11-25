#include "Minefield.hpp"

void Minefield::generate_field() {
	int x, y;
	

	for (int mine_count = 0; mine_count < MineNumber; mine_count++) {
		x = rand() % 15;
		y = rand() % 15;

		 this->field[x][y] = dynamic_cast <Tile*> (new Mine_Tile());
	}

	for (int x_index = 0; x_index < MinefieldSize; x_index++) {
		for (int y_index = 0; y_index < MinefieldSize; y_index++) {
			// loop over every tile
			// if tile is not a mine, create a new clue tile
		}
	}
}

Minefield::Minefield() {
	this->generate_field();
	this->mine_count = 0;
}

void Minefield::reveal(int x, int y) {
	Tile* current_Tile = this->field[x][y];

	// check if tile is already revealed, if so do nothing (early return)
	if (current_Tile->state == Revealed) {
		return;
	}

	// check if tile is a mine
	if (current_Tile->type == Mine) {
		current_Tile->reveal();
		this->lose_game();
		return;
	}

	// if tile is a clue
	if (current_Tile->type == Clue) {
		current_Tile->reveal();
	}


}

void Minefield::flag(int x, int y) {
	Tile* current_Tile = this->field[x][y];

}
