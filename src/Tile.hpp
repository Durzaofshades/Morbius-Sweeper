#pragma once
// Class for each on screen tile, which are either a mine or a clue
#include "Header.hpp"
enum Tile_State { Hidden, Revealed, Flagged };
enum Tile_Type { Clue, Mine };

class Tile { // abstract class
public:
	float getPositionX();
	float getPositionY();

	void setTexture(sf::Texture new_texture);

	sf::Texture getTexture() const;

	Tile(float x, float y);
	~Tile();

	Tile_State state;

	virtual int reveal(); // returns a -1 on loss
	virtual int flag(); // returns -1 on loss
	virtual int is_Mine();

	void draw(sf::RenderWindow& window);

	sf::RectangleShape graphics;

private:
	sf::Texture m_Texture;
};

