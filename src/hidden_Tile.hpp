#pragma once

#include "Tile.hpp"

class hidden_Tile : public Tile {
public:
	hidden_Tile(float x, float y);

	void display(sf::RenderWindow& window);

	int reveal()override; // returns a -1 on loss
	int flag()override; // returns -1 on loss
	int is_Mine();
	sf::RectangleShape tile_hidden;
private:

	sf::Sprite Tile_Hidden;
};