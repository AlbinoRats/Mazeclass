#include "Mouse.h"
Mouse::Mouse()
{
	LButton=false;
	RButton=false;
	y=0;
	x=0;

}
Mouse::~Mouse(void)
{

}
void Mouse::pollMouse(void)
{
SDL_GetMouseState(&x,&y);
}
bool Mouse:: leftButtonHeld(void)
{
	return LButton;
}
bool Mouse::rightButtonHeld(void)
{
	return RButton;
}
int Mouse::getX(void)
{
	return x;
}
int Mouse ::getY(void)
{
	return y;
}
void Mouse::setLButton(bool button)
{
	LButton=button;
}
void Mouse::setRButton(bool button)
{
	RButton=button;
}

