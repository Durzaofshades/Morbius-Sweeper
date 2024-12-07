#include "Tile.hpp"

Tile::Tile(float x, float y) {
	
	sf::RectangleShape tile_rectangle(sf::Vector2f(60.f, 60.f));
	
	Texture.loadFromFile("resources/tile_hidden.jpg");
	
	this->m_Sprite.setTexture(Texture);
	this->m_Sprite.setScale(.12, .12);
	this->m_Sprite.setPosition(x, y);
	this->graphics = tile_rectangle;
	this->graphics.setOutlineColor(sf::Color::White);
	this->graphics.setOutlineThickness(1);
	
	this->graphics.setPosition(x, y);
	
	this->state = Hidden;
}

Tile::~Tile() {}

int Tile::is_Mine() { return 0; }

void Tile::draw(sf::RenderWindow& window) {
	window.draw(this->graphics);
	window.draw(this->m_Sprite);
}

float Tile::getPositionX() {
	return graphics.getPosition().x;
}

float Tile::getPositionY() {
	return graphics.getPosition().y;
}
