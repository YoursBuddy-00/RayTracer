#include "Camera.hpp"
#include "Sphere.hpp"
#include "World.hpp"

using namespace std;

int main()
{
    World w;
    Camera r;

    Sphere a(5);
    Sphere b(10);
    Sphere c(15);

    w.AddSphere(a);
    w.AddSphere(b);
    w.AddSphere(c);

    return 0;
}
