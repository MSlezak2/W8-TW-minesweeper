#pragma once
#include "GameHandler.h"
#include "UserInterface.h"
#include <vector>
//#include "Board.h"

class Player {

public:
	virtual std::vector <int> chooseCoordinates() = 0;
	void setDifficultyLevel(int x) ;

protected:
	//board::Board;
	std::string name;
	int difficultyLevel;
};