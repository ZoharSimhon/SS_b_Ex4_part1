#pragma once
#include "Point.hpp"

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
        int getLocation() const;
        void print() const;
    }; //class Character

} // namespace ariel    
