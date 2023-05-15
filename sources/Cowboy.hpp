#pragma once
#include "Character.hpp"

class Cowboy : public Character
{
private:
    int ballsNumber;

public:
    Cowboy(string, const Point &);
    void shoot(Character *) const;
    bool hasboolets() const;
    void reload();
};
