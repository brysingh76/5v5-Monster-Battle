//
//  main.cpp
//  5v5MonsterBattle
//

//Includes
#include "monsterClass.h"

#include <iostream>
#include <ctime>

//******************
//Utility Functions*
//******************

int randomNumberGenerator(int maxRange, int minRange)
{
    int max = maxRange;
    int randomNumber;
    randomNumber = rand() % max + minRange; //between 1 and 10
    return randomNumber;
}

//
//
//SWITCH TO SMART POINTERS
//
//

int main()
{
    //Constant Variables
    const int numMonsters = 10;
    const int teamSize = 5;
    
    //Variables
    int randomMonsterNum;
    int randomMonsterNum2;
    int min0 = 0;
    int min1 = 1;
    
    //Allied Monster Array
    MonsterClass *allyMonsterArr[teamSize];
    MonsterClass *enemyMonsterArr[teamSize];
    
    //seed randomNumberGenerator
    srand(time(NULL));
    
    //Create new Monsters with pointers
    MonsterClass *MonsterPtr0 = new MonsterClass("Cartman", "Bite", 5, 500);
    MonsterClass *MonsterPtr1 = new MonsterClass("Pickachu", "Slap", 20, 125);
    MonsterClass *MonsterPtr2 = new MonsterClass("Thizz Man", "Thizzing", 40, 250);
    MonsterClass *MonsterPtr3 = new MonsterClass("Sarah", "Science", 500, 325);
    MonsterClass *MonsterPtr4 = new MonsterClass("Ancient Lizard", "Tail Smack", 15, 300);
    MonsterClass *MonsterPtr5 = new MonsterClass("Old Dragon","Dragon Pulse", 50, 100);
    MonsterClass *MonsterPtr6 = new MonsterClass("Soldier 76", "Spray n Pray", 25, 250);
    MonsterClass *MonsterPtr7 = new MonsterClass("Spartan 117", "MJOLNIR", 30, 400);
    MonsterClass *MonsterPtr8 = new MonsterClass("Zelda", "Sword Slash", 35, 250);
    MonsterClass *MonsterPtr9 = new MonsterClass("HiesenBurg", "Blue Crystal", 45, 150);
    
    MonsterClass *MonsterPtrArr[numMonsters] =
    {
        MonsterPtr0,
        MonsterPtr1,
        MonsterPtr2,
        MonsterPtr3,
        MonsterPtr4,
        MonsterPtr5,
        MonsterPtr6,
        MonsterPtr7,
        MonsterPtr8,
        MonsterPtr9
    };
    
    //std::cout << MonsterPtr9->getMonsterName() << std::endl; //Works!
    //randomMonsterNum = randomNumberGenerator();
    //std::cout << MonsterPtrArr[randomMonsterNum] -> getMonsterName() << std::endl;//Works!!
    
    //
    //Place 5 monsters randomly selected into allied team array
    //
    for(int i = 0; i < teamSize; i++)
    {
        randomMonsterNum = randomNumberGenerator(numMonsters, min0); //can be 10
        int currentNum = 0;
        while (currentNum == randomMonsterNum)
        {
            randomMonsterNum = randomNumberGenerator(numMonsters, min0);
        }
        
        allyMonsterArr[i] = MonsterPtrArr[randomMonsterNum];
        currentNum = randomMonsterNum;
    }
    
    std::cout << " Your Allied Monsters are: " << std::endl;
    
    //Display Allied Monster Arr
    for (int i = 0; i < teamSize; i++)
    {
        if( i == 4 )
        {
            std::cout << "and " << allyMonsterArr[i] -> getMonsterName() << std::endl;
            std::cout << ">" << std::endl;
            std::cout << ">" << std::endl;
        }
        else
        {
            std::cout << allyMonsterArr[i] -> getMonsterName() << ", ";
        }
    }
    
    //Randomly select and Place enemy Monsters into enemy arr
    for(int i = 0; i < teamSize; i++)
    {
        randomMonsterNum2 = randomNumberGenerator(numMonsters, min0);
        int currentNum2 = 0;
        while (currentNum2 == randomMonsterNum2)
        {
            randomMonsterNum2 = randomNumberGenerator(numMonsters, min0);
        }
        enemyMonsterArr[i] = MonsterPtrArr[randomMonsterNum2];
        currentNum2 = randomMonsterNum2;
    }
    
    //
    //Do you want to show enemy monsters? If so Turn into function!!
    //
    
    std::cout << " The Enemy Monsters Are: " << std::endl;
    
    //Display Enemy Monster Array
    for (int i = 0; i < teamSize; i++)
    {
        if( i == 4 )
        {
            std::cout << "and " << enemyMonsterArr[i] -> getMonsterName() << std::endl;
            std::cout << ">" << std::endl;
            std::cout << ">" << std::endl;
        }
        else
        {
            std::cout << enemyMonsterArr[i] -> getMonsterName() << ", ";
        }
    }
    
    //
    //Randomly select which enemy Monster is battling first
    //
    int enemyMonster;
    enemyMonster = randomNumberGenerator(teamSize, min0);
    
    //Pointer to enemy Monster
    MonsterClass *enemyMonsterBattling;
    enemyMonsterBattling = enemyMonsterArr[enemyMonster];
    
    std::cout << "The Enemy Monster Battling is: " << enemyMonsterBattling -> getMonsterName() << std::endl;
    std::cout << ">" << std::endl;
    std::cout << ">" << std::endl;
    
    
    //
    //Ask User which monster they would like to select.
    //
    std::cout << "What Monster would you like to choose? Select a number." << std::endl;
    for (int i = 0; i < teamSize; i++)
    {
        std::cout << i << "." << allyMonsterArr[i] -> getMonsterName() << std::endl;
    }
    
    std::cout << ">" << std::endl;
    std::cout << ">" << std::endl;
    
    //Variable to store what monster the user wants
    int userSelection;
    
    std::cin >> userSelection;
    
    //User selected battle monster
    MonsterClass *allyMonsterBattling = nullptr;
    
    switch(userSelection)
    {
        case 0:
            allyMonsterBattling = allyMonsterArr[userSelection];
            break;
        case 1:
            allyMonsterBattling = allyMonsterArr[userSelection];
            break;
        case 2:
            allyMonsterBattling = allyMonsterArr[userSelection];
            break;
        case 3:
            allyMonsterBattling = allyMonsterArr[userSelection];
            break;
        case 4:
            allyMonsterBattling = allyMonsterArr[userSelection];
            break;
        default:
            std::cout << " You entered an invalid key! " << std::endl;
    }
    
    std::cout << ">" << std::endl;
    std::cout << ">" << std::endl;
    
    std::cout << " Your " << allyMonsterBattling -> getMonsterName() << " is going into battle with the enemy " << enemyMonsterBattling -> getMonsterName() << std::endl;
    
    std::cout << ">" << std::endl;
    std::cout << ">" << std::endl;
    
    //Determine if allies or enemies will attack first
    int headsOrTails = randomNumberGenerator(2, min1); //Works displaying 1 and 2

    //
    //Add another while loop saying untill your or enemy monsters are dead
    //
    
    while (allyMonsterBattling -> getMonsterHealth() > 0 || enemyMonsterBattling -> getMonsterHealth() > 0)
    {
        //Allied Monster Strikes First
        if (headsOrTails == 1 || headsOrTails == 2) //for testing also make tails (2)
        {
            //Allied Monster Health Remaining
            int alliedHealthRemaining;
            alliedHealthRemaining = ((allyMonsterBattling -> getMonsterHealth()) - (enemyMonsterBattling ->getMonsterAttackDamage()));
            
            //Set and check Allied Monster Health
            if(alliedHealthRemaining < 0)
            {
                alliedHealthRemaining = 0;
                allyMonsterBattling -> setMonsterHealth(alliedHealthRemaining);
            }
            else
            {
                allyMonsterBattling -> setMonsterHealth(alliedHealthRemaining);
            }
            
            //
            //Move all dialogue to end
            //
            
            //You attack first
            std::cout << " Your " << allyMonsterBattling -> getMonsterName() << " attacked! " << std::endl;
            
            std::cout << ">" << std::endl;
            std::cout << ">" << std::endl;
                
            //Enemy health Remaining
            int enemyHealthRemaining;
            enemyHealthRemaining = ((enemyMonsterBattling -> getMonsterHealth()) - (allyMonsterBattling -> getMonsterAttackDamage()));
                
            //Set new Enemy Health
            if (enemyHealthRemaining < 0)
            {
                enemyHealthRemaining = 0;
                enemyMonsterBattling -> setMonsterHealth(enemyHealthRemaining);
                break;
            }
            else
            {
                enemyMonsterBattling -> setMonsterHealth(enemyHealthRemaining);
            }
            
            //Display Enemy Health
            std::cout << "The enemy " << enemyMonsterBattling -> getMonsterName() << " has " << enemyMonsterBattling ->getMonsterHealth() << " health remaing out of " << enemyMonsterBattling -> getTotalHealth() <<  std::endl;
            
            std::cout << ">" << std::endl;
            std::cout << ">" << std::endl;
                
            //Now its the enemy Monsters turn to attack
            std::cout << " The enemy " << enemyMonsterBattling -> getMonsterName() << " attacked! " << std::endl;
            
            std::cout << ">" << std::endl;
            std::cout << ">" << std::endl;
            
            //Display Allied Health
            std::cout << " Your " << allyMonsterBattling -> getMonsterName() << " has " << allyMonsterBattling -> getMonsterHealth() << " health remaing out of " << allyMonsterBattling -> getTotalHealth() <<  std::endl;
            
            std::cout << ">" << std::endl;
            std::cout << ">" << std::endl;
            
        }
    }
    
    std::cout << "winner goes here " << std::endl;
    
    //Delete objects
    delete MonsterPtr0;
    delete MonsterPtr1;
    delete MonsterPtr2;
    delete MonsterPtr3;
    delete MonsterPtr4;
    delete MonsterPtr5;
    delete MonsterPtr6;
    delete MonsterPtr7;
    delete MonsterPtr8;
    delete MonsterPtr9;
}
