//
//  monsterClass.hpp
//  5v5MonsterBattle
//


#ifndef monsterClass_h
#define monsterClass_h

#include <string>

class MonsterClass
{
private:
    std::string monsterName; //Name of the Monster
    std::string monsterAttackName; //Name of Monster's Attack
    int monsterAttackDamage; //Amount of Damage Attack Deals
    int monsterHealthRemaining; //Amount of Health Monster Has
    int totalHealth; //total monster Health
public:
    //Deafault Constructor
    MonsterClass();
    //Overloaded Constructor
    MonsterClass(std::string name, std::string attackName, int attackDamage, int tHealth);
    //Destructor
    //~MonsterClass();
    //Mutator Functions
    void setMonsterName(std::string mName);
    void setMonsterAttackName(std::string mAttack);
    void setMonsterAttackDamage(int mAttackDamage);
    void setMonsterHealth(int mHealth);
    //void damageHealth (int damageDealt); To take health away from monster
    
    //Accessor Functions
    std::string getMonsterName();
    std::string getMonsterAttackName();
    int getMonsterAttackDamage();
    int getMonsterHealth();
    int getTotalHealth();
    //std::string displayMonsters(); Show all monsters on allied team
    
};

#endif /* monsterClass_h */
