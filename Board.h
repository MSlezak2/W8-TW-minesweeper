#pragma once
#include<vector>

class Board {
public:

	Board();
	Board(int size);
	bool isThereAMine(int x, int y);
	void settleMines(int difficultyLevel); //difficultyLevel (9, 16, 24)
	bool checkWin();
	bool displayAreas(int x, int y);
	void cheatMinesWeeper();
	int howManyLeftToReveal();
	int getSize();
	std::vector<std::vector<int>> getCurrentBoard();

private:
	std::vector<std::vector<int>> currentBoard;
	std::vector<std::vector<int>> minesBoard;
	int size{};
	int mines{};

	void checkNeighbouringArea();
	bool checkingRange(int x, int y);
};

