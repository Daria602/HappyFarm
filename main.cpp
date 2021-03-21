#include "Game.h"
std::ostream& operator<<(std::ostream& os, const GameObject& go_)
{
	os << go_.name;
	return os;
}
int main()
{
	srand(time(NULL));

	Game game;

	game.initGame();

	
	while (game.getPlaying())
	{
		game.mainMenu();

	}
}
