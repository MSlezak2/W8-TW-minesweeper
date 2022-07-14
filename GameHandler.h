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
	Player* player; // TODO: Make sure if there's no other (more elegant) way to do it
	UserInterface userInterface;
};