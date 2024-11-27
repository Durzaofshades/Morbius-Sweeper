#include "Tile.hpp"

class Mine_Tile : Tile {
public:
	Mine_Tile();
	int reveal();
	int flag();
	int is_mine();
};