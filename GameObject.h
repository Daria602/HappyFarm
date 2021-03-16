#pragma once
#include<iostream>
#include<string>
#include<ctime>
#include<iomanip>
#include<vector>


class GameObject
{
private:
	std::string name;
	int sellValue;
	int buyValue;

public:
	GameObject();
	virtual ~GameObject();
};

