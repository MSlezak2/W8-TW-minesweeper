#pragma once
class UserInterface {
public:
	static int takeNumber(int rangeStart, int rangeEnd);
	static char takeLetter(char rangeStart, char rangeEnd);
	std::vector<int> chooseCoordinate(int difficultLevel);

	int i = 5;
};

