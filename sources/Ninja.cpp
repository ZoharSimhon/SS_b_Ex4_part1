#include "Ninja.hpp"
using namespace ariel;

Ninja::Ninja(const Point &location, int hitPoint, string name, int spead)
    : Character(location, hitPoint, name), spead_(spead) {}

void Ninja::move(const Character *)
{
}
void Ninja::slash(Character *) const
{
}