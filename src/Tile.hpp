#pragma once
// Class for each on screen tile, which are either a mine or a clue
#include "Header.hpp"
enum Tile_State { Hidden, Revealed, Flagged };
enum Tile_Type { Clue, Mine };

class Clue_Tile;
class Mine_Tile;

class Tile { // abstract class
public:
	float getPositionX();
	float getPositionY();

	Tile(float x, float y);
	~Tile();

	Tile_State state;

	// virtual int is_Mine();
	virtual int reveal(Textures textures) = 0; // returns a -1 on loss
	virtual int flag(Textures textures) = 0; // returns -1 on loss

	void draw(sf::RenderWindow& window);

	sf::RectangleShape graphics;
	sf::Sprite m_Sprite;
	sf::Texture Texture;

	// friend int Clue_Tile::calculate_clue(Tile* field[Minefield_Width][Minefield_Height], int X, int Y);
	int	is_mine;

};

