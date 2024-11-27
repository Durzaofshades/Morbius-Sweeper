#pragma once
// Class for each on screen tile, which are either a mine or a clue

enum Tile_State { Hidden, Revealed, Flagged };
enum Tile_Type {Clue, Mine};

class Tile { // abstract class

public:
	Tile();
	~Tile() {}

	Tile_State state;

	virtual int reveal() = 0; // returns a -1 on loss
	virtual int flag() = 0; // returns -1 on loss
	virtual int is_Mine();
};
