#include "Tile.hpp"

class Mine_Tile : Tile {
public:
	int reveal(); // this is a mine, lose the game
	int flag();
	int is_mine();
};