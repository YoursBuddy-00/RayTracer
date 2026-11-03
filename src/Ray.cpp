#include "Ray.hpp"

Ray::Ray()
{
    std::cout << "Ray is Created\n";
}
Ray::Ray(Vec3 origin, Vec3 direction)
{
    m_origin = origin;
    m_direction = direction;
}
Vec3 Ray::AtPointT(float t)
{
    return m_origin + (m_direction * t);
}
Vec3 Ray::GetDirection()
{
    return m_direction;
}
Vec3 Ray::GetOrigin()
{
    return m_origin;
}