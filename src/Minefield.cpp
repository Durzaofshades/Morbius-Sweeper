#include "Minefield.hpp"

void Minefield::generate_field() {
	int x_index, y_index, flag_num = 0;
	float x_pos, y_pos;

	int x, y;

	// instantiate each tile
	for (int x_index = 0; x_index < Minefield_Width; x_index++) {
		for (int y_index = 0; y_index < Minefield_Height; y_index++) {
			// loop over every tile
			// if tile is not a mine, create a new clue tile
			x_pos = X_OFFSET + (x_index * TILE_LENGTH);
			y_pos = Y_OFFSET + (y_index * TILE_LENGTH);

			this->field[x_index][y_index] = (Tile*)(new Clue_Tile(x_pos, y_pos));
		}
	}

	for (int mine_count = 0; mine_count < MineNumber; mine_count++) {
		x_index = rand() % 15;
		y_index = rand() % 15;
		
		x_pos = X_OFFSET + (x_index * TILE_LENGTH);
		y_pos = Y_OFFSET + (y_index * TILE_LENGTH);
		
		if (field[x_index][y_index]->is_mine != 1) {
			this->field[x_index][y_index] = new Mine_Tile(x_pos, y_pos);
		}
	}

	for (x = 0; x < Minefield_Width; x++) {
		for (y = 0; y < Minefield_Width; y++) {
			if (field[x][y]->is_mine == 0){
				((Clue_Tile*)field[x][y])->calculate_clue(field, x, y);
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

void Minefield::end_game(sf::RenderWindow& window)
{
	std::cout << "Hey... you're kinda bad at minesweeper" << std::endl;
	window.close();
}

Minefield::Minefield() {
	this->generate_field();
	this->mine_count = 0; // every time a mine is flagged successfuly, decrement
}

void Minefield::reveal(int x, int y, sf::RenderWindow& window, Textures& texture) {
	int X_pos = x; 
	int Y_pos = y;

	int X_index = (X_pos - X_OFFSET) / TILE_LENGTH;
	int Y_index = (Y_pos - Y_OFFSET) / TILE_LENGTH;

	if (!(0 <= X_index) || !(X_index < Minefield_Width)) return;
	if (!(0 <= Y_index) || !(Y_index < Minefield_Height)) return;

	Tile* current_Tile = this->field[X_index][Y_index];

	// check if tile is already revealed, if so do nothing (early return)
	if (current_Tile->state == Revealed) return;
	if (current_Tile->reveal(texture) == -1) this->end_game(window);
}

void Minefield::flag(int x, int y, sf::RenderWindow& window, Textures& texture) {
	int X_pos = x; 
	int Y_pos = y;

	int X_index = (X_pos - X_OFFSET) / TILE_LENGTH;
	int Y_index = (Y_pos - Y_OFFSET) / TILE_LENGTH;
	
	if (!(0 <= X_index) && !(X_index < Minefield_Width)) return;
	if (!(0 <= Y_index) && !(Y_index < Minefield_Height)) return;

	Tile* current_Tile = this->field[X_index][Y_index];

	if (current_Tile->state == Flagged) return;
	if (current_Tile->flag(texture) == -1) this->end_game(window);
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
