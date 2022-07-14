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
	Board getBoard();
	void setBoard(Board board);
	void settleMines();

protected:
	Board board;
	std::string name;
	int difficultyLevel;
};