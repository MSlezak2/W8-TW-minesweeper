#include <iostream>
#include <string>
#include "Player.h"
#include "UserInterface.h"
#include "GameHandler.h"
#include "ComputerPlayer.h"
#include "HumanPlayer.h"


int main() {

	UserInterface obj;

	Board b1(9);
	b1.settleMines(9);
	b1.currentBoard = b1.minesBoard;
	obj.displayBoard(b1);

	system("pause");



}