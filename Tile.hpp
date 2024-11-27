// Class for each on screen tile, which are either a mine or a clue

enum Tile_State { Hidden, Revealed, Flaged };
enum Tile_Type {Clue, Mine};

class Tile { // abstract class

public:
	virtual int reveal() = 0; // returns a -1 on loss
	virtual int flag() = 0; // returns -1 on loss

	virtual int is_Mine();

protected:
	Tile_State state;
};
