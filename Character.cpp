#include "Character.h"


Character::Character()
{
	this->xPos = 0.0;
	this->yPos = 0.0;

	this->name = "NONE";
	this->hp = 0;
	this->maxHp = 0;
	this->stamina = 0;
	this->maxStamina = 0;
	this->luck = 0;
	this->money = 0;

	this->farmingLvl = 0;
	this->miningLvl = 0;
	this->combatLvl = 0;
	this->fishingLvl = 0;

	this->expFarming = 0;
	this->nextExpFarming = 0;

	this->expMining = 0;
	this->nextExpMining = 0;

	this->expCombat = 0;
	this->nextExpCombat = 0;

	this->expFishing = 0;
	this->nextExpFishing = 0;

}

Character::~Character()
{

}

int Character::nextLevel(int level)
{
	int result;

	result = static_cast<int>((50 / 3) * ((pow(level, 3) - 6 * pow(level, 2)) + 17 * level - 12)) + 100;

	return result;
}

void Character::initCharacter(std::string name)
{
	this->xPos = 0.0;
	this->yPos = 0.0;

	this->name = name;
	this->hp = 10;
	this->maxHp = 10;
	this->stamina = 10;
	this->maxStamina = 10;
	this->luck = 1;
	this->money = 10;

	this->farmingLvl = 0;
	this->miningLvl = 0;
	this->combatLvl = 0;
	this->fishingLvl = 0;

	this->expFarming = 0;
	this->nextExpFarming = nextLevel(expFarming);

	this->expMining = 0;
	this->nextExpMining = nextLevel(expMining);

	this->expCombat = 0;
	this->nextExpCombat = nextLevel(expCombat);

	this->expFishing = 0;
	this->nextExpFishing = nextLevel(expFishing);

}

void Character::showStatus()
{
	std::cout << std::endl;
	std::cout << " = STATUS = " << std::endl;
	std::cout << this->name << std::endl;
	std::cout << "HP: " << this->hp <<"/"<< this->maxHp << std::endl;
	std::cout << "Stamina: " << this->stamina << "/" << this->maxStamina << std::endl;
	std::cout << "Money: " << this->money << std::endl;
	std::cout << std::endl;


}

void Character::showLevels()
{
	std::cout << std::endl;
	std::cout << " = LEVELS = " << std::endl;
	std::cout << "Farming: " << this->farmingLvl << std::endl;
	std::cout << "Mining: " << this->miningLvl << std::endl;
	std::cout << "Combat: " << this->combatLvl << std::endl;
	std::cout << "Fishing: " << this->fishingLvl << std::endl;
	std::cout << std::endl;
}






