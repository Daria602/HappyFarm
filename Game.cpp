#include "Game.h"




Game::Game()
{
	this->choice = 0;
	this->playing = true;

	GameObject wateringCan, pickaxe, knife, fishingRod;
	wateringCan.initGameObject("Watering can", 50);
	pickaxe.initGameObject("Pickaxe", 50);
	knife.initGameObject("Knife", 50);
	fishingRod.initGameObject("Fishing rod", 50);
	this->inventory.addToInventory(wateringCan);
	this->inventory.addToInventory(pickaxe);
	this->inventory.addToInventory(knife);
	this->inventory.addToInventory(fishingRod);

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
	std::cout << "4: Inventory" << std::endl;
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
	case 4:
		inventory.setToTrue();
		inventory.inventoryMenu();
		break;
	
	default:
		break;
	}
}
