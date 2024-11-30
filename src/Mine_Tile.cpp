#include "Mine_Tile.hpp"

int Mine_Tile::reveal()
{
	if (is_Mine()) {
		return 0;
	}
	else {
		return 1;
	}
}

int Mine_Tile::flag()
{

	//sf::Texture* flag;
	//flag = (sf::Texture*) fopen("flag.jpg", "r");
	//if flag mine, lose_game();
	return 0;
}

int Mine_Tile::is_mine() { return 1; }
