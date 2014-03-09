#pragma once
#include <SDL.h>
class State
{
protected:
	State*nextState;
	bool stateRunning;
public:
	State();
	bool isFinished();
	State*getNextState();
	//virtual: prepares the compiler to tell it that you are going to inherit this class
	// and you want to do the code for these in a different class
	//= 0 makes it a pure vitual, if omitted youa re required to do some code in the state class
	//with render and update. = 0 tells that there is no code int eh cpp for these functions
	virtual void render()=0;
	virtual void update()=0;
};
