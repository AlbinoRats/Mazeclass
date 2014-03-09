#pragma once
#include "SDL.h"
#include "SDL_image.h"
class Entity
{
public:
	Sint16 x,y,width,height;


private:
	Entity();
	int getX();
	int getY();
	int getWidth();
	int getHeight();
	virtual void render()=0;
	virtual void update()=0;
};