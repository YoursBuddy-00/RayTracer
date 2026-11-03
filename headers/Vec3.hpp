
#pragma once
#include <cmath>
#include <iostream>

class Vec3
{
public:
    Vec3();
    float arr[3] = {0.0f, 0.0f, 0.0f};
    Vec3(float x, float y, float z);
    float &operator[](int);
    Vec3 &operator+=(const Vec3 &);
    Vec3 &operator-=(const Vec3 &);
    Vec3 operator+(const Vec3 &);
    Vec3 operator-(const Vec3 &);
    Vec3 &operator*(float);
    Vec3 &operator/=(float);
    static float dot(Vec3 &a, Vec3 &b);
    friend std::ostream &operator<<(std::ostream &out, const Vec3 &v);
    Vec3 normal() const;
    float magnitude() const;
};
