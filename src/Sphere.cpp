#include "Sphere.hpp"

Sphere::Sphere()
{
    m_radius = 1.0f;
    m_pos = {0.0f, 0.0f, 5.0f};
    std::cout << "Sphere is Created At Point " << m_pos << " with the radius of " << m_radius << " \n";
}
Sphere::Sphere(float radius, Vec3 pos)
{
    m_radius = radius;
    m_pos = pos;
    std::cout << "Sphere is Created At Point " << m_pos << " with the radius of " << m_radius << " \n";
}
Vec3 Sphere::getPosition()
{
    return m_pos;
}
float Sphere::hitSphere(Vec3 &origin, Vec3 &raydir)
{
    Vec3 oc = origin - m_pos;
    float a = Vec3::dot(raydir, raydir);
    float b = Vec3::dot(raydir * 2.0f, oc);
    float c = Vec3::dot(oc, oc) - m_radius * m_radius;

    float d = b * b - 4 * a * c;
    return d;
}
