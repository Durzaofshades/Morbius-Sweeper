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
			// generate each tile
		}
	}
}

Minefield::Minefield() {
	this->generate_field();
	this->mine_count = 0;
}
