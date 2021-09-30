#include <iostream>

class neuron
{

    public:
    neuron();
    ~neuron();

    private:
    double Vm;
    int position[2];    // (x,y) coordinate of the neuron
    double diameter=10;

};
