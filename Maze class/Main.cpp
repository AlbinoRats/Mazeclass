#include "GameManager.h"
#include "SDL.h"
int main( int argc, char* args[])
{
	//creates a game manager variable, sends 800,600 as H and W
	GameManager GM(800,600);
	GM.MainLoop();
	return 0;

}