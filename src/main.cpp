
#include <SFML/Graphics.hpp>
#include "Particle.h"

int main()
{
    // Create the window
    sf::RenderWindow window(
        sf::VideoMode({800, 600}),
        "2D Physics Simulator"
    );

    window.setFramerateLimit(60);

    // Create a particle
    Particle particle({100.f, 300.f}, 1.f, 20.f);

    // Give it an initial velocity
    particle.setVelocity({120.f, 0.f});

    // Create its visual representation
    sf::CircleShape shape(particle.getRadius());

    shape.setOrigin({
        particle.getRadius(),
        particle.getRadius()
    });

    shape.setFillColor(sf::Color::Green);

    // Clock for calculating elapsed time
    sf::Clock clock;

    // Main loop
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

        // Calculate delta time
        float deltaTime = clock.restart().asSeconds();

        // Update physics
        particle.update(deltaTime);

        // Update graphics position
        shape.setPosition(particle.getPosition());

        // Render
        window.clear(sf::Color(30, 30, 40));
        window.draw(shape);
        window.display();
    }

    return 0;
}
