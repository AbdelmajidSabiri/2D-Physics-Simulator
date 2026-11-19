#include <SFML/Graphics.hpp>

int main()
{
    // Create the application window
    sf::RenderWindow window(
        sf::VideoMode({800, 600}),
        "2D Physics Simulator"
    );

    window.setFramerateLimit(60);

    // Create our first particle
    sf::CircleShape particle(30.f);

    particle.setFillColor(sf::Color::Green);
    particle.setPosition({385.f, 285.f});

    // Main application loop
    while (window.isOpen())
    {
        // Handle events
        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
            {
                window.close();
            }
        }

        // Clear the window
        window.clear(sf::Color(30, 30, 40));

        // Draw our particle
        window.draw(particle);

        // Display everything
        window.display();
    }

    return 0;
}
