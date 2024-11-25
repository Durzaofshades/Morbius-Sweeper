// Class for each on screen tile, which are either a mine or a clue

enum Tile_State { Hidden, Revealed, Flaged };
enum Tile_Type {Clue, Mine};

class Tile {
	
	friend class Minefield;

public:
	Tile_State state;
	Tile_Type type;

private:
	void reveal();
};
