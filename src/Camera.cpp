#include "Camera.hpp"

Camera::Camera()
    : cameraPos(0, 0, 0),
      focalLength(1.0f),
      fieldOfView(90.0f),
      ViewportHeight(2.0f),
      ViewportWidth(3.55f)
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
