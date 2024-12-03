#include "Minefield.hpp"

void Minefield::generate_field() {
	int x_index, y_index;
	float x_pos, y_pos;

	// instantiate each tile
	for (int x_index = 0; x_index < Minefield_Width; x_index++) {
		for (int y_index = 0; y_index < Minefield_Height; y_index++) {
			// loop over every tile
			// if tile is not a mine, create a new clue tile
			x_pos = X_OFFSET + (x_index * TILE_LENGTH);
			y_pos = Y_OFFSET + (y_index * TILE_LENGTH);

			this->field[x_index][y_index] = (Tile*)(new Tile(x_pos, y_pos));
		}
	}

	for (int mine_count = 0; mine_count < MineNumber; mine_count++) {
		x_index = rand() % 15;
		y_index = rand() % 15;
		
		x_pos = X_OFFSET + (x_index * TILE_LENGTH);
		y_pos = Y_OFFSET + (y_index * TILE_LENGTH);

		this->field[x_index][y_index] = (Tile*) new Mine_Tile(x_pos, y_pos);
	}

	for (int x_index = 0; x_index < Minefield_Width; x_index++) {
		for (int y_index = 0; y_index < Minefield_Height; y_index++) {
			// loop over every tile
			// if tile is not a mine, create a new clue tile
			x_pos = X_OFFSET + (x_index * TILE_LENGTH);
			y_pos = Y_OFFSET + (y_index * TILE_LENGTH);

			if (!this->field[x_index][y_index]->is_Mine()) {
				// if the current mine index is NOT a mine:
				this->field[x_index][y_index] = (Tile*)(new Clue_Tile(this->field, x_pos, y_pos));
			}
		}
	}
}

void Minefield::lose_game()
{
	return;
}

void Minefield::win_game()
{
	std::cout << "You Win\nCongrats!" << std::endl;
	return;
}

void Minefield::end_game()
{
	//if is_mine(), lose_game();
	//else if all mines flagged, win_game();
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
		/*this->end_game();*/
		return;
	}
}

void Minefield::flag(int x, int y) {
	Tile* current_Tile = this->field[x][y];
	if (current_Tile->flag() == -1) {
		this->end_game();
	}
}

void Minefield::draw(sf::RenderWindow& window) {
	for (int x_index = 0; x_index < Minefield_Width; x_index++) {
		for (int y_index = 0; y_index < Minefield_Height; y_index++) {
			// for each tile in the field, draw the tile
			this->field[x_index][y_index]->draw(window);
		}
	}
	return;
}
