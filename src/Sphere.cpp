#include "Sphere.hpp"

Sphere::Sphere()
{
    std::cout << "Sphere is Created at position :" << Sphere::position << std::endl;
}
Sphere::Sphere(float radius)
{
    std::cout << "Sphere is Created of Radius " << radius << " at position :" << Sphere::position << std::endl;
}
Vec3 Sphere::getPosition()
{
    return this->position;
}
