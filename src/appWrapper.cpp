#include "appWrapper.hpp"

void app_wrapper() {
	// instantiate minefield
	Minefield minefield;
	//Load Textures (since they dont like loading unless its in largest scope)
	sf::Texture flag;
	sf::Texture tile_m1;
	sf::Texture tile_m2;
	sf::Texture tile_m3;
	sf::Texture tile_m4;
	sf::Texture tile_m5;
	sf::Texture tile_m6;
	sf::Texture tile_m7;
	sf::Texture tile_m8;

	flag.loadFromFile("resources/flag.jpg");
	tile_m1.loadFromFile("resources/num_mines_1.jpg");
	tile_m2.loadFromFile("resources/num_mines_2.jpg");
	tile_m3.loadFromFile("resources/num_mines_3.jpg");
	tile_m4.loadFromFile("resources/num_mines_4.jpg");
	tile_m5.loadFromFile("resources/num_mines_5.jpg");
	tile_m6.loadFromFile("resources/num_mines_6.jpg");
	tile_m7.loadFromFile("resources/num_mines_7.jpg");
	tile_m8.loadFromFile("resources/num_mines_8.jpg");

	// open window
	sf::RenderWindow window(sf::VideoMode(Window_Width, Window_Height), "Morbius Sweeper");
	sf::Vector2i position = sf::Mouse::getPosition();
	sf::Mouse::setPosition(sf::Vector2i(Window_Width, Window_Height), window);
	while (window.isOpen()) {
		sf::Event event;

		while (window.pollEvent(event)) { // check for event
			if (event.type == sf::Event::Closed) window.close();
			/*if (sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
				minefield.reveal(sf::Mouse::getPosition(window).x, sf::Mouse::getPosition(window).y, window);
			}*/
			//if (event.type == sf::Mouse::Left) minefield.reveal(sf::Mouse::getPosition(window).x, sf::Mouse::getPosition(window).y);
			//if (event.type == sf::Mouse::Right) minefield.flag(sf::Mouse::getPosition(window).x, sf::Mouse::getPosition(window).y);
			if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
			{
				minefield.reveal(sf::Mouse::getPosition(window).x, sf::Mouse::getPosition(window).y, window);
			}
			if (sf::Mouse::isButtonPressed(sf::Mouse::Right)) {
				minefield.flag(sf::Mouse::getPosition(window).x, sf::Mouse::getPosition(window).y, window);
			}
		}

		// update window
		window.clear();
		minefield.draw(window);
		window.display();
	}
	return;
}