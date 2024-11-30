#include "appWrapper.hpp"


//int main() {
//
//   float i = 420, j = 45;
//    int x = 0, y = 15;
//    sf::RenderWindow window(sf::VideoMode(1920, 1080), "Morbius Sweeper");
//
//    
//     
//    while (window.isOpen())
//    {
//        sf::Event event;
//        while (window.pollEvent(event)) {  
//            
//            if (event.type == sf::Event::Closed) {
//               window.close();
//            }    
//        }
//
//        window.clear();
//        
//         make_boxes(i, j, window);
//
//       
//        window.display();
//    }
//    return 0;
//}

int main() {
	app_wrapper();
	return 0;
}