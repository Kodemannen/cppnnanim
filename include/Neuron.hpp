// Write a header for a class called Neuron, with the properties: 
// 1. A scalar called radius
// 2. A 2d vector called position
// 3. A scallar called membrane potential
// 6. A scalar called threshold

#include <SFML/Graphics.hpp>

#include <vector>
#include <iostream>

class Neuron {
    private:
        int index;
        int position[2];
        double radius;
        double membrane_potential;
        double threshold;
        sf::CircleShape shape;
        sf::Color fillColor=sf::Color::Red;
        sf::Color outlineColor=sf::Color::Green;
        float outlineThickness=5.f;


    public:
        Neuron(int index);
        ~Neuron();

        void setPosition(int x, int y);
        int getPosition();

        void setMembranePotential(double m);
        double getMembranePotential();

        void setThreshold(double t);
        double getThreshold();

        void setRadius(double radius);
        double getRadius();

        void setShape();
        sf::CircleShape getShape();

};


// Neuron::Neuron (double radius) {
// }

// public:
//     Circle(float radius, sf::Color fillColor, sf::Color outlineColor, float outlineThickness, sf::Vector2f position)
//     {
//         shape.setRadius(radius);
//         shape.setFillColor(fillColor);
//         shape.setOutlineColor(outlineColor);
//         shape.setOutlineThickness(outlineThickness);
//         shape.setPosition(position);
//     }

//     sf::CircleShape& getShape()
//     {
//         return shape;
//     }

// private:
//     sf::CircleShape shape;
