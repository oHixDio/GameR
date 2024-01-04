#include "libOne.h"
#include "Game.h"

void gmain(void)
{
	Game game;
	bool success = game.Initialize();
	if (success)
	{
		game.RunLoop();
	}
	game.Shutdown();
}

