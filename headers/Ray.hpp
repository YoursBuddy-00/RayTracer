#pragma once

#include "Vec3.hpp"

class Ray
{
    Vec3 m_origin;
    Vec3 m_direction = {1, 1, 1};

public:
    Ray();
    Ray(Vec3 origin, Vec3 direction);
    Vec3 AtPointT(float p);
    Vec3 GetDirection();
    Vec3 GetOrigin();
};