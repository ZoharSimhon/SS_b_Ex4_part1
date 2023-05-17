#include "Character.hpp"
using namespace ariel;

// constructor
Character::Character(const Point &location, int hitPoint, string name)
    : location_(location), hitPoint_(hitPoint), name_(name) {}

bool Character::isAlive() const
{
    return true;
}

double Character::distance(const Character &otherCharecter) const
{
    return 0.0;
}

void Character::hit(int num)
{
}

string Character::getName() const
{
    return this->name_;
}
Point Character::getLocation() const
{
    return this->location_;
}

string Character::print() const
{
    return "Character";
}
