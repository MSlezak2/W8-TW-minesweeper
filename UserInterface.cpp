#include <iostream>
#include <string>
#include <vector>
#include "UserInterface.h"
#include "Board.h"

void UserInterface::welcomeScreen()
{
	displayWelcomeSign();
	system("Color F0"); // TODO: Should we move it somewhere else (so that the screen doesn't flicker)?

	std::cout << "\n\n\t\tWelcome to Minesweeper Game!\n"
		"\n\t1. - Press if you want to start the game."
		"\n\t2. - Press if you want to see the help panel."
		"\n\t3. - Press to exit the game.\n" << std::endl;
}

int UserInterface::getUserMenuChoice()
{
	welcomeScreen();
	return UserInterface::takeNumber(1, 3);
}

void UserInterface::mainMenu()
{
	int choice = 0;
	welcomeScreen();

	while (choice != 3 && choice != 1) {
		switch (choice) {
		case 0:
			choice = getUserMenuChoice();
			break;

		case 1:
			//start gry
			break;

		case 2:
			help();
			choice = 0;
			break;

		case 3:
			std::cout << "\n\t--- OK, Bye! See you next time! ---\n";
			exit(0);
			break;
		}
	}
	

}

void UserInterface::help()
{
	std::cout << "\t ___________________________________________________________________" << std::endl;
	std::cout << "\t|                                                                   |" << std::endl;
	std::cout << "\t|                           Welcome in help!                        |" << std::endl;
	std::cout << "\t|                                                                   |" << std::endl;
	std::cout << "\t|   If you're a Windows user chances are that you already have the  |" << std::endl;
	std::cout << "\t|   game on your computer. This guide will help you in completing   |" << std::endl;
	std::cout << "\t|                          your first game.                         |" << std::endl;
	std::cout << "\t|___________________________________________________________________|" << std::endl;
	std::cout << "\t ___________________________________________________________________" << std::endl;
	std::cout << "\t|                            HOW TO PLAY                            |" << std::endl;
	std::cout << "\t|                                                                   |" << std::endl;
	std::cout << "\t| Minesweeper is a game where mines are hidden in a grid of squares.|" << std::endl;
	std::cout << "\t| Safe squares have numbers telling you how many mines touch the    |" << std::endl;
	std::cout << "\t| square.                                                           |" << std::endl;
	std::cout << "\t| You can use the number clues to solve the game by opening all of  |" << std::endl;
	std::cout << "\t| the safe squares.                                                 |" << std::endl;
	std::cout << "\t| If you click on a mine you lose the game!                         |" << std::endl;
	std::cout << "\t|                                                                   |" << std::endl;
	std::cout << "\t| Windows Minesweeper always makes the first click safe.            |" << std::endl;
	std::cout << "\t| When you open a square that does not touch any mines, it will be  |" << std::endl;
	std::cout << "\t| empty and the adjacent squares will automatically open in all     |" << std::endl;
	std::cout << "\t| directions until reaching squares that contain numbers. A common  |" << std::endl;
	std::cout << "\t| strategy for starting games is to randomly click until you  get a |" << std::endl;
	std::cout << "\t| big opening with lots of numbers.                                 |" << std::endl;
	std::cout << "\t|                                                                   |" << std::endl;
	std::cout << "\t| The three difficulty levels are:                                  |" << std::endl;
	std::cout << "\t|  - Beginner (9x9 with 10 mines)                                   |" << std::endl;
	std::cout << "\t|  - Intermediate (16x16 with 40 mines)                             |" << std::endl;
	std::cout << "\t|  - Expert (30x16 with 99 mines)                                   |" << std::endl;
	std::cout << "\t|                                                                   |" << std::endl;
	std::cout << "\t|       The game ends when all safe squares have been opened.       |" << std::endl;
	std::cout << "\t|___________________________________________________________________|" << std::endl;
	std::cout << "\n" << std::endl;
	system("pause");
}

