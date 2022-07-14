#pragma once
#include "UserInterface.h"
#include "Player.h"
#include "HumanPlayer.h"

class GameHandler {
public:
	void settings(/*Player* player*/);
	void gameLoop();
	void results();
private:
	Player* player; 
	UserInterface userInterface;
	bool handleMove(int x, int y);
};