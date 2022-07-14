#pragma once
#include <string>
#include "Player.h"

class HumanPlayer : public Player {

public:
	HumanPlayer(int difficultyLevel);
	// Inherited via Player
	virtual std::vector<int> chooseCoordinates() override;

};