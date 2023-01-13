#include <iostream>
#include <fstream>

#include <armadillo>

#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/OpenGL.hpp>
#include <GL/glut.h>
 

int main () {
    
    // Armadillo works:
    arma::vec V = arma::ones(5);
    std::cout << V << std::endl;


    // But SFML doesn't work:
    sf::Texture texture;


    return 0;
}




