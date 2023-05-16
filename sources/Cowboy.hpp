#pragma once
#include "Character.hpp"

namespace ariel
{
    class Cowboy : public Character
    {
    private:
        int ballsNumber_;

    public:
        Cowboy(string, const Point &);
        void shoot(Character *) const;
        bool hasboolets() const;
        void reload();
    };
}
