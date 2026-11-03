#include "Renderer.hpp"
#include "Sphere.hpp"
#include "World.hpp"

using namespace std;

int main()
{
    World world;
    Camera camera;
    Renderer renderer;

    Sphere a(5.04f, {1.0f, 0.0f, 10.0f});
    Sphere b(3.0f, {5.0f, 2.0f, 8.0f});
    Sphere c(15.0f, {-5.0f, -1.0f, 6.0f});

    world.AddSphere(a);
    world.AddSphere(b);
    world.AddSphere(c);

    renderer.RenderScene(world, camera);

    return 0;
}
