#include "Player.h"
#include "SystemManager.h"
#include <iostream>
#include <string>
#include <random>
using namespace std;

Player::Player(string inputName, string classType)
{
	characterName = inputName;
	playerClassType = classType;
	isAlive = true;

	if (playerClassType == "Mage")
	{
		maxHealth = 90;
		currHp = maxHealth;
		normalDmg = 2;
		magicDmg = 5;
		defense = 2;
		magicDefense = 4;
		dodge = 3;
		xp = 0;
		level = 1;
	}
	else if (playerClassType == "Archer")
	{
		maxHealth = 80;
		currHp = maxHealth;
		normalDmg = 5;
		magicDmg = 3;
		defense = 2;
		magicDefense = 3;
		dodge = 4;
		xp = 0;
		level = 1;
	}
	else if(playerClassType == "Warrior")
	{
		maxHealth = 100;
		currHp = maxHealth;
		normalDmg = 4;
		magicDmg = 2;
		defense = 5;
		magicDefense = 2;
		dodge = 3;
		xp = 0;
		level = 1;
	}
}

SystemManager playerCPU{};

// Battle Methods Below
int Player::Attack()
{

}

bool Player::Parry()
{
	int base = playerCPU.Randomizer(2, 9);
	int min = base - 1;
	int max = base + 1;
	int guess;

	cout << "\nIn order to parry, you must guess within a 3 number range in between 1-10." << endl;
	cout << "Guess your number (30% success): ";
	cin >> guess;

	if (guess >= min && guess <= max)
	{
		cout << "Parry successful!" << endl;
		return true;
	}
	else
	{
		cout << "Parry unsuccessful." << endl;
		return false;
	}
}

void Player::TakeDamage(int amount)
{
	currHp -= amount;
}




// Attribute Methods Below
void Player::LevelUp()
{
	maxHealth *= 1.05;
	level += 1;
	cout << "Congratulations, you are now level " << level << "!" << endl;
}

void Player::DisplayStats()
{
	system("cls");
	cout << "These are your character's stats:\n" << endl;
	cout << "Name: " << characterName << endl;
	cout << "Class: " << playerClassType << endl;
	cout << "HP: " << currHp << endl;
	cout << "Normal Attack: " << normalDmg << endl;
	cout << "Magic Attack: " << magicDmg << endl;
	cout << "Defense: " << defense << endl;
	cout << "Magic Defense: " << magicDefense << endl;
	cout << "XP: " << xp << endl;
}



// Getter Methods Below
string Player::GetName()
{
	return characterName;
}

string Player::GetClassType()
{
	return playerClassType;
}

int Player::GetCurrentHP()
{
	return currHp;
}

int Player::GetNormalDamage()
{
	return normalDmg;
}

int Player::GetMagicDamage()
{
	return magicDmg;
}
int Player::GetDefense()
{
	return defense;
}
int Player::GetMagicDefense()
{
	return magicDefense;
}
int Player::GetDodge()
{
	return dodge;
}
int Player::GetXP()
{
	return xp;
}
int Player::GetLevel()
{
	return level;
}