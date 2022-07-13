#include <string>
#include <iostream>
#include "Computerplayer.h"

ComputerPlayer::ComputerPlayer(int getDifficultyLevel())
{
	int n = getDifficultyLevel();
	
	switch (n)
	{
	case 1:
		name = "Dummy Computer";
		break;
	case 2:
		name = "Average Computer";
		break;
	case 3:
		name = "Clever Computer";
		break;
	default:
		std::cout << "Invalid input!";
	}
}
