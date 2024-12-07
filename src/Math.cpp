#include "Math.hpp"

int max(int a, int b) {
	if(a > b)	{ return a; }
	else		{ return b; }
	
}

int min(int a, int b) {
	if (a < b)  { return a; }
	else		{ return b; }
}

int position_to_index_X(int X_pos) {
	int X_index = (X_pos - X_OFFSET) / TILE_LENGTH;
	return X_index;
}

int position_to_index_Y(int Y_pos) {
	int Y_index = (Y_pos - Y_OFFSET) / TILE_LENGTH;
	return Y_index;
}
