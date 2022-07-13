#include "GameHandler.h"

void GameHandler::settings() {
	// TODO: Main menu

	// pobranie wspolrzednych od uzytkownika
	

	// Zainicjowac obiekt player

	
	// Wybor poziomu trudnosci

	// Zainicjowanie obiektu Board - tablica minesBoard:
		// rozlosowanie min
		// ustalenie ilosci min w sasiedztwie

	// Zainicjowanie obiektu Board - tablica currentBoard:
		// wpisanie zer do ka?dej komórki

}

void GameHandler::gameLoop() {

	while (/*sprawdzanie warunku zako?czenia gry*/ true) {

		// wyswietlanie tablicy

		// wybor czynnosci (flaga czy normalne klikniecie)

		// pobranie wspolrzednych od uzytkownika

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

