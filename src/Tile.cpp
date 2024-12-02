#include "Tile.hpp"

Tile::Tile(float x, float y) {
	sf::RectangleShape tile(sf::Vector2f(60.f, 60.f));
	this->m_hidden_Tile = tile;
	this->m_hidden_Tile.setOutlineColor(sf::Color::White);
	this->m_hidden_Tile.setOutlineThickness(1);
	this->m_hidden_Tile.setFillColor(sf::Color::Transparent);
	this->m_hidden_Tile.setPosition(x, y);
	/*this->m_Texture = getTexture();*/
	this->state = Hidden;
}

Tile::~Tile() {}

int Tile::is_Mine() // WEIRDO ALERT!! this should be pure virtual but the code "crashes out" if I do that
{
	return 0;
}

void Tile::display(sf::RenderWindow& window) {
	window.draw(this->m_hidden_Tile);
}

float Tile::getPositionX() {
	float x = 0;
	x = m_hidden_Tile.getPosition().x;
	return x;
}

float Tile::getPositionY() {
	float y = 0;
	y = m_hidden_Tile.getPosition().y;
	return y;
}

void Tile::setTexture(sf::Texture new_texture) {
	//this->m_Texture = new_texture;
}

sf::Texture Tile::getTexture() const
{
	return this->m_Texture;
}

