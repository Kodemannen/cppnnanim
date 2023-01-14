#include "Neuron.hpp"
#include <iostream>


//----------------------------------------------------------------------
// Con- & destructors:
//----------------------------------------------------------------------
Neuron::Neuron (int index) {
    this->index = index;
}
Neuron::~Neuron () {
}



//----------------------------------------------------------------------
// Position:
//----------------------------------------------------------------------
void Neuron::setPosition(int x, int y) {
    this->position[0] = x;
    this->position[1] = y;
}
int Neuron::getPosition() {
    return this->position[0], this->position[1];
}


//----------------------------------------------------------------------
// Membrane Potential:
//----------------------------------------------------------------------
void Neuron::setMembranePotential(double Vm) {
    this->membrane_potential = Vm;
}
double Neuron::getMembranePotential() {
    return this->membrane_potential;
}



//----------------------------------------------------------------------
// Threshold:
//----------------------------------------------------------------------
void Neuron::setThreshold(double treshold) {
    this->threshold = treshold;
}
double Neuron::getThreshold() {
    return this->threshold;
}


//----------------------------------------------------------------------
// Shape:
//----------------------------------------------------------------------
// Radius:
void Neuron::setRadius(double r) {
    this->radius = r;
}
double Neuron::getRadius() {
    return this->radius;
}
void Neuron::setShape() {
    shape.setRadius(this->radius);
    shape.setFillColor(this->fillColor);
    shape.setOutlineColor(this->outlineColor);
    shape.setOutlineThickness(this->outlineThickness);
    shape.setPosition(sf::Vector2f(this->position[0], this->position[1]));
}
// void Neuron::setShape(float radius, sf::Color fillColor, sf::Color outlineColor, float outlineThickness, sf::Vector2f position) {
//     shape.setRadius(radius);
//     shape.setFillColor(fillColor);
//     shape.setOutlineColor(outlineColor);
//     shape.setOutlineThickness(outlineThickness);
//     shape.setPosition(position);
// }
sf::CircleShape Neuron::getShape() {
    return this->shape;
}
