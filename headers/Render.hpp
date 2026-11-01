#pragma once
#include "World.hpp"
#include "Ray.hpp"
#include "Camera.hpp"
#include "Image.hpp"

class Render
{
    World world;
    std::vector<Ray> r;
    Camera camera;
    Image FinalImage;

public:
    Image RenderScene(World, Camera, Ray);
};
