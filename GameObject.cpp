#include "GameObject.h"



GameObject::GameObject()
{
	this->name = "NONE";
	this->sellValue = 0;
	this->buyValue = 0;

}

GameObject::GameObject(std::string name, int sellValue, int buyValue)
{
	this->name = name;
	this->sellValue = sellValue;
	this->buyValue = buyValue;
}

GameObject::~GameObject()
{

}
//cc
GameObject::GameObject(const GameObject& go_)
{
	this->name = go_.name;
	this->sellValue = go_.sellValue;
	this->buyValue = go_.buyValue;
}


void GameObject::initGameObject(std::string name, int buyValue)
{
	this->name = name;
	this->buyValue = buyValue;
	this->sellValue = static_cast<int>(buyValue/2);
}


std::string GameObject::getName()
{
	return this->name;
}

int GameObject::getSellValue()
{
	return this->sellValue;
}
int GameObject::getBuyValue()
{
	return this->buyValue;
}

void GameObject::setName(std::string name)
{
	this->name = name;
}
void GameObject::setSellValue(int sellValue)
{
	this->sellValue = sellValue;
}
void GameObject::setBuyValue(int buyValue)
{
	this->buyValue = buyValue;
}
