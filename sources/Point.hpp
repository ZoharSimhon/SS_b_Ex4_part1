#pragma once
#include <string>
#include <iostream>
#include <vector>

using namespace std;

namespace ariel
{
    class Point
    {
    private:
        double x_;
        double y_;

    public:
        // constructors
        Point(double, double);
        double distance(const Point &) const;
        void print() const;
        Point moveTowards(Point &, double) const;
    };
}