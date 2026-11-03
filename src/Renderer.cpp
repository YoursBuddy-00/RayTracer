#include "Renderer.hpp"
#include "Sphere.hpp"
#include "Ray.hpp"

Image Renderer::RenderScene(World w, Camera c)
{
    Image i;
    int x = i.getImageWidth();
    int y = i.getImageHeight();

    float focalLength = c.getFocalLenth();
    float fov = c.getFieldOfView();

    Vec3 CamPos = c.GetPosition();

    // Viewport
    float ViewportHeight = 2 * focalLength * (tan(fov * 0.5));
    float ViewportWidth = ViewportHeight * Image::AspectRatio;
    Vec3 distance = {0, 0, focalLength};
    Vec3 ViewportCenter = CamPos + distance;

    for (int y = 0; y < i.getImageHeight(); y++)
    {
        for (int x = 0; x < i.getImageWidth(); x++)
        {
            float u = (x + 0.5f) / i.getImageWidth();
            float v = (x + 0.5f) / i.getImageHeight();

            float viewportX = (u - 0.5f) * ViewportWidth;
            float viewportY = (0.5f - v) * ViewportHeight;

            Vec3 pixelPosition = ViewportCenter + Vec3{viewportX, viewportY, 0};

            Vec3 rayDir = (pixelPosition - c.GetPosition()).normal();

            Ray r(CamPos, rayDir);
            Sphere s;
            float hitSphere = s.hitSphere(CamPos, rayDir);
            Vec3 color = {0, 0, 0};

            if (hitSphere)
            {
                color = {255, 0, 0};
            }
            else
            {
                color = {255, 255, 0};
            }

            i.SetPixel(viewportX, viewportY, color);
        }
    }
}
