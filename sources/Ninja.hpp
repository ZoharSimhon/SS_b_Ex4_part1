#pragma once
#include "Character.hpp"

class Ninja : public Character
{
private:
    int spead;

public:
    Ninja(onst Point &, int, string, int);
    void move(const Character *);
    void slash(Character *) const;
};
