#include <iostream>
#include "Dragon.h"
#include "DragonSlayer.h"

Dragon::Dragon(const std::string n, int hp, int a): Character(hp, a, 80), name(n) 
{

}

void Dragon::attack(Character &other)
{
    std::cout << name << " is attacking " << other.getName() << "!!!" << std::endl;
    if( auto* slayer = dynamic_cast<DragonSlayer*>(&other) )
    {
        //dragons can't attack dragon slayers
        slayer->defend();
    }
    else
    {
        Character::attack(other);
    }
}

const std::string& Dragon::getName()
{

}

std::string Dragon::getStats()
{

}