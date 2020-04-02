#pragma once

#include "Character.h"

struct Dragon : Character
{
    Dragon(const std::string n, int hp, int a);
    void attack(Character& other) override;
    const std::string& getName() override;
    std::string getStats() override;
private:
    const std::string name;
};

