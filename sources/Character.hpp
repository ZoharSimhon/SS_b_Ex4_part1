#pragma once
#include "Point.hpp"

const int YOUNG_NINJA_HIT_POINT = 100;
const int TRAINED_NINJA_HIT_POINT = 120;
const int OLD_NINJA_HIT_POINT = 150;
const int COWBOY_HIT_POINT = 110;

const int YOUNG_NINJA_SPEAD = 14;
const int TRAINED_NINJA_SPEAD = 12;
const int OLD_NINJA_SPEAD = 8;
const int COWBOY_BALLS_NUMBER = 6;


namespace ariel
{
    class Character
    {
    private:
        Point location_;
        int hitPoint_;
        string name_;

    public:
        // constructor
        Character(const Point &, int, string);
        bool isAlive() const;
        double distance(const Character &) const;
        void hit(int);
        string getName() const;
        Point getLocation() const;
        string print() const;
    }; //class Character

} // namespace ariel    
