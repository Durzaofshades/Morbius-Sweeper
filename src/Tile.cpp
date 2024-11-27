#include "Tile.hpp"

Tile :: Tile() {
	this->state = Hidden;
}

int Tile::is_Mine() // WEIRDO ALERT!! this should be pure virtual but the code "crashes out" if I do that
{
	return 0;
}
