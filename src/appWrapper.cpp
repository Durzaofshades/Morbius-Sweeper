#include "appWrapper.hpp"

void app_wrapper() {
	// instantiate minefield
	Minefield minefield;

	// open window
	sf::RenderWindow window(sf::VideoMode(Window_Width, Window_Height), "Morbius Sweeper");
	sf::Vector2i position = sf::Mouse::getPosition();
	sf::Mouse::setPosition(sf::Vector2i(Window_Width, Window_Height), window);
	while (window.isOpen()) {
		sf::Event event;

		while (window.pollEvent(event)) { // check for event
			if (event.type == sf::Event::Closed) window.close();
			if (sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
				minefield.reveal(sf::Mouse::getPosition(window).x, sf::Mouse::getPosition(window).y);
			}
			if (sf::Mouse::isButtonPressed(sf::Mouse::Right))minefield.flag(sf::Mouse::getPosition(window).x, sf::Mouse::getPosition(window).y);
		}

		// update window
		window.clear();
		minefield.draw(window);
		window.display();
	}
	return;
}