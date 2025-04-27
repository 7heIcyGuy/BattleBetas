#include "SystemManager.h"
#include "Player.h"
#include <iostream>
#include <string>
#include <cmath>
#include <random>

SystemManager::SystemManager()
{
	
}

string SystemManager::ChooseName()
{
	string name;
	cout << "Welcome to Battle Betas!" << endl;
	cout << "Choose your character's name: ";

	cin >> name;

	return name;
}

string SystemManager::ChooseClass()
{
	int choice;
	do {
		cout << "Choose your starting class:" << endl; // Announces opening of game of course and prompts class selection
		cout << endl << "1. Mage (Proficiency: Mid-range)" << endl << "2. Archer (Proficiency: Long-range)" << endl << "3. Warrior (Proficiency: Close-range)" << endl; // Displays all classes
		cout << endl << "Select using a number: ";

		cin >> choice;
		cout << endl;

		if (choice == 1)
		{
			return "Mage";
		}
		else if (choice == 2)
		{
			return "Archer";
		}
		else if (choice == 3)
		{
			return "Warrior";
		}
	} while (choice > 3 || choice < 1);
}

int SystemManager::Randomizer(int x, int y)
{
	random_device randy;
	mt19937 generator(randy());
	uniform_int_distribution<int> distr(x, y);

	return distr(generator);
}

void SystemManager::GameMenu()
{
	
}
