#include "Neuron.hpp"
#include <iostream>


Neuron::Neuron () {
    std::cout << "1st constructor" << std::endl;
}

// Neuron::Neuron (int k) {
//     std::cout << "2nd constructor" << std::endl;
// }

// Neuron::Neuron(int a, int b) {
//     std::cout << "3rd constructor" << std::endl;
// }
Neuron::Neuron(sf::Vector2f position) {
    std::cout << "3rd constructor" << std::endl;
}

// Neuron::Neuron(double radius, sf::Vector2f position[2], double membrane_potential, double threshold) {
//     std::cout << "3rd constructor" << std::endl;
// }


// Neuron::Neuron(double radius, sf::Vector2f position[2], double membrane_potential, double threshold) {

// }
// Neuron::Neuron (int k) {
//     // std::cout << "Neuron constructed" << std::endl;
// }

Neuron::~Neuron () {
}

//------------------------------------------------------------ 
// setFunctions:
//------------------------------------------------------------ 
// void setRadius(double r) {
//     this->radius = r;
// }

// void setPosition(int x, int y) {
//     this->position[0] = x;
//     this->position[1] = y;
// }

// void setMembranePotential(double m) {
//     this->membrane_potential = m;
// }

// void setThreshold(double t) {
//     this->threshold = t;
// }


// ------------------------------------------------------------ 
//  getFunctions:
// ------------------------------------------------------------ 
 // void getRadius() {
 //     return this->radius;
 // }

 // void getPosition() {
 //     return this->position;
 // }

 // void getMembranePotential() {
 //     return this->membrane_potential;
 // }

 // void Neuron::getThreshold() {
 //     return this->threshold;
 // }
