#include "Input.h"


Keyboard *Input::keyboard=NULL;
Mouse*Input::mouse=NULL;
Input::Input()
{

	keyboard=new Keyboard;
	mouse= new Mouse;
	quitApp=false;

}
Input::~Input()
{
	delete keyboard;
	delete mouse;
}
bool Input::getQuit()
{
	return quitApp;
}
void Input::poll()
{
	if(SDL_PollEvent(&event))
		{
			switch(event.type)
			{
			case SDL_KEYDOWN:
				{
					keyboard->setKeyState(event);
					break;
				}
			case SDL_KEYUP:
				{
					keyboard->setKeyState(event);
					break;
				}
			case SDL_MOUSEBUTTONDOWN:
				{
					if(event.button.button==SDL_BUTTON_LEFT)
					{
							mouse->setLButton(true);
						
					}
					if(event.button.button==SDL_BUTTON_RIGHT)
					{
						mouse->setRButton(true);
						
					}
					break;
				}
			case SDL_MOUSEBUTTONUP:
				{
					if(event.button.button==SDL_BUTTON_LEFT)
					{
						mouse->setLButton(false);
					}
					if(event.button.button==SDL_BUTTON_RIGHT)
					{
						mouse->setRButton(false);
					}
					break;
				}
			case SDL_QUIT:
				{
				quitApp=true;
				}
			}
	}
}

		