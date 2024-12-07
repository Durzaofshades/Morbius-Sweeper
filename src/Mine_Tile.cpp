#include "Mine_Tile.hpp"

int Mine_Tile::reveal(Textures& textures) {
	return 1;
}

int Mine_Tile::flag(Textures& textures) {
	this->m_Sprite.setTexture(textures.tile_flag);
	return 0;
}

// int Mine_Tile::is_mine() { return 1; }
