#include <iostream>
#include "Dwarf.h"
#include "Utility.h"

Dwarf::Dwarf(const std::string n, int hp, int a): Character(hp, a, 4), name(n)
{
    helpfulItems = makeHelpfulItems(std::rand()%10+1);

    defensiveItems = makeDefensiveItems(std::rand()%10+1);
}

const std::string& Dwarf::getName()
{
    return name;
}

std::string Dwarf::getStats()
{
    return getCharacterStats(this);
}
