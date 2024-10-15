#include <SFML/Graphics.hpp>
#include <iostream>

int main()
{
    // Tworzymy okno SFML o wymiarach 800x600 pikseli i tytule "Test SFML"
    sf::RenderWindow window(sf::VideoMode(800, 600), "Test SFML");

    // Ustawienie koloru tła na czarny
    sf::Color backgroundColor = sf::Color::Black;

    // Tworzymy prostokąt o wymiarach 200x100 pikseli, pozycja (300, 250)
    sf::RectangleShape rectangle(sf::Vector2f(200, 100));
    rectangle.setFillColor(sf::Color::Green);  // Ustawiamy kolor prostokąta na zielony
    rectangle.setPosition(300, 250);

    // Pętla główna
    while (window.isOpen())
    {
        // Obsługa zdarzeń (np. zamknięcie okna)
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
            // Zmiana koloru tła na czerwony po naciśnięciu klawisza "R"
            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::R)
            {
                backgroundColor = sf::Color::Red;
            }
            // Zmiana koloru tła na niebieski po naciśnięciu klawisza "B"
            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::B)
            {
                backgroundColor = sf::Color::Blue;
            }
            // Zmiana koloru tła na czarny po naciśnięciu klawisza "C"
            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::C)
            {
                backgroundColor = sf::Color::Black;
            }
        }

        // Czyszczenie okna (wypełnienie kolorem tła)
        window.clear(backgroundColor);

        // Rysowanie prostokąta
        window.draw(rectangle);

        // Wyświetlenie zawartości okna
        window.display();
    }

    return 0;
}
