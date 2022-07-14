#include "GameHandler.h"

void GameHandler::settings(/*Player* player*/) {
	
// Main menu (start game / help / exit)
	userInterface.mainMenu(); // TODO: Make it prettier (console should be cleared before "new frame") and test it further

// Zainicjowac obiekt player
	//player = HumanPlayer();
	
// Wybor poziomu trudnosci
	int difficultyLevel = userInterface.chooseDifficultyLevel();
	player->setDifficultyLevel(difficultyLevel);
}

void GameHandler::gameLoop() {

	while (/*sprawdzanie warunku zako?czenia gry*/ true) {

	// wyswietlanie tablicy
		

		// wybor czynnosci (flaga czy normalne klikniecie)

		// pobranie wspolrzednych od uzytkownika

		// pierwszy ruch?
			//tak:
			// Zainicjowanie obiektu Board - tablica minesBoard:
				// rozlosowanie min
				// ustalenie ilosci min w sasiedztwie

			//nie:
			// sprawdzenie czy weszlismy na mine
				// tak:
				// wyswietlenie "X" (symbolu miny) w tym miejscu (wpisanie -1 do currentBoard)
				// przegrana

				// nie:
				// sprawdzenie ilosci min w sasiedztwie:
					// zero:
					// wyswietlenie puste pole (wpisanie -3 do currentBoard)
					// odwiedzenie wszystkich sasiednich komorek (rekurencja)

					// rozna od zera:
					// wyswietlenie ilosci min w sasiedztwie (wpisanie ... do currentBoard)
	}
}

void GameHandler::results() {
	//UserInterface.displayResults();
}

