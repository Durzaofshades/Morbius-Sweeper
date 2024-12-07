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
	void end_game(sf::RenderWindow& window);

public:
	Minefield();

	int mine_count;

	void reveal(int x, int y, sf::RenderWindow& window); // trigger a tile
	void flag(int x, int y, sf::RenderWindow& window, sf::Texture flag_Text); // place a flag on a tile
	void draw(sf::RenderWindow& window); // runs tile.draw() on every tile
};