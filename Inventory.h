#pragma once
#include "GameObject.h"


class Inventory
{
private:
	int numberItems;
	int capacity;
	std::vector<GameObject> backpack;

	bool inInventoryMenu;

public:
	Inventory();
	virtual ~Inventory();


	inline bool getInInventoryMenu() const { return this->inInventoryMenu; }
	void setToTrue() { this->inInventoryMenu = true;}
	void inventoryMenu();

	void addToInventory(GameObject item);
	void removeFromInventory();
	void showInventory();
	
};

