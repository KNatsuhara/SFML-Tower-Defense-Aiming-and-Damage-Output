#pragma once

#include "header.h"

class Bullet {
public:
    sf::CircleShape shape;
    sf::Vector2f currVelocity;
    float maxSpeed;

    Bullet(float radius = 5.f) : currVelocity(0.f, 0.f), maxSpeed(15.f)
    {
        this->shape.setRadius(radius);
        this->shape.setFillColor(sf::Color::Cyan);
    }
};