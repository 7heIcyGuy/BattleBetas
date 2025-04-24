#pragma once
#include <string>
using namespace std;


class SystemManager
{
public:
	// Creating SystemManager class to reduce code on the main() page
	SystemManager();

	// Set Methods for the the beginning of the game
	string ChooseName(string nInput);
	string ChooseClass(string cInput);

private:
};

