#include <iostream>
#include <string>
#include "UserInterface.h"

void UserInterface::welcomeScreen()
{
	displayWelcomeSign();
	system("Color F0");

	std::cout << "\n\n\t\tWelcome to Minesweeper Game!\n"
		"\n\t1. - Press if you want to start the game."
		"\n\t2. - Press if you want to see the help panel."
		"\n\t3. - Press to exit the game.\n" << std::endl;
}

int UserInterface::getUserMenuChoice()
{
	std::string input{};
	while (true) {
		welcomeScreen();

		std::cout << "\t>> ";
		std::getline(std::cin, input);

		if ((input == "1") || (input == "2") || (input == "3"))
			break;
		else {
			std::cout << "Invalid input. Try again!\n" << std::endl;

			system("pause");
			system("cls");
		}
	}
	return std::stoi(input);

}

void UserInterface::mainMenu(int choice)
{
	switch (choice) {

	case 1:
		//start gry
		break;

	case 2:
		help();
		break;

	case 3:
		std::cout << "\n\t--- OK, Bye! See you next time! ---\n";
		exit(0);
		break;
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
	std::string input;
	int userLevel;
	std::cout << "\tPlease choose difficulty level:\n\t1. Begginer – 9 x 9 Board and 10 Mines"
		"\n\t2. Intermediate – 16 x 16 Board and 40 Mines\n\t 3. Advanced  – 24 x 24 Board and 99 Mines";
	std::cout << "\t>> ";
	std::getline(std::cin, input);

	if ((input == "1") || (input == "2") || (input == "3"))
		userLevel = stoi(input);
	else {
		std::cout << "Invalid input. Try again!\n" << std::endl;

		system("pause");
		system("cls");
	}
	return userLevel;
}

void UserInterface::displayResult(std::string name)
{
	std::cout << "\n\t\tThe winner is... " << name << std::endl;
}

int UserInterface::takeNumber(int rangeStart, int rangeEnd) {
	/// <summary>
	/// Prompts user to input a number from rangeStart to rangeEnd (both inclusive). If given number
	/// is out of defined range or is not a number, it keeps asking.
	/// </summary>
	/// <param name="rangeStart"></param>
	/// <param name="rangeEnd"></param>
	/// <returns>Validated integer number provided by user</returns>
	/// 
	int number;
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
	/// <summary>
		/// Prompts user to input a letter from rangeStart to rangeEnd (both inclusive). It is case insensitive 
		/// and returned letter is always capitalized. If given character is out of defined range it keeps asking. 
		/// </summary>
		/// <param name="rangeStart"></param>
		/// <param name="rangeEnd"></param>
		/// <returns>Capital letter within defined range provided by the user</returns>
		/// 
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
}