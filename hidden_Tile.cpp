#include "hidden_Tile.hpp"


hidden_Tile::hidden_Tile(float x, float y) {
	sf::RectangleShape hidden(sf::Vector2f(60.f, 60.f));
	this->tile_hidden = hidden;
	this->tile_hidden.setOutlineColor(sf::Color::White);
	this->tile_hidden.setOutlineThickness(1);
	this->tile_hidden.setFillColor(sf::Color::Transparent);
	this->tile_hidden.setPosition(x, y);
}

void hidden_Tile::display(sf::RenderWindow& window) {
	window.draw(this->tile_hidden);
}



int hidden_Tile::reveal() {
	return 0;
}
// returns a -1 on loss
int hidden_Tile::is_Mine() {
	return 0;
}// returns a -1 on loss
int hidden_Tile::flag() {
	return 0;
}