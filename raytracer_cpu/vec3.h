#pragma once

#include <cmath>

class vec3
{
public:
    float x;
    float y;
    float z;

    // Constructors
    vec3() : x(0.0f), y(0.0f), z(0.0f) {}
    vec3(float x_, float y_, float z_) : x(x_), y(y_), z(z_) {}

    // Vector arithmetic
    vec3 operator+(const vec3& v) const;
    vec3 operator-(const vec3& v) const;
    vec3 operator*(float t) const;
    vec3 operator/(float t) const;

    // Vector properties
    float length() const;
    vec3 normalized() const;

    // Dot product
    static float dot(const vec3& a, const vec3& b);
};
