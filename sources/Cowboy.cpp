#include "Cowboy.hpp"

using namespace ariel;

Cowboy::Cowboy(string name, const Point &location)
    : Character(location, COWBOY_HIT_POINT, name), ballsNumber_(COWBOY_HIT_POINT) {}

void Cowboy::shoot(Character * enemy) const
{
}
bool Cowboy::hasboolets() const
{
    return true;
}
void Cowboy::reload()
{
}