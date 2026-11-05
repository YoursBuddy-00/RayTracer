#pragma once
#include "Vec3.hpp"
#include<cmath>


class Camera
{
    Vec3 cameraPos = {0, 0, -10};
    float focalLength = 10;
    float fieldOfView = 75;
    float fov = fieldOfView * (M_PI / 180.0f);
    float ViewportHeight = 2 * focalLength * (tan(fov / 2));
    float ViewportWidth = ViewportHeight * aspectRatio;

public:
    static constexpr float aspectRatio = 16.0 / 9.0;
    Camera();
    Camera(float, float, float);
    Vec3 GetPosition();
    void setFOV(float);
    float getFieldOfView();
    void setFocalLength(float);
    float getFocalLength();
    float getheight();
    float getWidth();
};