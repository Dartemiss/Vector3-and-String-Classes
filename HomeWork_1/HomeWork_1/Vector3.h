#include<math.h>
template<typename T>

class Vector3
{
public:

	T x, y, z;
	Vector3() : x(0), y(0), z(0) {}

	Vector3(T x, T y, T z) : x(x), y(y), z(z) {}

	Vector3(const Vector3& vec)
		: x(vec.x), y(vec.y), z(vec.z) {}

	Vector3 operator+(const Vector3& first) const
	{
		return Vector3(first.x + x, first.y + y, first.z + z);
	}

	float distance_to(const Vector3& vec) const
	{
		T sumX = x - vec.x;
		T sumY = y - vec.y;
		T sumZ = z - vec.z;
		return (float)sqrt((sumX * sumX) + (sumY * sumY) + (sumZ * sumZ));
	}

	void Normalize()
	{
		T len = (T)sqrt(x * x + y * y + z * z);
		x = x / len;
		y = y / len;
		z = z / len;
	}


};