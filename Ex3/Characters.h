//
//  Characters.hpp
//  Test
//
//  Created by Elias Farhan on 14/12/16.
//  Copyright © 2016 Elias Farhan. All rights reserved.
//

#pragma once

#include <iostream>

class Character
{
public:
    Character
    (
    int health_,
    int attack_,
    int defense_,
    int strength_
    );
    bool Character::isAlive();
    void Character::takeDamage(int damage);
    int Character::getAttack(int attack);
    int Character::getDefense(int defense);

protected:
    static int health; // need static?
    static int attack;
    static int defense;
    static int strength;
};

class Monster : public Character
{
    
public:
    Monster(int,int,int,int);
    void takeDamage(int damage);
    void fight(Hero);
    void death();
};

class Hero : public Character
{
public:
    Hero(int,int,int,int);
    void takeDamage(int damage);
    void fight(Monster*);
    void death();
};

/*class Character
{
public:
    Character(int,int,int,int);
    void takeDamage(int damage);
    bool isAlive() = 0;
    virtual void death() = 0;
    
    int getHealth();
    int getDefense();
protected:
    int haelth;
    int attack;
    int defense;
};*/



// Characters_hpp