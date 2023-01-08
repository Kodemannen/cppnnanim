// File: include/Circle.hpp
#pragma once

#include <SFML/Graphics.hpp>

class Circle
{
public:
    Circle(float radius, sf::Color fillColor, sf::Color outlineColor, float outlineThickness, sf::Vector2f position)
    {
        shape.setRadius(radius);
        shape.setFillColor(fillColor);
        shape.setOutlineColor(outlineColor);
        shape.setOutlineThickness(outlineThickness);
        shape.setPosition(position);
    }

    sf::CircleShape& getShape()
    {
        return shape;
    }

private:
    sf::CircleShape shape;
};
