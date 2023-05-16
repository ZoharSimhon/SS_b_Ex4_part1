#pragma once
#include "Character.hpp"

namespace ariel
{
    class Ninja : public Character
    {
    private:
        int spead_;

    public:
        Ninja(const Point &, int, string, int);
        void move(const Character *);
        void slash(Character *) const;
    };
}
