#include <SFML/graphics.hpp>
#include <SFML/system.hpp>
#include <SFML/window.hpp>
#include <iostream>
#include "cursor.h"
#include "interface.h"

class Game
{
private:
	sf::RenderWindow window;
	sf::Event evnt;
	sf::Clock time;
	Cursor mouse;
	Interface menu;
public:
	friend class Interface;
	Game();
	~Game();
	void Run();
	void Update();
	void HandleEvents();
	void Draw();
};
