#pragma once
class Board {
public:
	int size;
	//int markedAreas;
	//int detectedBombs;
	std::vector<std::vector<int>> currentBoard;
	std::vector<std::vector<int>> minesBoard;

	Board(int size);
	bool isThereAMine(int x, int y);
	void settleMines(int difficultyLevel); //difficultyLevel (9, 16, 24)
	void checkNeighbouringArea();
};

