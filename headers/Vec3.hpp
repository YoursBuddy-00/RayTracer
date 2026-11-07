#pragma once
#include <cmath>
#include <iostream>

class Vec3
{
public:
    Vec3();
    Vec3(float x, float y, float z);

    float arr[3] = {0.0f, 0.0f, 0.0f};

    float& operator[](int i);

    Vec3 operator+(const Vec3& b) const;
    Vec3 operator-(const Vec3& b) const;
    Vec3 operator*(float scaler) const;
    Vec3 operator/(float scaler) const;

    Vec3& operator+=(const Vec3& v);
    Vec3& operator-=(const Vec3& v);
    Vec3& operator/=(float scaler);

    static float dot(const Vec3& a, const Vec3& b);

    Vec3 normal() const;
    float magnitude() const;

    friend std::ostream& operator<<(std::ostream& out, const Vec3& v);
};

using Point = Vec3;
using Color = Vec3;