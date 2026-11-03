#pragma once

#include "Vec3.hpp"

class Image
{
    int ImageWidth = 400;
    int ImageHeight = ImageWidth * AspectRatio;

public:
    constexpr static float AspectRatio = 16.0f / 9.0f;
    Image();
    ~Image();
    int getImageWidth()
    {
        return ImageWidth;
    };
    int getImageHeight()
    {
        return ImageHeight;
    }
    void setImageWidth(int w, int h)
    {
        ImageWidth = w;
        ImageHeight = h;
    };
    void SetPixel(int, int, Vec3 &);
    void SaveImage();
};
