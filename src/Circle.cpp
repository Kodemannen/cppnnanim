#include "Circle.hpp"



// Circle::Circle(float radius, sf::Color fillColor, sf::Color outlineColor, float outlineThickness)
//     : shape(radius)
// {
//     shape.setFillColor(fillColor);
//     shape.setOutlineColor(outlineColor);
//     shape.setOutlineThickness(outlineThickness);
//     shape.setOutlineThickness(outlineThickness);
// }

void Circle::setPosition(float x, float y)
{
    shape.setPosition(x, y);
}

void Circle::setFillColor(sf::Color color)
{
    shape.setFillColor(color);
}

void Circle::setOutlineColor(sf::Color color)
{
    shape.setOutlineColor(color);
}

void Circle::setOutlineThickness(float thickness)
{
    shape.setOutlineThickness(thickness);
}

void Circle::draw(sf::RenderWindow& window)
{
    window.draw(shape);
}
