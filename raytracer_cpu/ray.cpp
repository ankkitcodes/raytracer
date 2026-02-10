#include "ray.h"

vec3 ray::at(float t) const
{
    return origin + direction * t;
}
