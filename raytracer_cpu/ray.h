#pragma once

#include "vec3.h"

class ray
{
public:
    vec3 origin;
    vec3 direction;

    ray() {}
    ray(const vec3& o, const vec3& d) : origin(o), direction(d) {}

    vec3 at(float t) const;
};
