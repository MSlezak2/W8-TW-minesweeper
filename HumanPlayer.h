#pragma once
#include <string>
#include "Player.h"

class HumanPlayer : public Player {

public:
	HumanPlayer();
	std::vector<int> chooseCoordinate();

};