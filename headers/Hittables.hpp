#pragma once
class HitRecord{
    public:
    Point P;
    Vec3 Nornal;
    float t;
};

class Hittable{
    public:
    virtual ~Hittable() = default;
    virtual bool Hit(Vec3& ray,float tmin,float tmax,HitRecord& record) = 0;
};
