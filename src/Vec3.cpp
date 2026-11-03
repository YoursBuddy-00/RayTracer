
#include "Vec3.hpp"
#include <stdexcept>

Vec3::Vec3()
{
    std::cout << "Vector is Created\n";
}

Vec3::Vec3(float x, float y, float z)
{
    arr[0] = x;
    arr[1] = y;
    arr[2] = z;
}

float &Vec3::operator[](int i)
{
    return arr[i];
}

Vec3 &Vec3::operator+=(const Vec3 &v)
{
    arr[0] += v.arr[0];
    arr[1] += v.arr[1];
    arr[2] += v.arr[2];

    return *this;
}

Vec3 &Vec3::operator-=(const Vec3 &v)
{
    arr[0] -= v.arr[0];
    arr[1] -= v.arr[1];
    arr[2] -= v.arr[2];

    return *this;
}

Vec3 Vec3::operator+(const Vec3 &b)
{
    Vec3 ans;
    ans[0] = arr[0] + b.arr[0];
    ans[1] = arr[1] + b.arr[1];
    ans[2] = arr[2] + b.arr[2];
    return ans;
}
Vec3 Vec3::operator-(const Vec3 &b)
{
    Vec3 ans;
    ans[0] = arr[0] - b.arr[0];
    ans[1] = arr[1] * b.arr[1];
    ans[2] = arr[2] - b.arr[2];
    return ans;
}
Vec3 &Vec3::operator*(float scaler)
{
    arr[0] *= scaler;
    arr[1] *= scaler;
    arr[2] *= scaler;

    return *this;
}

Vec3 &Vec3::operator/=(float scaler)
{
    if (scaler == 0.0f)
    {
        throw std::invalid_argument("Division by zero");
    }

    arr[0] /= scaler;
    arr[1] /= scaler;
    arr[2] /= scaler;

    return *this;
}

float Vec3::magnitude() const
{
    return std::sqrt(
        arr[0] * arr[0] +
        arr[1] * arr[1] +
        arr[2] * arr[2]);
}

Vec3 Vec3::normal() const
{
    float mag = magnitude();

    if (mag == 0.0f)
    {
        throw std::runtime_error("Cannot normalize zero vector");
    }

    Vec3 result;

    result.arr[0] = arr[0] / mag;
    result.arr[1] = arr[1] / mag;
    result.arr[2] = arr[2] / mag;

    return result;
}

std::ostream &operator<<(std::ostream &out, const Vec3 &v)
{
    out << v.arr[0] << " "
        << v.arr[1] << " "
        << v.arr[2];

    return out;
}
float Vec3::dot(Vec3 &a, Vec3 &b)
{
    float dotValue = a.arr[0] * b.arr[0] + a.arr[1] * b.arr[1] + a.arr[2] * b.arr[2];
    return dotValue;
}