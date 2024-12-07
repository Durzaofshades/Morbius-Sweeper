#include "Test.hpp"

int TEST_all() {
    int errors = 0;
    errors += TEST_position_to_index_X();
    errors += TEST_position_to_index_Y();
    errors += TEST_calculate_clue();

    return errors;
}

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
 
    Clue_Tile* newTile = new Clue_Tile(field, 0, 0);

    field[0][0] = (Tile*)newTile;
    field[0][1] = (Tile*) new Clue_Tile(field, 0, 1);

    for (int x = 0; x < 15; x++) {
        for (int y = 0; y < 15; y++) {
            if (x != 0 && y != 0) field[x][y] = (Tile*) new Mine_Tile(0, 0);
        }
    }
    
    newTile->calculate_clue(field, 0, 0);

    if (newTile->Mine_Number == 2) return 0;
    else return 1;
}
