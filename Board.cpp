#include "Board.h"
#include<iostream> 
#include<vector> 
#include<algorithm>

Board::Board(int size) {
	this->size = size;
	std::vector<std::vector<int>> tempBoard(size, std::vector<int>(size));
	currentBoard.assign(tempBoard.begin(), tempBoard.end());
	minesBoard.assign(tempBoard.begin(), tempBoard.end());
}
bool Board::isThereAMine(int x, int y) {
	return (minesBoard[x][y] < 0) ? true : false;
}
void Board::settleMines(int difficultyLevel) {
	if (difficultyLevel == 9) {
		mines = 10;
	}
	else if (difficultyLevel == 16) {
		mines = 40;
	}
	else if (difficultyLevel == 24) {
		mines = 99;
	}

	srand(static_cast<int>(time(nullptr)));
	for (int i = 1; i <= mines; i++) {
		int x = rand() % size;
		int y = rand() % size;
		if (minesBoard.at(x).at(y) == 0)
			minesBoard.at(x).at(y) = -10;
		else
			i--;
	}

	checkNeighbouringArea();
}
void Board::checkNeighbouringArea() {
	std::vector<int> emptyVector(minesBoard.size());

	minesBoard.insert(minesBoard.begin(), emptyVector);
	minesBoard.push_back(emptyVector);

	for (auto& e : minesBoard) {
		e.insert(e.begin(), 0);
		e.push_back(0);
	}

	for (size_t i{ 1 }; i < minesBoard.size() - 1; i++) {
		for (size_t j{ 1 }; j < minesBoard[i].size() - 1; j++) {
			if (minesBoard[i][j] < 0) {

				minesBoard[i - 1][j - 1]++;
				minesBoard[i - 1][j]++;
				minesBoard[i - 1][j + 1]++;
				minesBoard[i][j - 1]++;
				minesBoard[i][j + 1]++;
				minesBoard[i + 1][j - 1]++;
				minesBoard[i + 1][j]++;
				minesBoard[i + 1][j + 1]++;
			}
		}
	}
	minesBoard.erase(minesBoard.begin());
	minesBoard.pop_back();
	for (auto& e : minesBoard) {
		e.erase(e.begin());
		e.pop_back();
	}
}
bool Board::checkWin() {
	return (markedAreas == size * size - mines) ? true : false;
}
//void Board::cheatMinesWeeper() {
//	for (int i = 0; i < size; i++) {
//		for (int j = 0; j < size; j++) {
//			if (minesBoard[i][j] < 0) {
//				std::cout << "B" << " ";
//			}
//			else {
//				std::cout << "0" << " ";
//			}
//		}
//		std::cout << std::endl;
//	}
//}