void UserInterface::displayWelcomeSign()
{
	std::cout << "   ad88888ba\n"
		<< "  d8" << "      " << "8b\n"
		<< "  Y8,\n"
		<< "  `Y8aaaaa,    ,adPPYYba,  8b,dPPYba,    ,adPPYba,  8b,dPPYba, \n"
		<< "    `\""""" 8b,  ""          8P'  8a      a8P   a8P_____88 88P'   " << "Y8\n"
		<< "          `8b  adPPPPP888  88       d8   8PP" << "" << "" << "" << "        88\n"
		<< "  Y8a     a8P  88,    ,88  88b, ,a8"  "8b,   8PP   ,aa  88\n"
		<< "   \"Y88888P"   "  ""  8bbdP\"Y88   88`YbbdP" << "'    " << "  'Ybbd8" << "'" << "   88\n"
		<< "                           88                         \n"
		<< "                           88                         \n"
		<< std::endl;
	std::cout << "                                 88  **                  **\n"
		<< "                                 88  **                  **""\n"
		<< "                                 88                       \n"
		<< "88,dPYba,,adPYba,   8b       d8  88  88      ,adPPYba,   88   ,adPPYba,\n"
		<< "88P'   \"88"    "8a   `8b   d8'     88  88  88      I8[  ""       88   a8P_____88\n"
		<< "88      88      88   `8b   d8'   88  88       `\"Y8ba,    88   8PP\"""""""\n"
		<< "88      88      88    `8b,d8'    88  88      aa    ]8I   88   \"8b,   ,aa\n"
		<< "88      88      88      Y88'     88  88      `\"YbbdP" << "'    88    `" << "Ybbd8Y" << "'\n"
		<< "                        d8'                                           \n"
		<< "                       d8'                                            \n"
		<< std::endl;
	std::cout << "                   88  888b      88    ,ad8888ba,                     \n"
		<< "                   88  8888b     88   d8\"      `" << "8b   		 \n"
		<< "                   88  88 `8b    88  d8'        `8b  				 \n"
		<< "                   88  88  `8b   88  88          88  				 \n"
		<< "                   88  88   `8b  88  88          88  				 \n"
		<< "                   88  88    `8b 88  Y8,        ,8P  				 \n"
		<< "                   88  88     `8888   Y8a.    .a8P   				 \n"
		<< "                   88  88      `888    `" << " Y8888Y" << "'    				 \n"
		<< std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "               88888888ba     ,ad8888ba,   888888888888  			 \n"
		<< "               88      \"8b   d8" << "" << "'      `" << "8b,          88  			 \n"
		<< "               88      ,8P  d8'        `8b        ,88\"   			 \n"
		<< "               88aaaaaa8P'  88          88      ,88\"     			 \n"
		<< "               88\"""\"  88'    88          88    ,88\"       			 \n"
		<< "               88    `8b    Y8,        ,8P  ,88\"         			 \n"
		<< "               88     `8b    Y8a.    .a8P  88\"           			 \n"
		<< "               88      `8b    `" << " Y8888Y" << "'  888888888888  			 \n"
		<< std::endl;
	system("pause");
}

void UserInterface::displayEndGameSign()
{
	system("cls");
	std::cout << "  ______      _____     __   __     ______        ______       _   _     ______      ______    \n";
	std::cout << " /\\ ____\\   /\\  __ \\   /\\  \\/  \\   /\\  ____\\     /\\   __ \\   /\\ \\ \\ \\   /\\   ___\\   /\\  _  \\     \n";
	std::cout << " \\ \\  ____  \\ \\  __ \\  \\ \\  __  \\  \\ \\   __\\     \\ \\  \\_\\ \\  \\ \\ \\ \\ \\  \\ \\   __\\   \\ \\   _/        \n";
	std::cout << "  \\ \\ ____\\\  \\ \\_\\ \\_\\  \\ \\_\\ \\ _\\  \\  \\_____\\    \\ \\______\\  \\ \\_\\_\\ \\  \\ \\______\\  \\_\\_\\ _\\      \n";
	std::cout << "   \\/______/  \\/_/\\/_/   \\/_/ \\/_/   \\/______/     \\/______/   \\/_____/   \\/______/   \\/_/\\/_/     \n";
	system("pause");
}

int UserInterface::chooseDifficultyLevel()
{
	int userLevel = 0;
	std::cout << "\tPlease choose difficulty level:\n\t1. Begginer – 9 x 9 Board and 10 Mines"
		"\n\t2. Intermediate – 16 x 16 Board and 40 Mines\n\t 3. Advanced  – 24 x 24 Board and 99 Mines";
	std::cout << "\t>> ";

	userLevel = takeNumber(1, 3);

	if (userLevel == 1)
		userLevel = 9;
	else if (userLevel == 2)
		userLevel = 16;
	else if (userLevel == 3)
		userLevel = 24;

	return userLevel;
}

void UserInterface::displayResult(std::string name)        // funkcja przyjmuje start zegara i stop jako argumenty
{
	//std::cout << "\n\t\tThe winner is... " << name << std::endl;

	//clock_t start, stop;      // to trzeba zaicludowac do game loop 
	//float game_duration;

	//game_duration = (float)(stop - start) / CLOCKS_PER_SEC;
	//int game_duration_min = game_duration / 60;
	//float game_duration_sec = (int)game_duration % 60;


	//printf("Game duration: %d minutes and %.f seconds. ", game_duration_min, game_duration_sec);

}

void UserInterface::gameMode()
{
	std::string input;
	std::cout << "Please choose game mode: \n\t 0. Human Player \n\t 1. Computer Player" << std::endl;
	mode = takeNumber(0, 1);
}

void UserInterface::displayBoard(Board board)
{
	int rozX = board.size , rozY = rozX;
	char mine = 15, flag = 201, a = 65;
	
	std::cout << "\n\n\t   ";
	for (int i = 1; i <= rozX; i++) {
		std::cout << " " << i << "  ";
	}
	std::cout << "\n";

	printHorizontalLine(rozX);

	for (int i = 0; i < rozY; i++) {
		for (int j = 0; j < rozX; j++) {
			if (j == 0) {
				std::cout << "\t" << a <<" | ";
				a++;
			}
				
			switch (board.currentBoard[i][j])
			{
			case -1:
				std::cout << mine;
				break;
			case -2:
				std::cout << flag;
				break;
			case -3:
				std::cout << ' ';
				break;
			default:
				std::cout << board.currentBoard[i][j];
				break;
			}
			std::cout << " | ";
		}
		std::cout << std::endl;
		printHorizontalLine(rozX);
	}
	std::cout << "\n";
}

int UserInterface::takeNumber(int rangeStart, int rangeEnd) {

	int number = HUGE_VAL;
	std::string userInput;

	do {
		std::cin >> userInput;
		try {
			number = std::stoi(userInput);
			if (number < rangeStart || number > rangeEnd) {
				std::cout << "Look, you've reached out of the allowed range" << std::endl;
			}
		}
		catch (const std::invalid_argument&) {
			std::cout << "It's not even a number!" << std::endl;
		}
		catch (const std::out_of_range&) {
			std::cout << "That number is way out of range!" << std::endl;
		}
	} while (number < rangeStart || number > rangeEnd);

	return number;
	//TODO: What if rangeStart > rangeEnd
}

char UserInterface::takeLetter(char rangeStart, char rangeEnd) {
	
	char letter;
	std::string userInput;

	rangeStart = /*(char)*/toupper(rangeStart);
	rangeEnd =  /*(char)*/toupper(rangeEnd);

	do {
		std::cin >> userInput;
		letter = userInput.at(0);
		letter = /*(char)*/toupper(letter);
		if (letter < rangeStart || letter > rangeEnd) {
			std::cout << "Look, you've reached out of the allowed range" << std::endl;
		}
	} while (letter < rangeStart || letter > rangeEnd);
	return letter;
}

void UserInterface::printHorizontalLine(int boardSize)
{
	int numberOfHypens = boardSize;
	std::cout << "\t  ";

	for (int i = 0; i < numberOfHypens - 1; i++) {
		std::cout << "|---";
	}
	std::cout << "|---|\n";
}

std::vector<int> UserInterface::chooseCoordinate(int difficultLevel)
{
	std::vector<int> coordinate;
	int numberRangeStart{ 1 }, inputNumber{};
	char letterRangeStart{ 'A' }, inputLetter{};
	int numberRangeEnd = numberRangeStart + difficultLevel - 1;
	char letterRangeEnd = letterRangeStart + difficultLevel - 1;

	std::cout << "Please enter a row ( " << letterRangeStart << " " << letterRangeEnd << " ): " << std::endl;
	inputLetter = takeLetter(letterRangeStart, letterRangeEnd);
	coordinate.push_back((inputLetter - 65));

	std::cout << "Please enter a column ( " << numberRangeStart << " " << numberRangeEnd << " ): " << std::endl;
	inputNumber = takeNumber(numberRangeStart, numberRangeEnd);
	coordinate.push_back((inputNumber - 1));

	return  coordinate;
}