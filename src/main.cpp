// File: src/main.cpp
#include "Circle.hpp"

#include <SFML/Graphics.hpp>
#include <vector>

int main()
{
    sf::Vector2f pos1(100.f, 50.f);
    sf::Vector2f pos2(300.f, 40.f);
    std::vector<Circle> circles;
    circles.emplace_back(50.f, sf::Color::Green, sf::Color::Red, 5.f, pos1);

    circles.emplace_back(75.f, sf::Color::Blue, sf::Color::Yellow, 10.f, pos2);

    sf::RenderWindow window(sf::VideoMode(200, 200), "Circles");

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        for (Circle& circle : circles)
        {
            window.draw(circle.getShape());
        }
        window.display();
    }

    return 0;
}





// int main()
// {
//     sf::RenderWindow window(sf::VideoMode(200, 200), "Circles");

//     std::vector<Circle> circles;
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
//         for (const Circle& circle : circles)
//         {
//             window.draw(circle.shape);
//         }
//         window.display();
//     }

//     return 0;
// }






// #include <SFML/Graphics.hpp>

// int main()
// {
//     sf::RenderWindow window(sf::VideoMode(200, 200), "Circle");
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
