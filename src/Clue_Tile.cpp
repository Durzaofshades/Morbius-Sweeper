#include "Clue_Tile.hpp"

#define _CRT_SECURE_NO_WARNINGS

int Clue_Tile::flag() { return -1; }

int Clue_Tile::reveal(int x, int y, int mines) {
	// TODO GRAPHICS
	sf::Texture tile_m1;
	tile_m1.loadFromFile("resources/num_mines_1.jpg");
	sf::Texture tile_m2;
	tile_m2.loadFromFile("resources/num_mines_2.jpg");
	sf::Texture tile_m3;
	tile_m3.loadFromFile("resources/num_mines_3.jpg");
	sf::Texture tile_m4;
	tile_m4.loadFromFile("resources/num_mines_4.jpg");
	sf::Texture tile_m5;
	tile_m5.loadFromFile("resources/num_mines_5.jpg");
	sf::Texture tile_m6;
	tile_m6.loadFromFile("resources/num_mines_6.jpg");
	sf::Texture tile_m7;
	tile_m7.loadFromFile("resources/num_mines_7.jpg");
	sf::Texture tile_m8;
	tile_m8.loadFromFile("resources/num_mines_8.jpg");
	switch (mines) {
	case 0:
		std::cout << "No mines, do not change" << std::endl;
		break;
	case 1:
		this->m_Sprite.setTexture(tile_m1);
		break;
	case 2:
		this->m_Sprite.setTexture(tile_m2);
		break;
	case 3:
		this->m_Sprite.setTexture(tile_m3);
		break;
	case 4:
		this->m_Sprite.setTexture(tile_m4);
		break;
	case 5:
		this->m_Sprite.setTexture(tile_m5);
		break;
	case 6:
		this->m_Sprite.setTexture(tile_m6);
		break;
	case 7:
		this->m_Sprite.setTexture(tile_m7);
		break;
	case 8:
		this->m_Sprite.setTexture(tile_m8);
	}

	return 0; 
}

int Clue_Tile::is_mine() { return 0; }

int Clue_Tile::calculate_clue(Tile* field[Minefield_Width][Minefield_Height], int X, int Y) {
	int xLeft = max(0, (X - 1)); // x loop starts at this number
	int yLeft = max(0, (Y - 1));

	int xRight = min(Minefield_Width - 1, X + 1); // x loop stops 1 more than X, or the border
	int yRight = min(Minefield_Height - 1, Y + 1);

	int mines = 0;

	for (int X_index = xLeft; X_index < xRight; X_index++) {
		for (int Y_index = yLeft; Y_index < yRight; Y_index++) {
			// Double Loop
			if (field[X_index][Y_index]->is_Mine()) {
				mines++;
			}
		}
	}

	this->Mine_Number = mines;

	return mines;
}
