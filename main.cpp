#include "NewGarphics.h"

int main()
{
	NewGarphics game;
	
	if (!game.ConstructConsole(240, 160, 3, 3))
		game.Loop();

	return 0;
}