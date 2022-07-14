#include "GameHandler.h"

void GameHandler::settings(/*Player* player*/) {
	
// Main menu (start game / help / exit)
	userInterface.mainMenu(); // TODO: Make it prettier (console should be cleared before "new frame") and test it further
	
// Wybor poziomu trudnosci
	int difficultyLevel = userInterface.chooseDifficultyLevel();

// Zainicjowac obiekt player
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

