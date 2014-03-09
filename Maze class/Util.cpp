#include "Util.h"

SDL_Surface* Util::loadedImage(const char*path)
{
	//Image tahts loaded
	SDL_Surface*loadedImage=NULL;
	//optimized the image that will be used
	SDL_Surface*optimizedImage=NULL;
	//loads the image using sdl_image
	loadedImage=IMG_Load(path);
	// if image is loaded
	if(loadedImage!=NULL)
	{
		//create an optimized image
		optimizedImage=SDL_DisplayFormat(loadedImage);
		//free the old image
		SDL_FreeSurface(loadedImage);
	}
	else
	{
		printf("Error: Could Not load image from \b %s\n ",path);
	}
	//return the optimized image
	return optimizedImage;

}
SDL_Rect Util::makeRect(Sint16 x, Sint16 y, Sint16 width, Sint16 height) 
{ 
	SDL_Rect temp = { x , y , width , height }; 
	return temp; 
}