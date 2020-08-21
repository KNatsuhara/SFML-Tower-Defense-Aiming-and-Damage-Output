#pragma once

#include "header.h"

//struct Bullet {
//    float radius;
//    sf::CircleShape shape;
//    sf::Vector2f currVelocity;
//    float maxSpeed;
//};

class Tower {
public:
    sf::CircleShape shape;
    sf::Vector2f playerCenter;
    float range;
    int atkSpeed;
    int shootTimer;
    int damage;

    Tower()
    {
        this->shape.setRadius(30.f);
        this->shape.setFillColor(sf::Color::White);
        this->range = 1.2;
        this->atkSpeed = 5; //The higher it is the slower they shoot
        this->shootTimer = 0;
        this->damage = 30;
    }
};