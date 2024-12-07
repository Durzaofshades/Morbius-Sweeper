#pragma once
// Class for each on screen tile, which are either a mine or a clue
#include "Header.hpp"
enum Tile_State { Hidden, Revealed, Flagged };
enum Tile_Type { Clue, Mine };

class Tile { // abstract class
public:
	float getPositionX();
	float getPositionY();


	Tile(float x, float y, sf::Texture new_Texture);
	~Tile();

	Tile_State state;

	virtual int reveal(); // returns a -1 on loss
	virtual int flag(sf::Texture new_Texture); // returns -1 on loss
	virtual int is_Mine();

	void draw(sf::RenderWindow& window);

	sf::RectangleShape graphics;
	sf::Sprite m_Sprite;
	sf::Texture Texture;
private:
};

