#include "doctest.h"
#include <stdexcept>
#include <stddef.h>
#include <iostream>
#include <sstream>

#include "sources/Team.hpp" //no need for other includes

using namespace ariel;

TEST_SUITE("class Point")
{
    TEST_CASE("Point constructor")
    {
        Point p1(5.2, -5);
        CHECK_EQ(p1.getX(), 5.2);
        CHECK_EQ(p1.getY(), -5);

        CHECK_NOTHROW(Point(-100, -100));
    }

    TEST_CASE("distance method")
    {
        // check distance for positve points
        Point positve1(5, 7);
        Point positve2(100, 1);
        double distPositive1 = positve1.distance(positve2);
        CHECK_EQ(distPositive1, doctest::Approx(0).epsilon(95.1892));
        // check that the distances equal from both the points
        double distPositive2 = positve2.distance(positve1);
        CHECK_EQ(distPositive1, distPositive1);

        // check distance for negative points
        Point negative1(-5, -2);
        Point negative2(-51, -23);
        double distNegative1 = negative1.distance(negative2);
        CHECK_EQ(distNegative1, doctest::Approx(0).epsilon(50.56678));
        // check that the distances equal from both the points
        double distNegative2 = negative2.distance(negative1);
        CHECK_EQ(distNegative1, distNegative2);

        // check distant from point to itself
        Point p1(5, 0);
        CHECK_EQ(p1.distance(p1), 0);
    }

    TEST_CASE("print method")
    {
        Point p1(2, -2);
        string printP1 = p1.print();
        CHECK_EQ(printP1, "(2,-2)");

        Point p2(5, 0.573);
        string printP2 = p2.print();
        CHECK_NE(printP2, "(5, 0.5)");
    }

    TEST_CASE("moveTowards method")
    {
        Point src(0, 0);
        Point dest(2, 0);

        // gives negetive distance
        double negetiveDistance = -5;
        CHECK_THROWS(Point::moveTowards(src, dest, negetiveDistance));

        // gives 0 distance
        double zeroDistance = 0;
        Point zeroPoint = Point::moveTowards(src, dest, zeroDistance);
        CHECK_EQ(zeroPoint.getX(), 0);
        CHECK_EQ(zeroPoint.getY(), 0);

        // check equal distance:
        double equalDistance = 2;
        Point equalPoint = Point::moveTowards(src, dest, equalDistance);
        CHECK_EQ(equalPoint.getX(), 2);
        CHECK_EQ(equalPoint.getY(), 0);

        // check big disatnce
        double bigDisatnce = 2;
        Point bigPoint = Point::moveTowards(src, dest, bigDisatnce);
        CHECK_EQ(bigPoint.getX(), 2);
        CHECK_EQ(bigPoint.getY(), 0);

        // check little distance
        double littleDistance = 1;
        Point littlePoint = Point::moveTowards(src, dest, littleDistance);
        CHECK_EQ(littlePoint.getX(), 1);
        CHECK_EQ(littlePoint.getY(), 0);
    }
}

TEST_SUITE("class Cowboy")
{
    TEST_CASE("Cowboy constructor")
    {
        Point location(2, 20);
        Cowboy c1("Cowboy", location);

        CHECK_EQ(c1.getName(), "Cowboy");
        CHECK_EQ(c1.getLocation().getX(), 2);
        CHECK_EQ(c1.getLocation().getY(), location.getY());

        // check that we can build new Cowboy with the same name
        CHECK_NOTHROW(Cowboy("Cowboy", Point(-5, 3)));
    }

    TEST_CASE("isAlive method")
    {
        // check that the cowboy is alive as defult
        Point location(2, 20);
        Cowboy c1("Cowboy1", location);
        Cowboy c2("Cowboy2", Point(2, 10));

        CHECK(c1.isAlive());
        CHECK(c2.isAlive());
    }

    TEST_CASE("distance method")
    {
        // integer distance
        Point location(2, 20);
        Cowboy c1("Cowboy1", location);
        Cowboy c2("Cowboy2", Point(2, 10));
        CHECK_EQ(c1.distance(c2), 10);

        // distance from both cowboys
        Cowboy c3("Cowboy3", Point(3, -3));
        Cowboy c4("Cowboy4", Point(2, -10));
        double equalDistance = c3.distance(c4);
        CHECK_EQ(equalDistance, c4.distance(c3));

        // regular check
        Cowboy c5("Cowboy5", Point(3, -3));
        Cowboy c6("Cowboy6", Point(0, -10));
        CHECK_EQ(c5.distance(c6), 7.6157731058639);
    }
}

TEST_SUITE("Ninja")
{
    TEST_CASE("OldNinga")
    {
        // constructors
        Point location(0, 9);
        OldNinja on1("OldNinja1", location);

        CHECK_EQ(on1.getName(), "OldNinja1");
        CHECK_EQ(on1.getLocation().getX(), 0);

        CHECK_NOTHROW(OldNinja("OldNinja2", Point(2, 92)));

        // check is alive
        CHECK(on1.isAlive());
    }

    TEST_CASE("YoungNinga")
    {
        Point location(20, 9);
        OldNinja yn1("YoungNinga1", location);

        CHECK_EQ(yn1.getName(), "YoungNinga1");
        CHECK_EQ(yn1.getLocation().getY(), 20);

        CHECK_NOTHROW(OldNinja("YoungNinga2", Point(-2, -92)));

        // check is alive
        CHECK(yn1.isAlive());
    }

    TEST_CASE("TrainedNinja")
    {
        Point location(1, 20);
        TrainedNinja tn1("TrainedNinja1", location);

        CHECK_EQ(tn1.getName(), "TrainedNinja1");
        CHECK_EQ(tn1.getLocation().getX(), location.getX());
        CHECK_EQ(tn1.getLocation().getY(), location.getY());

        CHECK_NOTHROW(OldNinja("TrainedNinja2", Point(0, 2)));

        // check is alive
        CHECK(tn1.isAlive());
    }
}

