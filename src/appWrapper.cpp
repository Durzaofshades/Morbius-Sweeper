#include "appWrapper.hpp"

void app_wrapper() {
	// Minefield_Width;
	// Minefield_Height;
	
	// instantiate minefield
	Minefield minefield;

	// open window
	sf::RenderWindow window(sf::VideoMode(1920, 1080), "Morbius Sweeper");

	while (window.isOpen()) {
		sf::Event event;

		// check for event
		while (window.pollEvent(event)) {
			
			if (event.type == sf::Event::Closed) {
				window.close();
			}
		}

		// update window
		window.clear();
		minefield.draw(window);
		window.display();
	}
	return;
}