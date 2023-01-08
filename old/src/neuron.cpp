#include "neuron.hpp"
#include "coordinates.hpp"

neuron::neuron()
{
    std::cout << "wtf " << std::endl;

}

neuron::~neuron()
{

}

arma::mat add_circle(arma::mat state, int radius, int locx, int locy)
{
    // radius is measured in number of pixels 
    // (locx, locy) is the top left corner 
    
    // The number of elements must be dependent on the radius
    // 
    
    int n_rows = state.n_rows;
    int n_cols = state.n_cols;


    Coords coords = {1,2};


    std::vector<Coords> circle;

    int previous_xcoord;
    int previous_ycoord;

    int count = 0;
    bool done = false;


    double theta = 0;
    //double delta_theta = 2*PI/1000;
    double delta_theta = 1./radius;         // this seems to ensure that there are no holes

    
    

    // go incrementally around in a circle and create coordinates 
    while (not done)
    {
        int xcoord = int(radius*cos(theta));
        int ycoord = int(radius*sin(theta));

        // in case that the delta_angle is very small, we may not always move away
        // from the point, and we want to just continue
        if (xcoord==previous_xcoord and ycoord==previous_ycoord)
        {
            theta += delta_theta;
            count++;
            continue;
        }


        // set pixel to white:
        state(xcoord+radius, ycoord+radius) = 255;

        previous_xcoord = xcoord;
        previous_ycoord = ycoord;

        theta += delta_theta;
        count++;

        if (theta >= 2*PI)
        {
            std::cout << "Ferdig" << std::endl;
            done = true;
        }

    }


    return state;
};
