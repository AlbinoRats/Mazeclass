#pragma once
#include "State.h"
#include "SDL.h"
#include "SDL_image.h"
#include "Input.h"
//: public = inheritance
// 3 types public, private, and protected
class Splash: public State
{
private:
	SDL_Surface*logo;
	int timer;
	Uint8 alpha;
public:
	Splash();
	void render();
	void update();
	bool fadeActive(bool stateRunning);
	

};