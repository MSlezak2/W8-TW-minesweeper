#include "GameHandler.h"
#include <windows.h>

void GameHandler::settings() {
	
	userInterface.displayWelcomeSign();
	userInterface.welcomeScreen();
	userInterface.mainMenu();

	// after "play" has been chosen
	int difficultyLevel = userInterface.chooseDifficultyLevel();
	player = new HumanPlayer(difficultyLevel);
}

void GameHandler::gameLoop() {

	std::vector<int> chosenCoordinates;
	int x, y;
	int whichMove = 0;
	bool steppedOnAMine = false;

	// wyswietlanie tablicy
	displayBoard();

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
		displayBoard();
		player->getBoard().cheatMinesWeeper();
	}

	// rezultat
	if (steppedOnAMine) { // porazka
		Sleep(3000);
		userInterface.displayEndGameSign();
	} else { // zwyciestwo
		clock_t stop = clock();
		Sleep(3000);
		userInterface.displayResult(player->getName(), start, stop);
	}
}

void GameHandler::displayBoard() {
	system("cls");
	userInterface.displayBoard(player->getBoard());
	std::cout << std::endl;
}

bool GameHandler::handleMove(int x, int y) {
	
	bool steppedOnAMine;

	Board tempBoard = player->getBoard();
	steppedOnAMine = tempBoard.displayAreas(x, y);
	player->setBoard(tempBoard);

	return steppedOnAMine;
}
