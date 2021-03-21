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
	friend std::ostream& operator<<(std::ostream& os, const GameObject& go_);

public:
	GameObject();
	GameObject(std::string name, int sellValue, int buyValue);
	virtual ~GameObject();
	GameObject(const GameObject& go_);

	GameObject& operator=(const GameObject& another)
	{
		if (this != &another)
		{
			this->name = another.name;
			this->sellValue = another.sellValue;
			this->buyValue = another.buyValue;

		}

		return *this;
	}

	void initGameObject(std::string name, int buyValue );

	std::string getName();
	int getSellValue();
	int getBuyValue();

	void setName(std::string name);
	void setSellValue(int sellValue);
	void setBuyValue(int buyValue);
};
