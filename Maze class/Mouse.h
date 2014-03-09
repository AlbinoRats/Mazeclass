
#pragma once
#include "SDL.h"

class Mouse
{
private:
	bool LButton;
	bool RButton;
	int x;
	int y;
	SDL_Event event;

public:
	Mouse(void);
	~Mouse(void);
	
	void pollMouse(void);
	bool leftButtonHeld(void);
	bool rightButtonHeld(void);

	int getX(void);
	int getY(void);
	void setRButton(bool button);
	void setLButton(bool button);
	bool ifPressed(void);




};