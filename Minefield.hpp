#include "Tile.hpp"
#include "Mine_Tile.hpp"
#include "Clue_Tile.hpp"


#include <time.h>

#define MinefieldSize 15 // there are 225 tiles in total
#define MineNumber 75 // 75 Mines in 225 Tiles, 1/3 tiles are mines

class Minefield {

private:
	Tile* field[MinefieldSize][MinefieldSize];
	void generate_field(); // starts a new game

	void lose_game();
	void win_game();
	void end_game();

public:
	Minefield();

	int mine_count;

	void reveal(int x, int y); // trigger a tile
	void flag(int x, int y); // place a flag on a tile

};