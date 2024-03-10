#include <SFML/Graphics.hpp>


int main() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML Window");

    // Use the Default RenderStates:
    sf::RectangleShape rectangle(sf::Vector2f(100, 100));
    window.draw(rectangle, sf::RenderStates::Default); // Assuming correct use

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }

        window.clear();
        window.display();
    }

    return 0;
}
