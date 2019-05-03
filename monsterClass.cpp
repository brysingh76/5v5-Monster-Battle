//
//  monsterClass.cpp
//  5v5MonsterBattle
//


//Include Headers
#include "monsterClass.h"


using namespace std;

//************
//Constructor*
//************
MonsterClass::MonsterClass(std::string name, std::string attackName, int attackDamage, int tHealth)
{
    monsterName = name;
    monsterAttackName = attackName;
    monsterAttackDamage = attackDamage;
    totalHealth = tHealth;
    monsterHealthRemaining = tHealth;
}

//*******************
//mutator Functions *
//*******************

//Set the Monster's Name
void MonsterClass::setMonsterName(string mName)
{
    monsterName = mName;
}

//Set the Monster's attack's name
void MonsterClass::setMonsterAttackName(string mAttack)
{
    monsterAttackName = mAttack;
}

//Set how much damage the monster deals
void MonsterClass::setMonsterAttackDamage(int mAttackDamage)
{
    monsterAttackDamage = mAttackDamage;
}

//Set how much health the monster has
void MonsterClass::setMonsterHealth(int mHealth)
{
    monsterHealthRemaining = mHealth;
}


//*******************
//accessor Functions*
//*******************

//Get The Monster's name
string MonsterClass::getMonsterName()
{
    return monsterName;
}

//Get How much health monster started off with
int MonsterClass::getTotalHealth()
{
    return totalHealth;
}

//Get the Name of the Monster's Attack
string MonsterClass::getMonsterAttackName()
{
    return monsterAttackName;
}

//Get how much damage the monster deals with its attack
int MonsterClass::getMonsterAttackDamage()
{
    return monsterAttackDamage;
}

//Get How much health monster has
int MonsterClass::getMonsterHealth()
{
    return monsterHealthRemaining;
}
