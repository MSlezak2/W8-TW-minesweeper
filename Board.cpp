#pragma once
#include "Board.h"
#include<iostream> 
#include<vector> 
#include<algorithm> 
class Board {
public:
	int size;
	//int markedAreas;
	//int detectedBombs;
	std::vector<std::vector<int>> currentBoard;
	std::vector<std::vector<int>> minesBoard;
	Board(int size) {
		this->size = size;
		std::vector<std::vector<int>> tempBoard(size, std::vector<int>(size));
		currentBoard.assign(tempBoard.begin(), tempBoard.end());
		minesBoard.assign(tempBoard.begin(), tempBoard.end());
	}
	bool isThereAMine(int x, int y) {
		return (minesBoard[x][y] == -1) ? true : false;
	}
};

