#include "sphere.h"

bool sphere::hit(const ray& r, float& t) const
{
    vec3 oc = r.origin - center;

    float a = vec3::dot(r.direction, r.direction);
    float b = 2.0f * vec3::dot(oc, r.direction);
    float c = vec3::dot(oc, oc) - radius * radius;

    float discriminant = b * b - 4 * a * c;

    if (discriminant < 0.0f)
        return false;

    float sqrt_d = std::sqrt(discriminant);

    float t0 = (-b - sqrt_d) / (2.0f * a);
    float t1 = (-b + sqrt_d) / (2.0f * a);

    // Pick the closest positive hit
    if (t0 > 0.001f)
    {
        t = t0;
        return true;
    }

    if (t1 > 0.001f)
    {
        t = t1;
        return true;
    }

    return false;
}
