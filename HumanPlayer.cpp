#include "HumanPlayer.h"
#include <iostream>

HumanPlayer::HumanPlayer(int difficultyLevel) {
	std::cout << "Enter your nickname: " << std::endl;
	std::cin >> name;

	// Board initialization
	this->difficultyLevel = difficultyLevel;

	board = Board(difficultyLevel);
}
