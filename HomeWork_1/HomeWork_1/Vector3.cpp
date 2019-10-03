#include "Vector3.h"
#include <math.h>

Vector3::Vector3(const Vector3 &vec)
{
	x = vec.x;
	y = vec.y;
	z = vec.z;
}

Vector3 Vector3::operator+(const Vector3 &first)
{
	return Vector3(first.x + x, first.y + y, first.z + z);
}

Vector3 Vector3::Normalize()
{
	double mag = sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
	x = x / mag;
	y = y / mag;
	z = z / mag;
	return Vector3(x,y,z);
}

double Vector3::distance_to(const Vector3& vec)
{
	double a = x - vec.x;
	double b = y - vec.y;
	double c = z - vec.z;

	return sqrt((a * a) + (b * b) + (c * c));
}
