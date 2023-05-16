#pragma once
#include "Ninja.hpp"

namespace ariel
{
    class TrainedNinja : Ninja
    {
    private:
        /* data */
    public:
        TrainedNinja(string name, const Point &location)
            : Ninja(location, TRAINED_NINJA_HIT_POINT, name, TRAINED_NINJA_SPEAD) {}
    };
}
