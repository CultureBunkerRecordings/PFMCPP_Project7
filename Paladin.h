#pragma once

#include "Character.h"

struct Paladin : Character
{
    Paladin(const std::string n, int hp, int a);
    const std::string& getName() override;
    std::string getStats() override;
private:
    const std::string name;
    std::vector<std::unique_ptr<Item>> helpfulItems;
    std::vector<std::unique_ptr<Item>> defensiveItems;
};