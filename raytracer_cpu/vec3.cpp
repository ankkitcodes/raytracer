#include "vec3.h"

//Arithmetic operators
vec3 vec3::operator+(const vec3& v) const
{
	return vec3(x + v.x, y + v.y, z + v.z);
}

vec3 vec3::operator-(const vec3& v) const
{
	return vec3(x - v.x, y -v.y, z - v.z);
}

vec3 vec3::operator*(float t) const
{
	return vec3(x * t, y * t, z * t);
}

vec3 vec3::operator/(float t) const
{
	return vec3(x / t, y / t, z / t);
}

//Length of the vector
float vec3::length() const
{
	return std::sqrt(x * x + y * y + z * z);
}

//Return a normalized (unit length) vector
vec3 vec3::normalized() const
{
	float len = length();
	return vec3(x / len, y / len, z / len);
}

// Dot product
float vec3::dot(const vec3& a, const vec3& b)
{
	return a.x * b.x + a.y * b.y + a.z * b.z;
}