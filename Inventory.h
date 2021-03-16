#pragma once
#include "GameObject.h"


class Inventory
{
private:
	int numberItems;
	int capacity;
	GameObject** backpack;

public:
	Inventory();
	virtual ~Inventory();

	void expand();
	void initialize();
	void addToInventory(const GameObject& item);
	void removeFromInventory(std::string nameOfItem);

	
};

