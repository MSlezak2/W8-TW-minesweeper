#include <iostream>
#include <string>
//#include "Player.h"
//#include "UserInterface.h"
#include "GameHandler.h"

int main() {

	//UserInterface obj;
	//obj.displayBoard();

	//Player* player = nullptr;

	GameHandler gameHandler;
	gameHandler.settings();
	gameHandler.gameLoop();

}