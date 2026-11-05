#include "Renderer.hpp"
#include "Sphere.hpp"
#include "Ray.hpp"
#include <iostream>
#include <cmath>

void Renderer::RenderScene(World w, Camera c)
{
    
    int imageWidth = 1920;
    int imageHeight = 1080;

    float focalLength = c.getFocalLength();
    float fov = c.getFieldOfView();
    Vec3 CamPos = c.GetPosition();


    float viewportHeight = c.getheight();
    float viewportWidth = c.getWidth();

    Vec3 distance = {0, 0, focalLength};
    Vec3 viewportCenter = CamPos + distance;

    std::cout << "P3\n"
              << imageWidth << " " << imageHeight << "\n255\n";

    for (int y = 0; y < imageHeight; y++)
    {
        for (int x = 0; x < imageWidth; x++)
        {
            float u = (x + 0.5f) / imageWidth;
            float v = (y + 0.5f) / imageHeight;

            float viewportX = (u - 0.5f) * viewportWidth;
            float viewportY = (0.5f - v) * viewportHeight;

            Vec3 pixelPosition =
                viewportCenter + Vec3{viewportX, viewportY, 0};

            Vec3 rayDir = (pixelPosition - CamPos).normal();

            float r = 0.0,g = 0.0,b= 0.0;  
            for (Sphere s : w.getWorldObj())
            {
                if (s.hitSphere(CamPos, rayDir))
                {
                    r = 255;
                }
            }

            std::cout << r << " " << g << " " << b << "\n";
        }
    }
};