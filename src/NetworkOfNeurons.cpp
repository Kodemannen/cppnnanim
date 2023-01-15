#include "NetworkOfNeurons.hpp"
#include <iostream>

NetworkOfNeurons::NetworkOfNeurons(int size, int posx, int posy, int spacing) {
    this->size = size;
    for (int i = 0; i < size; i++) {
        Neuron neuron(i);
        neuron.setPositionX(posx);
        neuron.setPositionY(posy + i*spacing);
        neuron.setShape();

        neurons.push_back(neuron);
    }
}

NetworkOfNeurons::~NetworkOfNeurons() {
    std::cout << "NetworkOfNeurons destructor called" << std::endl;
};

Neuron NetworkOfNeurons::getNeuron(int index) {
    return neurons[index];
}

int NetworkOfNeurons::getSize() {
    return this->size;
}
