#pragma once

#include "Tile.hpp"
#include "Mine_Tile.hpp"
#include "Clue_Tile.hpp"
#include "Header.hpp"

#include <cstdlib>
#include <time.h>

class Minefield {

private:
	Tile* field[Minefield_Width][Minefield_Height];
	void generate_field(); // starts a new game

	void lose_game();
	void win_game();
	void end_game();

public:
	Minefield();

	int mine_count;

	void reveal(int x, int y); // trigger a tile
	void flag(int x, int y); // place a flag on a tile
	void draw(sf::RenderWindow& window); // runs tile.draw() on every tile
};