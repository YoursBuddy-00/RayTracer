#include "World.hpp"

World::World(){}

void World::AddSphere(Sphere &obj)
{
    world.push_back(obj);
}

const std::vector<Sphere>& World::getWorldObj(){
        return world;
}