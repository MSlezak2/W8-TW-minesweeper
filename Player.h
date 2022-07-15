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
	void settleMines();
	void setDifficultyLevel(int x) ;
	Board getBoard();
	std::string getName();
	void setBoard(Board board);

protected:
	Board board;
	std::string name;
	int difficultyLevel;
};