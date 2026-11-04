#include "Renderer.hpp"
#include "Sphere.hpp"
#include "World.hpp"

using namespace std;

int main()
{
    World world;
    Camera camera;
    Renderer renderer;

    Sphere b(3.0f, {-35.0f,0.0f, 25.0});
    Sphere a(7.0f, {0.0f,0.0f, 30.0f});
    Sphere c(3.0f, {35.0f,0.0f, 25.0});
    

    world.AddSphere(a);
    world.AddSphere(b);
    world.AddSphere(c);

    renderer.RenderScene(world, camera);

    return 0;
}
