#include "Renderer.hpp"
#include "Sphere.hpp"
#include "Ray.hpp"
#include <iostream>
#include <cmath>

void Renderer::RenderScene(World w, Camera c)
{
    
    int width = 256;
    int height = 256;

    float focalLength = c.getFocalLenth();
    float fov = c.getFieldOfView();
    Vec3 CamPos = c.GetPosition();


    float viewportHeight = c.getheight();
    float viewportWidth = c.getWidth();

    Vec3 distance = {0, 0, focalLength};
    Vec3 viewportCenter = CamPos + distance;

    std::cout << "P3\n"
              << width << " " << height << "\n255\n";

    for (int y = 0; y < height; y++)
    {
        for (int x = 0; x < width; x++)
        {
            float u = (x + 0.5f) / width;
            float v = (y + 0.5f) / height;

            float viewportX = (u - 0.5f) * viewportWidth;
            float viewportY = (0.5f - v) * viewportHeight;

            Vec3 pixelPosition =
                viewportCenter + Vec3{viewportX, viewportY, 0};

            Vec3 rayDir = (pixelPosition - CamPos).normal();

            // Default background: BLUE
            int r = 0;
            int g = 0;
            int b = 0;

            for (const Sphere &s : w.getWorldObj())
            {
                float t;

                if (s.hitSphere(CamPos, rayDir))
                {
                    r = 255;
                    g = 0;
                    b = 0;
                }
            }

            std::cout << r << " " << g << " " << b << "\n";
        }
    }
};