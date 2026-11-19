#pragma once

#include <SFML/System/Vector2.hpp>

class Particle
{
private:
    sf::Vector2f position;
    sf::Vector2f velocity;

    float mass;
    float radius;

public:
    Particle(sf::Vector2f startPosition,
             float particleMass,
             float particleRadius);

    void update(float deltaTime);

    void setVelocity(sf::Vector2f newVelocity);

    sf::Vector2f getPosition() const;
    float getRadius() const;
    float getMass() const;
};
