#include "Player.h"

Player::Player() {
	
}

void Player::setDifficultyLevel(int x)
{
	this->difficultyLevel = x;
}

Board Player::getBoard() {
	return board;
}

void Player::setBoard(Board board) {
	this->board = board;
}

void Player::settleMines() {
	board.settleMines(difficultyLevel);
}
