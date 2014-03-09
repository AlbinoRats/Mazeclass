#pragma once
#include "SDL.h"
#include "SDL_image.h"
namespace Util
{
	SDL_Surface*loadedImage(const char *path);
	SDL_Rect makeRect( Sint16 x,Sint16 y,Sint16 width,Sint16 height); 

};