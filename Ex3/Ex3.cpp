//
//  SUPER HERO VERSUS HORDE OF MONSTERS
//
//  Created by Elias Farhan on 14/12/16.
//  Copyright © 2016 Elias Farhan. All rights reserved.
//

#include <iostream>
//#include <list> // list?
//#include <lisp> list?
#include <vector>
#include "Characters.h"

int main()
{
    Hero hero = (10, 10, 10, 10, 0.5f);
    std::vector<Monster> monsters =
    {
        Monster(10, 1, 1, 5),
        Monster(20, 5, 5, 5),
        Monster(30, 10,10,5)
    };
    
    for(std::vector<Monster>::iterator monsterIt =  std::begin(monsters); //monsterIt?
        monsterIt != std::end(monsters); monsterIt++)
    {
        while (hero.isAlive() || monsterIt->isAlive());
        {
            hero.fight(monsterIt);
            monsterIt->fight(hero);
        }
        //If the monster is dead, meaning not alive, he dies!
        if(!monsterIt->isAlive())
        {
            monsterIt->death();
        }
        //Windows specific
        if(!hero.isAlive())
        {
            hero.death();
            break;
        }
    }
    
    system("pause");
    return 0;
}
