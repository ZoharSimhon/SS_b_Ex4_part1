#include "Team.hpp"

using namespace ariel;

Team::Team(Character * leader)
{
    this->group.push_back(leader);
    this->leaderIndex = 0;
}
void Team::add(Character *member) {}
void Team::attack(Team *enemy) {}
int Team::stillAlive() const { return 0; }
void Team::print() const {}