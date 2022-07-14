#include "HumanPlayer.h"
#include "UserInterface.h"
#include <iostream>

HumanPlayer::HumanPlayer(int difficultyLevel) {
	std::cout << "Enter your nickname: " << std::endl;
	std::cin >> name;

	// Board initialization
	this->difficultyLevel = difficultyLevel;

	board = Board(difficultyLevel);
}

std::vector<int> HumanPlayer::chooseCoordinates()
{
	std::vector<int> coordinate;
	int numberRangeStart{ 1 }, inputNumber{};
	char letterRangeStart{ 'A' }, inputLetter{};
	int numberRangeEnd = numberRangeStart + difficultyLevel - 1;
	char letterRangeEnd = letterRangeStart + difficultyLevel - 1;

	std::cout << "Please enter a row ( " << letterRangeStart << " " << letterRangeEnd << " ): " << std::endl;
	inputLetter = UserInterface::takeLetter(letterRangeStart, letterRangeEnd);
	coordinate.push_back((inputLetter - 65));

	std::cout << "Please enter a column ( " << numberRangeStart << " " << numberRangeEnd << " ): " << std::endl;
	inputNumber = UserInterface::takeNumber(numberRangeStart, numberRangeEnd);
	coordinate.push_back((inputNumber - 1));

	return  coordinate;
}