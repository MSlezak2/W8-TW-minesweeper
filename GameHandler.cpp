#include "GameHandler.h"
#include <windows.h>

void GameHandler::settings(/*Player* player*/) {
	
	userInterface.displayWelcomeSign();
	userInterface.welcomeScreen();
	userInterface.mainMenu();
	int difficultyLevel = userInterface.chooseDifficultyLevel();
	player = new HumanPlayer(difficultyLevel);
}

void GameHandler::gameLoop() {

	std::vector<int> chosenCoordinates;
	int x, y;
	int whichMove = 0;
	bool steppedOnAMine = false;

	// wyswietlanie tablicy
	system("cls");
	userInterface.displayBoard(player->getBoard());
	std::cout << std::endl;
	player->getBoard().cheatMinesWeeper();

	clock_t start = clock();

	while ((!player->getBoard().checkWin() || whichMove == 0) && !steppedOnAMine) {

		// pobranie wspolrzednych od uzytkownika
		chosenCoordinates = player->chooseCoordinates();
		x = chosenCoordinates[0];
		y = chosenCoordinates[1];

		// pierwszy ruch?
		if (++whichMove == 1) {
			do {
				player->settleMines(); // rozlosowanie min, ustalenie ilosci min w sasiedztwie
			} while ( player->getBoard().isThereAMine(x, y) );
			steppedOnAMine = handleMove(x, y);
		} else {
			// sprawdzenie czy weszlismy na mine
			steppedOnAMine = handleMove(x, y);
		}

		// wyswietlanie tablicy
		system("cls");
		userInterface.displayBoard(player->getBoard());
		std::cout << std::endl;
		player->getBoard().cheatMinesWeeper();
	}

	if (steppedOnAMine) {
		Sleep(3000);
		userInterface.displayEndGameSign();
	} else {
		clock_t stop = clock();
		Sleep(3000);
		userInterface.displayResult(player->getName(), start, stop);
	}
}

bool GameHandler::handleMove(int x, int y) {
	
	bool steppedOnAMine;
	Board tempBoard = player->getBoard();
	steppedOnAMine = tempBoard.displayAreas(x, y);
	player->setBoard(tempBoard);

	return steppedOnAMine;
}

void GameHandler::results() {
	//UserInterface.displayResults();
}

