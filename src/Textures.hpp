#pragma once

#include "Header.hpp"
#include "SFML/Graphics.hpp"

class Textures {
public:
	Textures(void);
	
	sf::Texture tile_hidden; // hidden textures
	sf::Texture tile_flag; // flag texture
	sf::Texture tile_m1; // clue 1
	sf::Texture tile_m2; // clue 2
	sf::Texture tile_m3; // clue 3
	sf::Texture tile_m4; // clue 4
	sf::Texture tile_m5; // clue 5
	sf::Texture tile_m6; // clue 6
	sf::Texture tile_m7; // clue 7
	sf::Texture tile_m8; // clue 8
};