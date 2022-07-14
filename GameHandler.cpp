#include "GameHandler.h"

void GameHandler::settings(/*Player* player*/) {
	
	userInterface.displayWelcomeSign();
	userInterface.welcomeScreen();
	userInterface.mainMenu();
	int difficultyLevel = userInterface.chooseDifficultyLevel();
	player = new HumanPlayer(difficultyLevel);
}

void GameHandler::gameLoop() {

	std::vector<int> chosenCoordinates;
	int whichMove = 0;

	while (!player->getBoard().checkWin() || whichMove == 0) {

		system("cls");
		// wyswietlanie tablicy
		userInterface.displayBoard(player->getBoard());

		// wybor czynnosci (flaga czy normalne klikniecie) (opcjonalnie)

		// pobranie wspolrzednych od uzytkownika
		chosenCoordinates = player->chooseCoordinates();

		// pierwszy ruch?
		if (++whichMove == 1) {
			player->settleMines(); // rozlosowanie min, ustalenie ilosci min w sasiedztwie
		} else {
			// sprawdzenie czy weszlismy na mine
			if (player->getBoard().isThereAMine(chosenCoordinates[0], chosenCoordinates[1])) { // TODO: Make sure that the order is correct
				// wyswietlenie "X" (symbolu miny) w tym miejscu (wpisanie -1 do currentBoard)
				// przegrana // TODO: Implement...
			} else {
				// sprawdzenie ilosci min w sasiedztwie:
					// zero:
					// wyswietlenie puste pole (wpisanie -3 do currentBoard)
					// odwiedzenie wszystkich sasiednich komorek (rekurencja)

					// rozna od zera:
					// wyswietlenie ilosci min w sasiedztwie (wpisanie ... do currentBoard)
			}	
		}
	}
}

void GameHandler::results() {
	//UserInterface.displayResults();
}

