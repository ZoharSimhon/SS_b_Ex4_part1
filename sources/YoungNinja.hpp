#pragma once

#include "Ninja.hpp"

namespace ariel
{
    class YoungNinja : public Ninja
    {
    private:
        /* data */
    public:
        YoungNinja(string name, const Point &location)
            : Ninja(location, YOUNG_NINJA_HIT_POINT, std::move(name), YOUNG_NINJA_SPEAD) {}
    };
}
