// Write a header for a class called Neuron, with the properties: 
// 1. A scalar called radius
// 2. A 2d vector called position
// 3. A scallar called membrane potential
// 6. A scalar called threshold

// #include <SFML/Graphics.hpp>

#include <vector>
#include <iostream>

class Neuron {
    public:
        Neuron(int index);
        ~Neuron();

        void setRadius(double r);
        void setPosition(int x, int y);
        void setMembranePotential(double m);
        void setThreshold(double t);

        double getRadius();
        int getPosition();
        double getMembranePotential();
        double getThreshold();

    private:
        int index;
        int position[2];
        double radius;
        double membrane_potential;
        double threshold;


};


// Neuron::Neuron (double radius) {
// }


