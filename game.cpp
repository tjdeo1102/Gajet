#include "game.h"
#include <iostream>
Game::Game()
	:window{ sf::VideoMode::getDesktopMode(), "Obsolete", sf::Style::Fullscreen}, evnt{}
{
}

Game::~Game()
{
}

void Game::Run()
{
	window.setMouseCursorVisible(false);
	Update();

}

void Game::Update()
{
	while (window.isOpen())
	{
		HandleEvents();
		mouse.Update();
		Draw();
	}
}

void Game::HandleEvents()
{
	while (window.pollEvent(evnt))
	{
		
		if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
		{
			int tmp = menu.Menu();
			if (tmp == 0) window.close();
		} // menu¿« exit±‚¥…


		if (evnt.type == sf::Event::Closed)
		{
			window.close();
		}
	}
}

void Game::Draw()
{
	window.clear();
	window.draw(menu.Exit);
	window.draw(menu.Play);
	window.draw(menu.Option);
	window.draw(mouse.cursor);
	window.display();
}
