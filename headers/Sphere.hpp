#pragma once

#include <iostream>
#include "Vec3.hpp"

class Sphere
{
    float m_radius;
    Vec3 m_pos;

public:
    Sphere();
    Sphere(float radius, Vec3 pos);
    Vec3 getPosition();
    float hitSphere(Vec3 &origin, Vec3 &RayDir);
};