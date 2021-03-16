#include "Game.h"




Game::Game()
{
	this->choice = 0;
	this->playing = true;

}

Game::~Game()
{

}

void Game::initGame()
{
	std::string name;
	std::cout << "Enter your name:  " << std::endl;
	getline(std::cin, name);
	character.initCharacter(name);
}

void Game::mainMenu()
{
	std::cout << " = MAIN MENU = " << std::endl;
	std::cout << "1: Travel" << std::endl;
	std::cout << "2: Show status" << std::endl;
	std::cout << "3: Show levels" << std::endl;
	std::cout << "0: Quit" << std::endl;

	std::cout << "Your choice:  " << std::endl;
	std::cin >> choice;

	switch (choice)
	{
	case 0:
		playing = false;
		break;
	case 2:
		character.showStatus();
		break;
	case 3:
		character.showLevels();
		break;
	
	default:
		break;
	}
}