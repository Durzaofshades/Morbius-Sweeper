#include "Tile.hpp"

Tile::Tile() {
	float x = 420, y = 45;

	this->setOutlineColor();
	this->setOutlineThickness();
	this->setFillColor();
	this->setPosition(x, y);
	/*this->m_Texture = getTexture();*/
	this->state = Hidden;
}

Tile::~Tile() {}

int Tile::is_Mine() // WEIRDO ALERT!! this should be pure virtual but the code "crashes out" if I do that
{
	return 0;
}

void Tile::display(sf::RenderWindow& window) {
	window.draw(m_hidden_Tile);
}


void Tile::setOutlineColor() {
	this->m_hidden_Tile.setOutlineColor(sf::Color::White);
}

void Tile::setOutlineThickness() {
	this->m_hidden_Tile.setOutlineThickness(1);
}

void Tile::setFillColor() {
	this->m_hidden_Tile.setFillColor(sf::Color::Transparent);
}

void Tile::setPosition(float x, float y) {
	this->m_hidden_Tile.setPosition(x, y);
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

void box(sf::RenderWindow& window, float x, float y) {
	sf::RectangleShape tile(sf::Vector2f(60.f, 60.f));
	tile.setOutlineColor(sf::Color::White);
	tile.setOutlineThickness(1);
	tile.setFillColor(sf::Color::Transparent);
	tile.setPosition(x, y);
	return;
}

void make_boxes(float start_x, float start_y, sf::RenderWindow& window) {
	const int rows = 15;
	const int cols = 15;
	const float tileSize = 60.f;
	for (int i = 0; i < rows; i++) {
		start_x = 420;
		for (int j = 0; j < cols; j++) {
			box(window, start_x, start_y);
			start_x = start_x + 60;
		}
		start_y = start_y + 60;
	}
	return;
}
