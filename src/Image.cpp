#include "Image.hpp"

Image::Image()
{
}
Image::~Image()
{}
Image::Image(int w,int h){
    ImageWidth = w,ImageHeight=h;
}
void Image::SetPixel(Vec3 c)
{

    std::cout<<c;
}
void Image::SaveImage()
{
    std::cout << "Image is Saved\n";
}