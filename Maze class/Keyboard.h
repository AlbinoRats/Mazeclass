#pragma once
#include "SDL.h"

class Keyboard
{
private:
	bool keysHeld[323];
public:
	
	Keyboard();
	//sets keyHeld accessble to public
	void setKeyState(SDL_Event Event); 
	bool isDown(Uint16); 
	bool isUp(Uint16 key);



};