#include <iostream>
#include "Paladin.h"
#include "Utility.h"

Paladin::Paladin(const std::string n, int hp, int a): Character(hp, a, 10), name(n)
{
    helpfulItems = makeHelpfulItems(std::rand()%10+1);

    defensiveItems = makeDefensiveItems(std::rand()%10+1);
}

const std::string& Paladin::getName()
{

}

std::string Paladin::getStats()
{
    return getCharacterStats(this);
}