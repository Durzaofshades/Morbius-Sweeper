#pragma once

#include <iostream>
#include <time.h>
#include <string>
#include <cstdlib>
#include <fstream>

#include "Math.hpp"
#include "Textures.hpp"

#include "SFML\Graphics.hpp"

#define _CRT_SECURE_NO_WARNINGS
#define TESTING false

	// Constants
// there are 225 tiles in total
#define Minefield_Width 15 
#define Minefield_Height 15 
#define MineNumber 75 // 75 Mines in 225 Tiles, 1/3 tiles are mines

// For Tiles
#define TILE_LENGTH 60 // the width & length of a tile
#define X_OFFSET 420 // The First Tiles X Value
#define Y_OFFSET 60 // The First Tiles Y Value

// for window
#define Window_Width 1920
#define Window_Height 1080

