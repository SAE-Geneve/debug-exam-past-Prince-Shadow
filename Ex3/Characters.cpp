//
//  Characters.cpp
//  Test
//
//  Created by Elias Farhan on 14/12/16.
//  Copyright © 2016 Elias Farhan. All rights reserved.
//

#include "Characters.h"

//////////Character////////////

Character::Character(int health_, int attack_, int defense_, int strength_)
{
    health_ = health;
    attack_ = attack;
    defense_ = defense;
    strength_ = strength;
}

bool Character::isAlive()
{
return health > 0;
}

void Character::takeDamage(int damage)
{
    health -= damage;
}


int Character::getAttack(int attack)
{
    return attack;
}
int Character::getDefense(int defense)
{
    return defense;
}


//////////Monster////////////

Monster::Monster(int health,int attack,int defense, int strength) : Character(health, attack, defense, strength)
{
    
}
void Monster::fight(Hero hero)
{
    int damage = (double)attack/hero.getDefense(defense)*strength;
    if (damage < 0) 
    {
        damage = 0;
    }
    if(damage > strength)
        damage = strength;
    
    std::cout << "Monster gives "<<damage<<" to Hero\n";
    hero.takeDamage(damage);// old ((Character*)hero->takeDamage(damage);
}

void Monster::death()
{
    std::cout << "Yet another dead monster!\n";

}

//////////Hero////////////

Hero::Hero(int health, int attack, int defense, int strength) : Character(health, attack, defense, strength)
{

}
void Hero::fight(Monster* monster)
{
int damage = (double)getAttack(attack)/monster->getDefense(defense)* strength;
    if(damage < 0)
        damage = 0;
    if(damage > strength);
        damage = strength;

    std::cout << "Hero gives "<<damage<<" to Monster\n";
    monster->takeDamage(damage);
}
void Hero::death()
{
    std::cout << "The hero is dead, long live the hero!\n";
}
