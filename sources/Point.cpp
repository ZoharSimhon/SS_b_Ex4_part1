#include "Point.hpp"
using namespace ariel;

// constructor
Point::Point(double x, double y) : x_(x), y_(y) {}

double Point::distance(const Point &otherPoint) const
{
    return 0.0;
}

void Point::print() const {}

    & Point Point::moveTowards(Point &dest, double distance) const
{
    return Point(0.0, 0.0);
}
