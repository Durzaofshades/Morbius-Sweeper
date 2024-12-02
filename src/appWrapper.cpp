#include "appWrapper.hpp"


//void make_box(sf::RenderWindow& window) {
//	float start_x = X_OFFSET, 
//	float start_y = Y_OFFSET;
//
//	for (int i = 0; i < 15; i++) {
//		for (int j = 0; j < 15; j++) {
//			Tile* name = (Tile*) new Tile(start_x, start_y);
//			window.draw(name->m_hidden_Tile);
//			start_x = start_x + TILE_LENGTH;
//		}
//
//		start_x = X_OFFSET;
//		start_y = Y_OFFSET + start_y;
//	}
//}

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