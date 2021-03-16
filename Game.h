#pragma once
#include "Character.h"
class Game
{
private:
	int choice;
	bool playing;

	Character character;

public:
	Game();
	virtual ~Game();

	//accessors

	inline bool getPlaying() const { return this->playing; }

	//functions

	void initGame();

	void mainMenu();
};

