#pragma once
class Vector3
{
public:

	double x, y, z;
	Vector3() : x(0), y(0), z(0){}
	Vector3(double a, double b, double c) : x(a), y(b), z(c) {}
	Vector3(const Vector3& vec);

	Vector3 operator+(const Vector3 &first);

	Vector3 Normalize();

	double distance_to(const Vector3 &vec);
};

