#pragma once
#include <string>
#include "Player.h"

class HumanPlayer : public Player {

public:
	HumanPlayer();

private:
	std::string name;
};