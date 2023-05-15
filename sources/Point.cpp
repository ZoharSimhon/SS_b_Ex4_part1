#include "Point.hpp"
using namespace ariel;

// constructor
Point::Point(double x, double y)
{
    this->x_ = x;
    this->y_ = y;
}

double Point::distance(const Point &otherPoint) const
{
    return 0.0;
}

void Point::print() const
{
}

Point moveTowards(Point &, double) const
{
    return Point(0.0, 0.0);
}
