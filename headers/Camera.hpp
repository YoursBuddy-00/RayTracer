#pragma once
#include "Vec3.hpp"

class Camera
{
    Vec3 cameraPos = {0, 1, -10};
    float focalLength = 10;
    float fieldOfView = 60;
    float ViewportHeight = 2 * focalLength * (tan(fieldOfView / 2));

    float ViewportWidth = ViewportHeight * aspectRatio;

public:
    static constexpr float aspectRatio = 16.0 / 9.0;
    Camera();
    Camera(float, float, float);
    Vec3 GetPosition();
    void setFOV(float);
    void setFocalLength(float);
    float getFocalLenth();
    float getFieldOfView();
};