#pragma once

#include "Character.h"
#include "AttackItem.h"

struct DragonSlayer : Character
{
    DragonSlayer(const std::string n, int hp, int a);
    void attack(Character& other) override;
    const std::string& getName() override;
    std::string getStats() override;
private:
    const std::string name;
    std::unique_ptr<AttackItem> attackItem{new AttackItem()};
};
