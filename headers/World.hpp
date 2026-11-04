#pragma once

#include <vector>
#include "Sphere.hpp"

class World
{
    std::vector<Sphere> world;

public:
    World();
    void AddSphere(Sphere &obj);
    const std::vector<Sphere>& getWorldObj();
};