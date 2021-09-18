#include "../include/neuron.h"
#include <iostream>
#include <fstream>

#include <stdio.h> // for printf


#include <armadillo>

//#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

#include <SFML/OpenGL.hpp>

// random numbers:
#include <cstdlib>      // srand() from here?
#include <ctime>        // and rand() from here?

// for delay:
#include <unistd.h>


int const WINDOW_HEIGHT = 200;
int const WINDOW_WIDTH = 450; 
 
sf::Uint8 * pixels = new sf::Uint8[WINDOW_HEIGHT*WINDOW_WIDTH*4];

void fillPixels(arma::mat state);
arma::mat getNextGen(arma::mat state, arma::mat newState); 
arma::mat enlargeMatrix(arma::mat matr, int k); 

arma::mat add_circle(arma::mat state, int radius, int locx, int locy);


int main () {

    //                        _        __ __  
    //        _ __ ___   __ _(_)_ __  / / \ \
    //       | '_ ` _ \ / _` | | '_ \| |   | |
    //       | | | | | | (_| | | | | | |   | |
    //       |_| |_| |_|\__,_|_|_| |_| |   | |
    //                                \_\ /_/ 
    //


    arma::arma_rng::set_seed_random(); 

    neuron n = neuron();

    // rng seed:
    //srand( (unsigned)time(NULL)); 
    //srand(2);   
    // Rng seed:
    //arma::arma_rng::set_seed(2); 
    arma::arma_rng::set_seed_random(); 

    srand( (unsigned)time(NULL)); 

    // size of state/environment:
    const int enlargementFactor = 1;
    
    
    //----------------------------------------
    // Create window instance:
    //----------------------------------------
    sf::RenderWindow window(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "My window");
    glEnable(GL_TEXTURE_2D);
    

    //----------------------------------------
    // initialize state matrix:
    //----------------------------------------
    //arma::mat state = arma::randi<arma::mat>( WINDOW_WIDTH, WINDOW_HEIGHT , arma::distr_param(0, 1) );  
    arma::mat state = arma::zeros<arma::mat>( WINDOW_WIDTH, WINDOW_HEIGHT );  



    arma::mat newState = state;



    // initialize pixels matrix:
    //sf::Uint8* pixels = new sf::Uint8[W*H*4];

    arma::mat enlarged = enlargeMatrix(state, enlargementFactor);
    //sf::Uint8* pixels; 
    fillPixels(enlarged);  
    


    sf::Texture texture;
    texture.create(WINDOW_WIDTH, WINDOW_HEIGHT);

    sf::Sprite sprite(texture);
    texture.update(pixels);

    window.setTitle("Testing");


    // for delay:
    unsigned int delay = 0.04*1e6; // ms


    window.setActive(true);
    texture.update(pixels);
    window.draw(sprite);
    window.display();



    // add some delay after each display:
    usleep(delay);

    int count = 0;


    // initialize the event thing:
    sf::Event event;    

    bool running = true;
    while (running) {


        while (window.pollEvent(event)){
            // sf::Event::Closed = 1 when the close button is presset
            
            // Events:
            switch (event.type) {

                case sf::Event::Closed:     // like an if test
                    running = false;
                    window.close();
                    break;

                case sf::Event::KeyPressed:
                    std::cout << "key pressed" << std::endl;

                case sf::Event::TextEntered:
                    std::cout << static_cast<char>(event.text.unicode) << std::endl;

                default:
                    break;
            }

            if (event.type == sf::Event::Closed) // 
                window.close();
        }

        //----------------------------------------
        // Update state matrix here:
        //----------------------------------------
        // newState = getNextGen(state, newState);



        //----------------------------------------
        // Enlarging here if enabled:
        //----------------------------------------
        // if (enlargementFactor > 1)
        // {
        //     enlarged = enlargeMatrix(newState, enlargementFactor);
        //     pixels = fillPixels(enlarged);
        // }
        // else
        // {
        //     pixels = fillPixels(newState);
        // }

       
        //----------------------------------------
        // Clear and update screen:
        //----------------------------------------
        window.clear(sf::Color::Black);
        
        //----------------------------------------
        // update old state
        //----------------------------------------
        //state = newState;
        //state = arma::randi<arma::mat>( WINDOW_WIDTH, WINDOW_HEIGHT , arma::distr_param(0, 1) );  

        state = add_circle(state, 10, 50, 50);

        
        fillPixels(state);


        texture.update(pixels);
        window.draw(sprite);
        window.display();


        count += 1;
        //std::cout << count << std::endl;

        ////----------------------------------------
        //// Save render to image:
        ////----------------------------------------
        //if (save_img_files)
        //{
        //    auto filename = "images/test" + std::to_string(count) + ".jpg";
        //    texture.copyToImage().saveToFile(filename); 
        //}

        // add some delay:
        usleep(delay);


        //if (count >= 2000) { 
        //    return 0;
        //}

    }


    return 0;
}






void fillPixels(arma::mat state){ 

    int const H = state.n_rows;
    int const W = state.n_cols;

    // Make a matrix:
    //sf::Uint8* pixels = new sf::Uint8[W*H*4];
    int val;

    int ind=0; 
    for (int i=0; i<H; i++) {
        for (int j=0; j<W; j++) {

            val = state(i,j)*200;

            // each pixel is represented by a set of four numbers
            // between 0 and 255
            pixels[ind]   = val;      // R
            pixels[ind+1] = val;      // G
            pixels[ind+2] = val;      // B
            pixels[ind+3] = val;      // a

            ind += 4;
        }
    }

    //return pixels;
}






arma::mat enlargeMatrix(arma::mat matr, int k) {
    /*
    Function that maps each pixel in matr to a k \times k submatrix in a new matrix, 
    i.e. makes every pixel into a larger square.
    */
    
    int const H = matr.n_rows;    // height
    int const W = matr.n_cols;    // width

    // initialize new matrix:
    arma::mat enlarged(H*k, W*k); 

    // markers for where we insert values into the new matrix:
    int rowMarker=0;       //  
    int colMarker=0;

    // base for the submatrix we will insert into the new:
    auto base = arma::ones(k,k);

    for (int i=0; i<H; i++) {
        for (int j=0; j<W; j++) {

            auto val = matr(i,j); 

            // insert values:
            enlarged(arma::span(rowMarker,rowMarker+k-1), 
                     arma::span(colMarker,colMarker+k-1)) = base*val;

            colMarker += k;
            colMarker = colMarker % (k*W);

        }
        rowMarker += k;
        rowMarker = rowMarker % (k*H);
    }

    return enlarged;

}



arma::mat add_circle(arma::mat state, int radius, int locx, int locy)
{
    

    // int ind=0; 
    // int val;
    // for (int i=0; i<WINDOW_HEIGHT; i++) {
    //     for (int j=0; j<WINDOW_WIDTH; j++) {

    //         val = 255;

    //         // each pixel is represented by a set of four numbers
    //         // between 0 and 255
    //         pixels[ind]   = 255;      // R
    //         pixels[ind+1] = 255;      // G
    //         pixels[ind+2] = 255;      // B
    //         pixels[ind+3] = 255;      // a

    //         ind += 4;
    //     }
    // }
    // std::cout << "hore" << std::endl;
    // return state;
};


