#pragma once
#include "World.hpp"
#include "Camera.hpp"
#include "Image.hpp"

class Renderer
{
    World world;
    Camera camera;

public:
    Image RenderScene(World, Camera);
};
