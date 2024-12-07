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
    int x, y;

    for (x = 0; x < 15; x++) {
        for (y = 0; y < 15; y++) {
			field[x][y] = new Clue_Tile(0, 0);
        }
    }

    field[0][0] = new Mine_Tile(0, 0);
    field[0][1] = new Mine_Tile(0, 0);


    for (int x = 0; x < 15; x++) {
        for (int y = 0; y < 15; y++) {
            if (field[x][y]->is_mine != 1) {
                ((Clue_Tile*) field[x][y])->calculate_clue(field, 0, 0);
            }
        }
    }

    if (((Clue_Tile*)field[1][1])->Mine_Number == 2) return 0;
    else return 1;
}
