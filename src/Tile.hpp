#pragma once
// Class for each on screen tile, which are either a mine or a clue
#include "Header.hpp"
enum Tile_State { Hidden, Revealed, Flagged };
enum Tile_Type { Clue, Mine };

class Tile { // abstract class
public:
	void setOutlineColor();
	void setOutlineThickness();
	void setFillColor();
	void setPosition(float x, float y);

	float getPositionX();
	float getPositionY();

	void setTexture(sf::Texture new_texture);

	sf::Texture getTexture() const;

	Tile();
	~Tile();

	Tile_State state;

	virtual int reveal() = 0; // returns a -1 on loss
	virtual int flag() = 0; // returns -1 on loss
	virtual int is_Mine();



private:

	sf::RectangleShape m_hidden_Tile;
	sf::Texture m_Texture;
	void display(sf::RenderWindow& window);
};

