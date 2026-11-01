#include "Ray.hpp"

Ray::Ray()
{
    std::cout << "Ray is Created\n";
}
Ray::Ray(float x, float y, float z)
{
    m_origin[0] = x;
    m_origin[1] = y;
    m_origin[2] = z;
}
Vec3 Ray::AtPointT(float t)
{
    return Vec3(1, 2, 3);
}
Vec3 Ray::GetDirection()
{
    return m_direction;
}
Vec3 Ray::GetOrigin()
{
    return m_origin;
}