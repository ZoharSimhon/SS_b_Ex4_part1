#pragma once

#include "Cowboy.hpp"
#include "Ninja.hpp"
#include "OldNinja.hpp"
#include "TrainedNinja.hpp"
#include "YoungNinja.hpp"

namespace ariel
{
    class Team
    {
    private:
        vector<Character *> group;
        int leaderIndex;

    public:
        Team(Character *);
        void add(Character *);
        void attack(Team *);
        int stillAlive() const;
        void print() const;
        // ~Team();
    };
}