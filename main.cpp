#include <SFML/Graphics.hpp>

int main()
{
    // create a window
    sf::RenderWindow window(sf::VideoMode(1024, 768), "My Game Window Title");

    // main game loop
    while (window.isOpen())
    {
        // Events... loop through all the events
        sf::Event event;

        while (window.pollEvent(event))
        {
            // if user closes the window... close the window
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
        }

        // clears the window.. MANDATORY!
        window.clear(sf::Color::Black);

        // draw stuff;

        // ends the frame, and draws everything. MANDATORY!
        window.display();
    }

    return EXIT_SUCCESS;
}
