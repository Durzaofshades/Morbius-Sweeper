#include "appWrapper.hpp"

void make_box(sf::RenderWindow& window) {
	float start_x = 420, start_y = 60;
	char name = 1;
	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 15; j++) {
			hidden_Tile* name = (hidden_Tile*) new hidden_Tile(start_x, start_y);
			window.draw(name->tile_hidden);
			start_x = start_x + 60;
			name++;
		}
		start_x = 420;
		start_y = start_y + 60;
	}
}

void app_wrapper() {
	const int rows = 15;
	const int cols = 15;

	sf::RenderWindow window(sf::VideoMode(1920, 1080), "Morbius Sweeper");

	while (window.isOpen()) {
		sf::Event event;
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed) {
				window.close();
			}
		}
		window.clear();

		make_box(window);

		window.display();
	}
	return;
}