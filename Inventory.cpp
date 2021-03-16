#include "Inventory.h"


Inventory::Inventory()
{
	this->numberItems = 0;
	this->capacity = 10;
	this->backpack = new GameObject * [capacity];

}

Inventory::~Inventory()
{
	for (size_t i = 0; i < this->numberItems; i++)
	{
		delete this->backpack[i];
	}
	delete[] backpack;

}