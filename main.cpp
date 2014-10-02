#include <SFML/Graphics.hpp>

int main()
{
    // create a window
    sf::RenderWindow window(sf::VideoMode(1024, 768), "My Game Window Title");

    // initiate a rectangle
    sf::RectangleShape myrectangle(sf::Vector2f(64, 96));

    // fill the rectangle with yellow
    myrectangle.setFillColor(sf::Color(255,255,0));

    // set position
    int x = 50;
    int y = 100;
    myrectangle.setPosition(x, y);

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

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
        {
            x -= 1;
            myrectangle.setPosition(x, y);
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
        {
            y -= 1;
            myrectangle.setPosition(x, y);
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
        {
            x += 1;
            myrectangle.setPosition(x, y);
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
        {
            y+= 1;
            myrectangle.setPosition(x, y);
        }

        // clears the window.. MANDATORY!
        window.clear(sf::Color::Black);

        // draw stuff;
        // draw the rectangle
        window.draw(myrectangle);

        // ends the frame, and draws everything. MANDATORY!
        window.display();
    }

    return EXIT_SUCCESS;
}
