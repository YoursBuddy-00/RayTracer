#include "Renderer.hpp"
#include "Color.hpp"

using namespace Colors;
using namespace std;
int main()
{

    World world;
    Camera camera;
    Renderer renderer;

    Sphere s1(2.0f,{0.5,0.0,5.0},green);
    Sphere s2(3.0f,{-0.5,0.0,5.0},blue);

    world.AddSphere(s1);
    world.AddSphere(s2);


    renderer.RenderScene(world,camera);

    return 0;
}
