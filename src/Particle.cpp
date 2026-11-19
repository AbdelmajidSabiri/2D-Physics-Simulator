#include "Particle.h"

Particle::Particle(sf::Vector2f startPosition,
                   float particleMass,
                   float particleRadius)
    : position(startPosition),
      velocity({0.f, 0.f}),
      mass(particleMass),
      radius(particleRadius)
{
}

void Particle::update(float deltaTime)
{
    position += velocity * deltaTime;
}

void Particle::setVelocity(sf::Vector2f newVelocity)
{
    velocity = newVelocity;
}

sf::Vector2f Particle::getPosition() const
{
    return position;
}

float Particle::getRadius() const
{
    return radius;
}

float Particle::getMass() const
{
    return mass;
}
