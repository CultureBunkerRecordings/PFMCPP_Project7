#include <iostream>
#include "DragonSlayer.h"
#include "Dragon.h"
#include "Utility.h"

DragonSlayer::DragonSlayer(const std::string n, int hp, int a): Character(hp, a, 4), name(n) 
{
    helpfulItems = makeHelpfulItems(std::rand()%10+1);

    defensiveItems = makeDefensiveItems(std::rand()%10+1);
}

const std::string& DragonSlayer::getName()
{

}

void DragonSlayer::attack(Character& other)
{
    std::cout << name << " is attacking " << other.getName() << " !!" << std::endl;
    if( auto* dragon = dynamic_cast<Dragon*>(&other) )
    {
        at.use(&other);

        //DragonSlayers get a 10x boost when attacking dragons, from their attack item.
        //so they should USE their attack item before attacking the dragon... 
        //
        while( dragon->getHP() > 0 )
        {
          dragon->takeDamage(attackDamage);
        }
    }
        
    Character::attack(other);
        
}

std::string DragonSlayer::getStats()
{
    return getCharacterStats(this);
}
