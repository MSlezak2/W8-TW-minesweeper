#include "Board.h"
#include<iostream> 
#include<vector> 
#include<algorithm>

Board::Board(int size) {
	this->size = size;
	std::vector<std::vector<int>> tempBoard(size, std::vector<int>(size));
	minesBoard.assign(tempBoard.begin(), tempBoard.end());
	std::vector<int>row(size, 9);
	for (int i = 0; i < size; i++) {
		currentBoard.push_back(row);
	}
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
bool Board::displayAreas(int x, int y) {
	if (isThereAMine(x, y)) {
		currentBoard[x][y] = -1;
		return false;
	}
	if (!isThereAMine(x,y)) {
		if (minesBoard[x][y] == 0 &&  currentBoard[x][y] == 9) {
			currentBoard[x][y] = minesBoard[x][y];
			for (int i = -1; i < 2; i++) {
				for (int j = -1; j < 2; j++) {
					if (checkingRange(x + i, y + j)&&(i!=0 || j!=0)) {
						displayAreas(x + i, y + j);
						//std::cout << x + i << " " << y + j << " ";
						//std::cout << checkingRange(x + i, y + j);
						//std::cout << std::endl;
						//system("pause");
					}
				}
			}
			/*if (checkingRange(x - 1, y - 1)) 
				displayAreas(x - 1, y - 1);
			
			if (checkingRange(x - 1, y))
			displayAreas(x-1, y);
			if (checkingRange(x - 1, y + 1))
			displayAreas(x-1, y+1);
			if (checkingRange(x , y - 1))
			displayAreas(x, y-1);
			if (checkingRange(x , y + 1))
			displayAreas(x, y+1);
			if (checkingRange(x + 1, y - 1))
			displayAreas(x+1, y-1);
			if (checkingRange(x + 1, y ))
			displayAreas(x+1, y);
			if (checkingRange(x + 1, y + 1))
			displayAreas(x+1, y+1);*/
		}
		else {
			currentBoard[x][y] = minesBoard[x][y]; 
			markedAreas++;
		}
		return true;
	}
} // zamkniecie funkcji
bool Board::checkingRange(int x, int y) {
	if (x >= 0 && y >= 0 && x < currentBoard.size() && y < currentBoard.size()) {
		return true;
	}
	else {
		return false;
	}
}
// X - wywolanie, result + czas
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



