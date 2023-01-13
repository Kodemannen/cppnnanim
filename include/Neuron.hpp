// Write a header for a class called Neuron, with the properties: 
// 1. A scalar called radius
// 2. A 2d vector called position
// 3. A scallar called membrane potential
// 6. A scalar called threshold

#include <SFML/Graphics.hpp>

class Neuron {
    public:
        Neuron();
        // Neuron(int k);
        Neuron(sf::Vector2f position);
        // Neuron(sf::Vector2f position[2], int p);
        // Neuron(double radius, sf::Vector2f position[2], double membrane_potential, double threshold);
        
        ~Neuron();
        // double radius;
        // double position[2];
        // double membrane_potential;
        // double threshold;


};


// Neuron::Neuron (double radius) {
// }


