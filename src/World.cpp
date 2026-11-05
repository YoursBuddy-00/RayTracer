#include "World.hpp"

World::World(){}

void World::AddSphere(Sphere &obj)
{
    world.push_back(obj);
}

std::vector<Sphere>& World::getWorldObj(){
        return world;
}