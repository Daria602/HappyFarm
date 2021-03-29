#pragma once
#include "Inventory.h"




class Character
{
private:

	double xPos;
	double yPos;

	std::string name;
	int hp;
	int maxHp;
	int stamina;
	int maxStamina;
	int luck;
	int money;

	int farmingLvl;
	int miningLvl;
	int combatLvl;
	int fishingLvl;

	int expFarming;
	int nextExpFarming;

	int expMining;
	int nextExpMining;

	int expCombat;
	int nextExpCombat;

	int expFishing;
	int nextExpFishing;
	
	int nextLevel(int level);

public:
	Character();
	virtual ~Character();

	//functions
	void initCharacter(std::string name);
	void showStatus();
	void showLevels();
};

