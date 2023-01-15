#include <SFML/Graphics.hpp>

#include <vector>
#include <iostream>

#include "Neuron.hpp"

class NetworkOfNeurons {
    private:
        int size = 1;
        int position[2] = {110, 120};
        std::vector<Neuron> neurons;

    public:
        NetworkOfNeurons(int size, int posx, int posy, int spacing);
        ~NetworkOfNeurons();
        
        Neuron getNeuron(int index);

        int getSize();
};

