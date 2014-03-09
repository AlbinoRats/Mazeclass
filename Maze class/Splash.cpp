#include "Splash.h"
#include "Util.h"
#include "Menu.h"

using namespace Util;
Splash::Splash()
{
	logo=NULL;
	logo=Util::loadedImage("res/logo.png");
	timer=0;
	nextState=new Menu;
	alpha=SDL_ALPHA_OPAQUE;


}
void Splash::render()
{
	//replaces a rect with logo SDL_getVideoSurface() gives you the screen you define in other class
	// -> is . for pointer variables
	SDL_BlitSurface(logo,NULL,SDL_GetVideoSurface(),&makeRect(0,0,logo->w,logo->h));

}
void Splash::update()
{

	timer+=1;
	if(timer>3600)
	{
		stateRunning=false;
	}
	else
	{
		if( alpha < SDL_ALPHA_OPAQUE ) 
		{  
			alpha += 5; 
		}
	}
	if(Input::mouse->leftButtonHeld())
	{
		stateRunning=false;
	}

	
}
