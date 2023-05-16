#pragma once

#include "Cowboy.hpp"
#include "Ninja.hpp"
#include "OldNinja.hpp"
#include "TrainedNinja.hpp"
#include "YoungNinja.hpp"

namespace ariel
{
    class Team2
    {
    private:
        vector<Character *> group;
        int leaderIndex;

    public:
        Team2(Character);
        void add(Character *);
        void attack(Team2 *);
        int stillAlive() const;
        void print() const;
        // ~Team2();
    };
}
