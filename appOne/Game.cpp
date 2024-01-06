#include "Game.h"
#include "framework.h"
#include "graphic.h"
#include "input.h"
#include "mathUtil.h"

bool Game::Initialize()
{
	window(1920,1080);
	return true;
}
void Game::RunLoop()
{
	while (notQuit)
	{
		ProcessInput();
		UpdateGame();
		GenerateOutput();
	}
}
void Game::Shutdown()
{
}
void Game::ProcessInput()
{
}
void Game::UpdateGame()
{
	
}
void Game::GenerateOutput()
{
	clear(64, 128, 255);
	
	Point p;
	p.x = Width/2;
	p.y = Height/2;
	// mathAxis(100);
	strokeWeight(50);
	point(p.x, p.y);

}
