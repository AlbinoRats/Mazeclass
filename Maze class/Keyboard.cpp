#include "Keyboard.h"
Keyboard::Keyboard()
{
	for(int i=0;i<323;i++)
	{
		keysHeld[i]=false;
	}
}
void Keyboard:: setKeyState(SDL_Event Event)
{
	if( Event.key.state == SDL_PRESSED ) { 
		keysHeld[Event.key.keysym.sym] =true;
	}
	else if( Event.key.state == SDL_RELEASED ) 
	{
		keysHeld[Event.key.keysym.sym] =false; 
	} 
}
bool Keyboard:: isDown(Uint16 key)
{
	return (keysHeld[key]);

}
bool Keyboard:: isUp(Uint16 key)
{

	return (keysHeld[key]);
}

