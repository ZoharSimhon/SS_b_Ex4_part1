#pragma once
#include "Ninja.hpp"

namespace ariel
{
    class TrainedNinja : public Ninja
    {
    private:
        /* data */
    public:
        TrainedNinja(string name, const Point &location)
            : Ninja(location, TRAINED_NINJA_HIT_POINT, std::move(name), TRAINED_NINJA_SPEAD) {}
    };
}
