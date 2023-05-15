#include "Ninja.hpp"
#include <vector>

// using namespace ariel
// {
class Team
{
private:
    vector<Character *> group;
    int leaderIndex;

public:
    Team(Character);
    void add(Character*);
    void attack(Team*);
    int stillAlive() const;
    void print() const;
    ~Team();
};
// }