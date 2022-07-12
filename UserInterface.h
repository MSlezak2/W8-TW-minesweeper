#pragma once
#include <string>
class UserInterface {
public:
	void welcomeScreen();
	int getUserMenuChoice();
	void mainMenu(int choice);
	void help();
	void displayWelcomeSign();
	void displayEndGameSign();
	int chooseDifficultyLevel();
	void displayResult(std:: string name);    // kto wygral z gameHndler + czas rozgrywki 
	int getDifficultyLevel();
	static int takeNumber(int rangeStart, int rangeEnd);
	static char takeLetter(char rangeStart, char rangeEnd);

private:
	int difficultyLevel;
	int choice;
};