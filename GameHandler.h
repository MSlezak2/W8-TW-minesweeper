#pragma once
#include "UserInterface.h"
#include "Player.h"
#include "HumanPlayer.h"

class GameHandler {
public:
	void settings();
	void gameLoop();

	void displayBoard();

private:
	Player* player; 
	UserInterface userInterface;
	
	bool handleMove(int x, int y);
};