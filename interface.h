#pragma once
#include <SFML/graphics.hpp>
#include <SFML/system.hpp>
#include <SFML/window.hpp>

class Interface 
{
private:
	sf::Texture PlayImage;
	sf::Texture OptionImage;
	sf::Texture ExitImage;
	sf::RectangleShape Play{ sf::Vector2f(96.0f, 32.0f) };
	sf::RectangleShape Option{ sf::Vector2f(96.0f, 32.0f) };
	sf::RectangleShape Exit{ sf::Vector2f(96.0f, 32.0f) };
public:
	friend class Game;

	Interface();
	int Menu();
};