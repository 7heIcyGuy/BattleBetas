#include "Player.h"
#include <iostream>
#include <string>
using namespace std;

Player::Player(string inputName, string classType)
{
	characterName = inputName;
	playerClassType = classType;

	if (playerClassType == "Mage")
	{
		health = 90;
		normalDmg = 2;
		magicDmg = 5;
		defence = 4;
		dodge = 3;
		xp = 0;
	}
	else if (playerClassType == "Archer")
	{
		health = 80;
		normalDmg = 5;
		magicDmg = 3;
		defence = 2;
		dodge = 4;
		xp = 0;
	}
	else
	{
		health = 100;
		normalDmg = 4;
		magicDmg = 2;
		defence = 5;
		dodge = 3;
		xp = 0;
	}
}


string Player::GetClassType()
{
	return playerClassType;
}

string Player::GetName()
{
	return characterName;
}

int Player::GetHealth()
{
	return health;
}

void Player::DisplayStats()
{
	system("cls");
	cout << "These are your character's stats:\n" << endl;
	cout << "Name: " << characterName << endl;
	cout << "Class: " << playerClassType << endl;
	cout << "HP: " << health << endl;
	cout << "Normal Attack: " << normalDmg << endl;
	cout << "Magic Attack: " << magicDmg << endl;
}