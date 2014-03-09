#include "GameManager.h"


//constructors are code that gets called when you craete the object
//deconstructors are code that gets called when you destroy the object
//[class name]::[function name]()
GameManager::GameManager(int height,int width)
{
	//initialize variable here, declare in header
	screenHeight = height; 
	screenWidth = width;
	GameRunning=true;
	SDL_Init(SDL_INIT_EVERYTHING);
	screen=NULL;
	screen=SDL_SetVideoMode(screenHeight,screenWidth,32,SDL_SWSURFACE);
	input=new Input;
	currentState=NULL;
	currentState= new Splash;
	cap.start();
	FPS_CAP=60;

}
void GameManager::MainLoop()
{
	SDL_FillRect(SDL_GetVideoSurface(),NULL,0xff000000);
	while(GameRunning==true)
	{
		input->poll();
		if( Input::keyboard->isDown(SDLK_ESCAPE)||input->getQuit() ) 
		{
			GameRunning = false; 
		}
		if(currentState!=NULL)
		{
		currentState->update();


		currentState->render();

		SDL_Flip(SDL_GetVideoSurface());
		
		if(currentState->isFinished())
		{
			State*nextState=currentState->getNextState();
			delete currentState;
			currentState=NULL;
			currentState = nextState; 
			nextState = NULL;
		}
		}
			
	}
	if( cap.get_ticks() < 1000 / FPS_CAP )
	{
		//Sleep the remaining frame time 
		SDL_Delay( ( 1000 / FPS_CAP ) - cap.get_ticks() ); 
	}




}
GameManager::~GameManager()
{
		

	SDL_FreeSurface(screen);
	SDL_Quit();
	delete input;



}
