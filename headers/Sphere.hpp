#pragma once

#include <iostream>
#include "Color.hpp"
#include "Vec3.hpp"

class Sphere
{
    float m_radius;
    Vec3 m_pos;
    Color m_color;

public:
    Sphere();
    Sphere(float radius, Vec3 pos,Color c);
    Vec3 getPosition();
    Color getColor();
    bool hitSphere(Vec3 &origin, Vec3 &RayDir);
};