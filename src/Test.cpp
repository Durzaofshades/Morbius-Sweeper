#include "Test.hpp"

int TEST_position_to_index_X() {
    int test;
    test = position_to_index_X(425);

    if (test == 0)  return 0;
    else            return 1;
}

int TEST_position_to_index_Y() {
    int test;
    test = position_to_index_Y(60);

    if (test == 0)  return 0;
    else            return 1;
}

int TEST_calculate_clue() {
    Tile* field[15][15];
       
    field[0][1] = new Mine_Tile(0, 0);
    field[0][2] = new Mine_Tile(0, 0);

    field[1][0] = new Mine_Tile(0, 0);
    field[1][1] = new Mine_Tile(0, 0);
    field[1][2] = new Mine_Tile(0, 0);

    field[0][0] = new Clue_Tile(field, 0, 0);

    Clue_Tile* tile = (Clue_Tile*) field[0][0];

    if (tile->Mine_Number == 3) return 0;
    else return 1;
}
