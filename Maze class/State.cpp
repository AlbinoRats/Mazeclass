#include "State.h"
State::State()
{

	stateRunning=true;
	nextState=NULL;

}
bool State::isFinished()
{

	return !stateRunning;
}
State*State::getNextState()
{
	return nextState;
}