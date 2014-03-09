#pragma once
#include "State.h"
class Game:public State
{
private:
	SDL_Surface*game;
	int count;

public:
	Game();
	

	void render();
	void update();

};