// File: src/main.cpp
#include "Neuron.hpp"

#include <SFML/Graphics.hpp>
#include <vector>
#include <iostream>
#include <ostream>

// ['#dcdfe7', '#cc517a', '#668e3d', '#c57339', '#2d539e', '#7759b4', '#3f83a6', '#33374c', '#8389a3', '#cc3768', '#598030', '#b6662d', '#22478e', '#6845ad', '#327698', '#262a3f']

// const background_color = sf::



// function that converts std::vector to sf::Vector2f
sf::Vector2f toVector2f(std::vector<double> vec) {
    return sf::Vector2f(vec[0], vec[1]);
}

int main()
{
    sf::Vector2f pos1(100.f, 50.f);
    sf::Vector2f pos2(300.f, 40.f);
    std::vector<Neuron> Neurons;

    // circles.emplace_back(50.f, sf::Color(0, 0, 0), sf::Color(98, 163, 15), 5.f, pos1);
    // circles.emplace_back(75.f, sf::Color(0, 0, 0), sf::Color(98, 163, 15), 10.f, pos2);
    // std::cout << pos1 << std::endl;



    Neuron n0 (0);
    // n0.setRadius(50.f);
    n0.setPosition(100, 100);
    n0.getPosition();
    n0.setMembranePotential(70.f);
    n0.setThreshold(0.f);
    n0.setShape(50.f, sf::Color::Green, sf::Color::Red, 5.f, pos1);

    // std::cout << n0.getPosition() << std::endl;

    


    // Neuron n3 (50.f, pos1, 0.f, 0.f);
    // Neuron n3(pos1);

    // n.setPosition(100, 50);


    sf::RenderWindow window(sf::VideoMode(200, 200), "Circles");
    //window.setClearColor(sf::Color(98, 163, 15));
    // window.setClearColor(sf::Color::Blue);

    // How can I change background color?


    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // Set background color:
        int grey = 160;
        window.clear(sf::Color(grey, grey, grey));

        window.draw(n0.getShape());

        // for (cell& cell : neurons)
        // {
        //     window.draw(Neuron.getShape());

        // }

        // for (n& n : circles)
        // {
        //     window.draw(n.getShape());

        // }

        window.display();
    }

    return 0;
}





// int main()
// {
//     sf::RenderWindow window(sf::VideoMode(200, 200), "Circles");

//     std::vector<Neuron> circles;
//     circles.emplace_back(50.f, sf::Color::Green, sf::Color::Red, 5.f);
//     circles.emplace_back(100.f, sf::Color::Blue, sf::Color::Yellow, 10.f);
//     circles.emplace_back(75.f, sf::Color::Red, sf::Color::Green, 7.5f);

//     while (window.isOpen())
//     {
//         sf::Event event;
//         while (window.pollEvent(event))
//         {
//             if (event.type == sf::Event::Closed)
//                 window.close();
//         }
//         window.clear();
//         for (const Neuron& Neuron : circles)
//         {
//             window.draw(Neuron.shape);
//         }
//         window.display();
//     }

//     return 0;
// }






// #include <SFML/Graphics.hpp>

// int main()
// {
//     sf::RenderWindow window(sf::VideoMode(200, 200), "Neuron");
//     sf::CircleShape shape(100.f);
//     shape.setFillColor(sf::Color(0,0,0));
//     shape.setOutlineThickness(5.f);
//     shape.setOutlineColor(sf::Color(255,0,0));

//     while (window.isOpen())
//     {
//         sf::Event event;
//         while (window.pollEvent(event))
//         {
//             if (event.type == sf::Event::Closed)
//                 window.close();
//         }

//         window.clear();
//         window.draw(shape);
//         window.display();
//     }

//     return 0;
// }
