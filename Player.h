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

	// Battle Related methods
	void Attack();
	bool Parry();
	void TakeDamage(int amount);

	// Attribute Related Methods
	void LevelUp();
	void DisplayStats();

	// Getter and maybe Setter methods
	string GetName();
	string GetClassType();
	int GetCurrentHP();
	int GetNormalDamage();
	int GetMagicDamage();
	int GetDefense();
	int GetMagicDefense();
	int GetDodge();
	int GetXP();
	int GetLevel();

private:
	//String Var Decl
	string characterName;
	string playerClassType;

	//Int Var Decl
	int maxHealth;
	int currHp;
	bool isAlive;
	int normalDmg;
	int magicDmg;
	int defense;
	int magicDefense;
	int dodge;
	int xp;
	int level;
};
#endif // !PLAYER_H

