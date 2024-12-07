#include "Mine_Tile.hpp"

int Mine_Tile::reveal() {
	return 1;
}

int Mine_Tile::flag() {
	sf::Texture tile_flag;
	tile_flag.loadFromFile("resources/flag.jpg");
	
	this->m_Sprite.setTexture(tile_flag);
	return 0;
}

int Mine_Tile::is_mine() { return 1; }
