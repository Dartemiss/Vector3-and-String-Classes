#include "Vector3.h"
#include <iostream>
#include <stdio.h>
#include "MyString.h"


void printVector3(Vector3<int> aux)
{
	std::cout << "(" << aux.x << "," << aux.y << "," << aux.z << ")" << std::endl;
}


int main()
{
	Vector3<int> a(0, 2, 0);
	Vector3<int> b(3, 3, 3);
	Vector3<int> c(a);
	Vector3<int> d = b + c;
	float dist = a.distance_to(b);
	printVector3(a);
	printVector3(b);
	printVector3(c);
	printVector3(d);
	a.Normalize();
	Vector3<int> e(a);
	printVector3(e);
	std::cout << dist << std::endl;


	MyString aa("abcde");
	printf("aa: %s\n", aa);
	
	MyString bb(aa);
	printf("bb: %s\n", bb);
	MyString cc = aa + bb;
	printf("cc: %s\n", cc);
	printf("Index: %c\n", cc[0]);
	
	if(bb == "abcde")
	{
		printf("bb is equal to abcde\n");
	}
	else
	{
		printf("bb is different to abcde\n");
	}

	if(aa != "string")
	{
		printf("different\n");
	}
	
	printf("len: %d\n", cc.length());
	bb.clear();
	MyString dd("");
	printf("Empty: %s\n", dd);
	printf("Empty: %s\n", bb);
	//MyString ee = bb + cc;
	//printf("Not Empty: %s\n", ee);
}