#include "World.hpp"

World::World(){
    std::cout << "World is Created\n";
}

void World::AddSphere(Sphere &obj)
{
    world.push_back(obj);
}

std::vector<Sphere> World::getWorldObj(){
        return world;
    }