#include "Camera.hpp"

Camera::Camera()
{}

Camera::Camera(float x, float y, float z)
{
    cameraPos = {x, y, z};
}

Vec3 Camera::GetPosition()
{
    return cameraPos;
}
void Camera::setFocalLength(float fl)
{
    focalLength = fl;
}
void Camera::setFOV(float fov)
{
    fieldOfView = fov;
}

float Camera::getFieldOfView()
{
    return fieldOfView;
}
float Camera::getFocalLength()
{
    return focalLength;
}
float Camera::getheight(){
    return ViewportHeight;
}
float Camera::getWidth(){
    return ViewportWidth;
}
