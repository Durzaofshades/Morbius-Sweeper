#include "Tile.hpp"

Tile::Tile(float x, float y) {
	sf::RectangleShape tile_rectangle(sf::Vector2f(60.f, 60.f));

	this->graphics = tile_rectangle;
	this->graphics.setOutlineColor(sf::Color::White);
	this->graphics.setOutlineThickness(1);
	this->graphics.setFillColor(sf::Color::Transparent);
	this->graphics.setPosition(x, y);
	
	/*this->m_Texture = getTexture();*/
	this->state = Hidden;
}

Tile::~Tile() {}

int Tile::reveal()
{
	return 0;
}

int Tile::flag()
{
	return 0;
}

int Tile::is_Mine() // WEIRDO ALERT!! this should be pure virtual but the code "crashes out" if I do that
{
	return 0;
}

void Tile::draw(sf::RenderWindow& window) {
	window.draw(this->graphics);
}

float Tile::getPositionX() {
	float x = 0;
	x = graphics.getPosition().x;
	return x;
}

float Tile::getPositionY() {
	float y = 0;
	y = graphics.getPosition().y;
	return y;
}

void Tile::setTexture(sf::Texture new_texture) {
	//this->m_Texture = new_texture;
}

sf::Texture Tile::getTexture() const
{
	return this->m_Texture;
}

