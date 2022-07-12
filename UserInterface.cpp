#include "UserInterface.h"
#include <iostream>
#include <string>

int UserInterface::takeNumber(int rangeStart, int rangeEnd) {
	/// <summary>
	/// Prompts user to input a number from rangeStart to rangeEnd (both inclusive). If given number
	/// is out of defined range or is not a number, it keeps asking.
	/// </summary>
	/// <param name="rangeStart"></param>
	/// <param name="rangeEnd"></param>
	/// <returns>Validated integer number provided by user</returns>
	/// 
	int number;
	std::string userInput;

	do {
		std::cin >> userInput;
		try {
			number = std::stoi(userInput);
			if (number < rangeStart || number > rangeEnd) {
				std::cout << "Look, you've reached out of the allowed range" << std::endl;
			}
		} catch (const std::invalid_argument&) {
			std::cout << "It's not even a number!" << std::endl;
		} catch (const std::out_of_range&) {
			std::cout << "That number is way out of range!" << std::endl;
		}
	} while (number < rangeStart || number > rangeEnd);

	return number;
	//TODO: What if rangeStart > rangeEnd
}

char UserInterface::takeLetter(char rangeStart, char rangeEnd) {
	/// <summary>
		/// Prompts user to input a letter from rangeStart to rangeEnd (both inclusive). It is case insensitive 
		/// and returned letter is always capitalized. If given character is out of defined range it keeps asking. 
		/// </summary>
		/// <param name="rangeStart"></param>
		/// <param name="rangeEnd"></param>
		/// <returns>Capital letter within defined range provided by the user</returns>
		/// 
	char letter;
	std::string userInput;

	rangeStart = /*(char)*/toupper(rangeStart);
	rangeEnd =  /*(char)*/toupper(rangeEnd);

	do {
		std::cin >> userInput;
		letter = userInput.at(0);
		letter = /*(char)*/toupper(letter);
		if (letter < rangeStart || letter > rangeEnd) {
			std::cout << "Look, you've reached out of the allowed range" << std::endl;
		}
	} while (letter < rangeStart || letter > rangeEnd);

	return letter;
	//TODO: What if rangeStart > rangeEnd
}
