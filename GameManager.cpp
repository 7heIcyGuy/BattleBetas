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


string OpeningMenu()
{
	int classSelection;

	cout << "Welcome to Battle Betas!" << endl;

	do {
		cout << "Choose a starting class:" << endl; // Announces opening of game of course and prompts class selection
		cout << endl << "1. Mage" << endl << "2. Archer" << endl << "3. Warrior" << endl; // Displays all classes
		cout << endl << "Select using a number: ";

		cin >> classSelection;
		cout << endl;

		if (classSelection == 1)
		{
			return "Mage";
		}
		else if (classSelection == 2)
		{
			return "Archer";
		}
		else if (classSelection == 3)
		{
			return "Warrior";
		}

	} while (classSelection > 3 || classSelection < 1);
}

string NameSelection()
{
	string name;
	cout << "Choose your character's name:" << endl;
	getline(cin, name);
	cout << "Welcome " << name << "!" << endl;

	return name;
}

int main()
{
	string playerName = NameSelection();
	string classChoice = OpeningMenu();
	cout << "You have selected the " << classChoice << " class!" << endl;

	Player main{ playerName, classChoice };
	main.DisplayStats();


	system("pause");	//Pause console.
	return 0;		//Terminated without errors.
}
