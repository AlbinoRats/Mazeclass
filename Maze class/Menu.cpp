#include "Menu.h"
#include "Util.h"
using namespace Util;
Menu::Menu()
{
	menu=NULL;
	menu=Util::loadedImage("res/menu.png");


}
void Menu::render()
{
	//replaces a rect with logo SDL_getVideoSurface() gives you the screen you define in other class
	// -> is . for pointer variables
	SDL_BlitSurface(menu,NULL,SDL_GetVideoSurface(),&makeRect(0,0,menu->w,menu->h));

}
void Menu::update()
{

	counter+=1;
	if(counter>360)
	{
		stateRunning=false;
	}
}