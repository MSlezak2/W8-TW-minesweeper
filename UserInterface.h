#pragma once
#include <string>
#include <ctime>
#include <vector>
#include "Board.h"

class UserInterface {
public:
	void welcomeScreen();
	int getUserMenuChoice();
	void mainMenu();
	void help();
	void displayWelcomeSign();
	void displayEndGameSign();
	void displayGameWonSign();
	int chooseDifficultyLevel();
	void displayResult(std::string name, clock_t start, clock_t stop);    // kto wygral z gameHndler + czas rozgrywki 
	void gameMode();
	void displayBoard(Board board);
	static int takeNumber(int rangeStart, int rangeEnd);
	static char takeLetter(char rangeStart, char rangeEnd);
	std::vector<int> chooseCoordinate(int difficultLevel);
	static int exitChoice(std::string x);

private:
	int choice;   //  Menu :: 1 start . 2 help 3. exit
	bool mode;   // 0 - human  1 -computer
	void printHorizontalLine(int boardSize);
};
