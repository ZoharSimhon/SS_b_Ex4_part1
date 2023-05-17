#include "Point.hpp"
using namespace ariel;

// constructor
Point::Point(double x, double y) : x_(x), y_(y) {}

// getters
double Point::getX() { return this->x_; }
double Point::getY() { return this->y_; }

double Point::distance(const Point &otherPoint) const
{
    return 0.0;
}

string Point::print() const
{
    return "(0,0)";
}

const Point Point::moveTowards(const Point &src, const Point &dest, double distance)
{
    return Point(0.0, 0.0);
}
