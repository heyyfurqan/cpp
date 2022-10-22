// Structs.cpp : Program to demonstrate use of structs in C++

#include <iostream>
using namespace std;

struct Rectangle
{
	int l;
	int b;
	void area()
	{
		cout << "Area of rectangle is: " << l * b;
	}
};

int main()
{
	Rectangle r1;
	r1.l = 10;
	r1.b = 4;
	r1.area();
	return 0;
}