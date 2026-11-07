
#include "Vec3.hpp"
#include <stdexcept>

// Default constructor
Vec3::Vec3() : arr{0.0f, 0.0f, 0.0f}
{}

// Parameterized constructor
Vec3::Vec3(float x, float y, float z)
    : arr{x, y, z}
{}

// Index operator
float& Vec3::operator[](int i)
{
    if (i < 0 || i >= 3)
        throw std::out_of_range("Vec3 index out of range");

    return arr[i];
}

// Addition
Vec3 Vec3::operator+(const Vec3& b) const
{
    return Vec3(
        arr[0] + b.arr[0],
        arr[1] + b.arr[1],
        arr[2] + b.arr[2]
    );
}

// Subtraction
Vec3 Vec3::operator-(const Vec3& b) const
{
    return Vec3(
        arr[0] - b.arr[0],
        arr[1] - b.arr[1],
        arr[2] - b.arr[2]
    );
}

// Scalar multiplication
Vec3 Vec3::operator*(float scaler) const
{
    return Vec3(
        arr[0] * scaler,
        arr[1] * scaler,
        arr[2] * scaler
    );
}

// Scalar division
Vec3 Vec3::operator/(float scaler) const
{
    if (scaler == 0.0f)
        throw std::invalid_argument("Division by zero");

    return Vec3(
        arr[0] / scaler,
        arr[1] / scaler,
        arr[2] / scaler
    );
}

// Addition assignment
Vec3& Vec3::operator+=(const Vec3& v)
{
    arr[0] += v.arr[0];
    arr[1] += v.arr[1];
    arr[2] += v.arr[2];

    return *this;
}

// Subtraction assignment
Vec3& Vec3::operator-=(const Vec3& v)
{
    arr[0] -= v.arr[0];
    arr[1] -= v.arr[1];
    arr[2] -= v.arr[2];

    return *this;
}

// Division assignment
Vec3& Vec3::operator/=(float scaler)
{
    if (scaler == 0.0f)
        throw std::invalid_argument("Division by zero");

    arr[0] /= scaler;
    arr[1] /= scaler;
    arr[2] /= scaler;

    return *this;
}

// Magnitude
float Vec3::magnitude() const
{
    return std::sqrt(
        arr[0] * arr[0] +
        arr[1] * arr[1] +
        arr[2] * arr[2]
    );
}

// Normalization
Vec3 Vec3::normal() const
{
    float mag = magnitude();

    if (mag == 0.0f)
        throw std::runtime_error("Cannot normalize zero vector");

    return Vec3(
        arr[0] / mag,
        arr[1] / mag,
        arr[2] / mag
    );
}

// Dot product
float Vec3::dot(const Vec3& a, const Vec3& b)
{
    return a.arr[0] * b.arr[0] +
           a.arr[1] * b.arr[1] +
           a.arr[2] * b.arr[2];
}

// Stream output
std::ostream& operator<<(std::ostream& out, const Vec3& v)
{
    out << v.arr[0] << " "
        << v.arr[1] << " "
        << v.arr[2];

    return out;
}
