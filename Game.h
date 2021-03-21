#pragma once
#include "Character.h"
class Game
{
private:
	int choice;
	bool playing;

	Character character;
	Inventory inventory;

public:
	Game();
	virtual ~Game();

	inline bool getPlaying() const { return this->playing; }

	//functions

	void initGame();

	void mainMenu();
};


