#pragma once
#include "State.h"
#include "SDL.h"
#include "SDL_image.h"
class Menu : public State
{
private:
	SDL_Surface*menu;
	int counter;


public:
	Menu();

	void render();
	void update();

};