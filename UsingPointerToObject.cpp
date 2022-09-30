// UsingPointerToObject.cpp : Program to create a pointer to an object in OOP

#include <iostream>
using namespace std;

class rectangle
{
public:
	int length;
	int breadth;
	int area()
	{
		return length * breadth;
	}
	int perimeter()
	{
		return 2 * (length + breadth);
	}
};
void main()
{
	rectangle r;
	rectangle* p;
	p = &r;
	r.length = 10;		// Dot operator (.) is used to access the members of an object using variable name
	p->length = 15;		// Arow operator (->) is used to access the members of an object using pointer
	p->breadth = 8;
	cout << p->area();
}