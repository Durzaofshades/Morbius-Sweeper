#include "appWrapper.hpp"

void app_wrapper() {
	// instantiate minefield
	Minefield minefield;

	// open window
	sf::RenderWindow window(sf::VideoMode(1920, 1080), "Morbius Sweeper");

	while (window.isOpen()) {
		sf::Event event;

		while (window.pollEvent(event)) { // check for event
			if (event.type == sf::Event::Closed) window.close();
			if (event.type == sf::Event::MouseButtonPressed)
		}

		// update window
		window.clear();
		minefield.draw(window);
		window.display();
	}
	return;
}