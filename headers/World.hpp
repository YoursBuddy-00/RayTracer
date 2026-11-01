#pragma once

#include <vector>
#include "Sphere.hpp"

class World
{
    std::vector<Sphere> world;

public:
    World();
    void AddSphere(Sphere &obj);
    std::vector<Sphere> getWorldObj();
};