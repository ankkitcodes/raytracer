#pragma once

#include "vec3.h"
#include "ray.h"

class sphere
{
public:
    vec3 center;
    float radius;

    sphere() {}
    sphere(const vec3& c, float r) : center(c), radius(r) {}

    // Returns true if ray hits the sphere
    // t is the distance along the ray where the hit occurs
    bool hit(const ray& r, float& t) const;
};
