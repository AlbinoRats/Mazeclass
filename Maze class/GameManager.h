#pragma once
#include "SDL.h"
#include "Input.h"
#include "Splash.h"
#include "Timer.h"
#include "Menu.h"
class GameManager
{
	//keep variables in private
	private: 
	int screenHeight,screenWidth;
	Input* input;
	bool GameRunning;
	SDL_Surface *screen;
	State*currentState;
	Timer cap;
	int FPS_CAP;
	
	//functions in public
    public: 
	GameManager(int width,int height);
	~GameManager();
	void MainLoop();

	
	

	
};

