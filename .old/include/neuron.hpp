#include <iostream>
#include <armadillo>


arma::mat add_circle(arma::mat state, int radius, int locx, int locy);


#define PI 3.14159265


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



