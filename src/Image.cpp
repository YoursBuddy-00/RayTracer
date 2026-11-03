#include "Image.hpp"

Image::Image()
{
    std::cout << "Image is Created\n";
}
Image::~Image()
{
    std::cout << "Image is Destroyed\n";
}
void Image::SetPixel(int x, int y, Vec3 &c)
{
    int r = 255.0f;
    int g = 0.0f;
    int b = 0.0f;
    std::cout << r << " " << g << " " << b << "\n";
}
void Image::SaveImage()
{
    std::cout << "Image is Saved\n";
}