#pragma once

#ifndef PLAYER_H
#define PLAYER_H


#include <iostream>
#include <string>
using namespace std;

class Player
{
public: 

	Player(string inputName, string classType);

	// Battle related methods, mostly
	void Attack();
	void Parry();
	void LevelUp();
	void DisplayStats();

	// Getter and maybe Setter methods
	string GetName();
	string GetClassType();
	int GetHealth();
	int GetNormalDamage();
private:
	string characterName;
	string playerClassType;
	int health;
	int normalDmg;
	int magicDmg;
	int defence;
	int dodge;
	int xp;
};
#endif // !PLAYER_H

