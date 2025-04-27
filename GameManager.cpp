/*
Author: Justin Esquivel, Isaac Gonzalez, Charley Delgado
Class: CS 120 Programming and Algorithms in C/C++.
File Name: LastName_FirstName_Lab#_Program#.cpp or format indicated by instructions.
Date: Date you created this program.
Description: Describe with a short paragraph the purpose of your program or what it does in general terms.
*/

using namespace std;		//Using standard library.

// Include libraries used here.
#include <iostream>		//Include library for console Input/Output.
#include <string>
#include "Player.h"
#include "SystemManager.h"


int main()
{
	SystemManager CPU{};
	string name = CPU.ChooseName();

	Player main{ name, CPU.ChooseClass()};
	main.DisplayStats();


	system("pause");	// Pause console.
	
	main.Parry();
		
	return 0;		// Terminated without errors.
}
