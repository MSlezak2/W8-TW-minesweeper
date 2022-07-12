#pragma once
#include <string>
#include "Player.h"

class ComputerPlayer : public Player {

public:
	ComputerPlayer(int getDifficultyLevel());
	

private:
	std::string name;
};