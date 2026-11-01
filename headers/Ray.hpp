#pragma once

#include "Vec3.hpp"

class Ray
{
    Vec3 m_origin;
    Vec3 m_direction = {1, 1, 1};

public:
    Ray();
    Ray(float, float, float);
    Vec3 AtPointT(float p);
    Vec3 GetDirection();
    Vec3 GetOrigin();
};