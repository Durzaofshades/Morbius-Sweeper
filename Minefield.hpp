#include "Tile.hpp"

#define MinefieldSize 10

class Minefield {
private:
	Tile field[MinefieldSize][MinefieldSize];
	void generate_field(); // starts a new game
	void end_game();

public:
	void reveal(int x, int y); // trigger a tile
	void flag(int x, int y); // place a flag on a tile
	
};