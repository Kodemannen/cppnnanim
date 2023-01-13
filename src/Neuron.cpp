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
// Radius:
//----------------------------------------------------------------------
void Neuron::setRadius(double r) {
    this->radius = r;
}
double Neuron::getRadius() {
    return this->radius;
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

