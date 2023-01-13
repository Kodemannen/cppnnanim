#include "neuron.hpp"
// #include "coordinates.hpp"
// #include "armastuff.hpp"

#include <iostream>
#include <fstream>

#include <stdio.h>  // for printf
#include <math.h>   // sin and cos
#include <vector>
#include <armadillo>

#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

// #include <GL/glut.h>
#include <SFML/OpenGL.hpp>

// random numbers:
#include <cstdlib>      // srand() from here?
#include <ctime>        // and rand() from here?

// for delay:
#include <unistd.h>

// #define PI 3.14159265


int const WINDOW_HEIGHT = 1000;
int const WINDOW_WIDTH = 1000; 
 
int main () {

    
    arma::vec V = arma::ones(5);
    std::cout << V << std::endl;

    neuron n = neuron();

    sf::Uint8 * pixels = new sf::Uint8[WINDOW_HEIGHT*WINDOW_WIDTH*4];
   // sf::Texture texture;

    return 0;
}




//  int main () {
//  
//      //                        _        __ __  
//      //        _ __ ___   __ _(_)_ __  / / \ \
//      //       | '_ ` _ \ / _` | | '_ \| |   | |
//      //       | | | | | | (_| | | | | | |   | |
//      //       |_| |_| |_|\__,_|_|_| |_| |   | |
//      //                                \_\ /_/ 
//      //
//      
//      arma::vec V = arma::ones(5);
//      std::cout << V << std::endl;
//  
//  
//      // Dette funker visst ikke:
//      // arma::arma_rng::set_seed_random(); 
//      
//      
//      //          sf::Texture texture;
//      //          texture.create(WINDOW_WIDTH, WINDOW_HEIGHT);
//      
//  
//      //          sf::Sprite sprite(texture);
//      //          texture.update(pixels);
//  
//      //          window.setTitle("Testing");
//  
//  
//      neuron n = neuron();
//  
//      // rng seed:
//      //srand( (unsigned)time(NULL)); 
//      //srand(2);   
//      // Rng seed:
//      //arma::arma_rng::set_seed(2); 
//      // arma::arma_rng::set_seed_random(); 
//  
//      //          srand( (unsigned)time(NULL)); 
//  
//      // size of state/environment:
//      const int enlargementFactor = 1;
//      //          
//      //          
//      //----------------------------------------
//      // Create window instance:
//      //----------------------------------------
//      // sf::RenderWindow window(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "My window");
//      // glEnable(GL_TEXTURE_2D);
//      //          
//  
//      //          //----------------------------------------
//      //          // initialize state matrix:
//      //          //----------------------------------------
//      //          // arma::mat state = arma::randi<arma::mat>(WINDOW_WIDTH, WINDOW_HEIGHT, 
//      //          //                                          arma::distr_param(0, 255) );  
//  
//      //          arma::mat state = arma::zeros<arma::mat>(WINDOW_WIDTH, WINDOW_HEIGHT);  
//  
//      //          sf::Uint8 * pixels = new sf::Uint8[WINDOW_HEIGHT*WINDOW_WIDTH*4];
//      //          
//  
//  
//  
//  
//      //          sf::Texture texture;
//      //          texture.create(WINDOW_WIDTH, WINDOW_HEIGHT);
//  
//      //          sf::Sprite sprite(texture);
//      //          texture.update(pixels);
//  
//      //          window.setTitle("Testing");
//  
//  
//      //          // for delay:
//      //          unsigned int delay = 0.04*1e6; // ms
//  
//  
//      //          window.setActive(true);
//      //          texture.update(pixels);
//      //          window.draw(sprite);
//      //          window.display();
//  
//  
//  
//      //          // add some delay after each display:
//      //          usleep(delay);
//  
//      //          int count = 0;
//  
//  
//      //          // initialize the event thing:
//      //          sf::Event event;    
//  
//      //          bool running = true;
//      //          while (running) {
//  
//  
//      //              while (window.pollEvent(event)){
//      //                  // sf::Event::Closed = 1 when the close button is presset
//      //                  
//      //                  // Events:
//      //                  switch (event.type) {
//  
//      //                      case sf::Event::Closed:     // like an if test
//      //                          running = false;
//      //                          window.close();
//      //                          break;
//  
//      //                      case sf::Event::KeyPressed:
//      //                          std::cout << "key pressed" << std::endl;
//  
//      //                      case sf::Event::TextEntered:
//      //                          std::cout << static_cast<char>(event.text.unicode) << std::endl;
//  
//      //                      default:
//      //                          break;
//      //                  }
//  
//      //                  if (event.type == sf::Event::Closed) // 
//      //                      window.close();
//      //              }
//  
//      //              //----------------------------------------
//      //              // Update state matrix here:
//      //              //----------------------------------------
//      //              // newState = getNextGen(state, newState);
//  
//  
//  
//      //              //----------------------------------------
//      //              // Enlarging here if enabled:
//      //              //----------------------------------------
//      //              // if (enlargementFactor > 1)
//      //              // {
//      //              //     enlarged = enlargeMatrix(newState, enlargementFactor);
//      //              //     pixels = fillPixelsWithArmaValues(enlarged);
//      //              // }
//      //              // else
//      //              // {
//      //              //     pixels = fillPixelsWithArmaValues(newState);
//      //              // }
//  
//      //             
//      //              //----------------------------------------
//      //              // Clear and update screen:
//      //              //----------------------------------------
//      //              window.clear(sf::Color::Black);
//      //              
//      //              //----------------------------------------
//      //              // update old state
//      //              //----------------------------------------
//      //              //state = newState;
//      //              
//  
//      //              state = add_circle(state, 50, 100, 50);
//  
//  
//  
//      //              int n_rows = state.n_rows;
//      //              int n_cols = state.n_cols;
//  
//  
//  
//      //              
//      //              pixels = fillPixelsWithArmaValues(state, pixels);
//  
//  
//      //              texture.update(pixels);
//      //              window.draw(sprite);
//      //              window.display();
//  
//  
//      //              count += 1;
//  
//  
//      //              ////----------------------------------------
//      //              //// Save render to image:
//      //              ////----------------------------------------
//      //              //if (save_img_files)
//      //              //{
//      //              //    auto filename = "images/test" + std::to_string(count) + ".jpg";
//      //              //    texture.copyToImage().saveToFile(filename); 
//      //              //}
//  
//      //              // add some delay:
//      //              usleep(delay);
//  
//  
//      //              //if (count >= 2000) { 
//      //              //    return 0;
//      //              //}
//  
//      //              }
//  
//  
//      return 0;
//  }
//  
//  
//  
