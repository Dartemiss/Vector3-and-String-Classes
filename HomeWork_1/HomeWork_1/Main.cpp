#include "Vector3.h"
#include <iostream>


void printVector3(Vector3 a)
{
	std::cout << "(" << a.x << "," << a.y << "," << a.z << ")" << std::endl;
}

int main()
{
	Vector3 a = Vector3();
	Vector3 b = Vector3(1, 0, 1);
	Vector3 c = Vector3(b);
	Vector3 d = Vector3(c + b);
	Vector3 e = d.Normalize();
	printVector3(a);
	printVector3(b);
	printVector3(c);
	printVector3(d);
	printVector3(e);


}