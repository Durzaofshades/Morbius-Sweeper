// Class for each on screen tile, which are either a mine or a clue

enum Tile_State { Hidden, Revealed, Flaged };

class Tile {
public:
	Tile_State state;
};
