#include "Sphere.hpp"

Sphere::Sphere()
    : m_radius(1.0f),
      m_pos(0.0f, 0.0f, 5.0f),
      m_color(1.0f, 0.0f, 0.0f)
{}
Sphere::Sphere(float radius, Vec3 pos,Color color)
{
    m_radius = radius;
    m_pos = pos;
    m_color = color; 
}
Vec3 Sphere::getPosition()
{
    return m_pos;
}
bool Sphere::hitSphere(Vec3 &origin, Vec3 &raydir)
{
    Vec3 oc = origin - m_pos;

    float a = Vec3::dot(raydir, raydir);
    float b = 2.0f * Vec3::dot(raydir, oc);
    float c = Vec3::dot(oc, oc) - m_radius * m_radius;

    float d = b * b - 4.0f * a * c;

    if (d < 0)
        return false;

    float sqrtD = sqrt(d);

    float t1 = (-b - sqrtD) / (2.0f * a);
    float t2 = (-b + sqrtD) / (2.0f * a);

    if (t1 > 0.001f || t2 > 0.001f)
        return true;

    return false;
}

Color Sphere::getColor(){
        return m_color;
}