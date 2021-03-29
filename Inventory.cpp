#include "Inventory.h"

Inventory::Inventory()
{
	this->numberItems = 0;
	this->capacity = 10;
	std::vector<GameObject> backpack;
	this->backpack = backpack;

	this->inInventoryMenu = false;
}



Inventory::~Inventory()
{

}

void Inventory::inventoryMenu()
{
	while (getInInventoryMenu())
	{
		std::cout << " = Inventory = " << std::endl;
		std::cout << "1: Show inventory" << std::endl;
		std::cout << "2: Remove from inventory" << std::endl;
		std::cout << "0: Back" << std::endl;

		std::cout << "Your choice:  " << std::endl;
		int choice;
	
		std::cin >> choice;
		switch (choice)
		{
		case 1:
			showInventory();
			break;
		case 2:
			removeFromInventory();
			break;
		case 0:
			this->inInventoryMenu = false;
			break;
		default:
			break;
		}
	}

}

void Inventory::showInventory()
{
	for (size_t i = 0; i < this->backpack.size(); i++)
	{
		std::cout << this->backpack[i] << std::endl;
	}
}

void Inventory::addToInventory(GameObject item)
{
	if (this->numberItems >= this->capacity)
	{
		std::cout << "Backpack is full. Try removing something." << std::endl;
	}
	else
	{
		this->backpack.push_back(item);
		this->numberItems++;
	}
}
void Inventory::removeFromInventory()
{
	std::string nameOfItem;
	std::cout << "Which item would you like to remove?" << std::endl;
	std::cin.ignore();
	std::getline (std::cin, nameOfItem);

	for (size_t i = 0; i < backpack.size(); i++)
	{
		if (this->backpack[i].getName() == nameOfItem)
		{
			this->backpack.erase(this->backpack.begin() + i);
		}
	}
	if (this->backpack.size() == numberItems)
	{
		std::cout << "You don't have this item." << std::endl;
	}
	else
	{
		this->numberItems--;
	}
}
