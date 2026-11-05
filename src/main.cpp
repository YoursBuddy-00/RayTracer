#include "Renderer.hpp"

using namespace std;

int main()
{
    World world;
    Camera camera;
    Renderer renderer;

    Sphere b(5.0f, {-35.0f,0.0f, 25.0});
    Sphere a(10.0f, {0.0f,0.0f, 30.0f});
    Sphere c(5.0f, {35.0f,0.0f, 25.0});
    

    world.AddSphere(a); 
    world.AddSphere(b);
    world.AddSphere(c);

    renderer.RenderScene(world,camera);

    return 0;
}
