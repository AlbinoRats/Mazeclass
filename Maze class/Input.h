#pragma once
#include "SDL.h"
#include"Keyboard.h"
#include"Mouse.h"
class Input
{
private:
	SDL_Event event;
public:
	Input();
	~Input();
	static Keyboard *keyboard;
	static Mouse *mouse;
	void poll();
	bool quitApp;
	//getter = return what that value is
	bool getQuit();


};