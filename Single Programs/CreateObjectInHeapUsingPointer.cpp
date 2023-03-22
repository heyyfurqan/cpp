// CreateObjectInHeapUsingPointer.cpp : Program to create an object in heap using a pointer inside heap

#include <iostream>
using namespace std;

class rectangle
{
public:		// We create them public so that main function can access them
	int length;
	int breadth;
	int area()
	{
		return length * breadth;
	}
};

void main()
{
	rectangle* p;
	// rectangle* p = new rectangle();		// Creating inside heap
	p = new rectangle;		// This object has no name but is created inside heap
	p->length = 20;
	p->breadth = 5;
	cout << "Area of rectangle is: " << p->area();
}