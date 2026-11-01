#pragma once

#include <iostream>
#include "Vec3.hpp"

class Sphere
{
    Vec3 position;
    float radius;

public:
    Sphere();
    Sphere(float radius);
    Vec3 getPosition();
};