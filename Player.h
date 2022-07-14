#pragma once
//#include "GameHandler.h"
//#include "UserInterface.h"
#include <vector>
#include <iostream>
#include "Board.h"

class Player {

public:
	Player();
	virtual std::vector <int> chooseCoordinates() = 0;
	void setDifficultyLevel(int x) ;

protected:
	Board board;
	std::string name;
	int difficultyLevel;
};