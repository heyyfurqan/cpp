// AccessorsAndMutators.cpp : Program to demonstrate how to access private data members through accessor functions
// When our data members are private, we can access and change them indirectly through functions known as accessors and mutators
#include <iostream>
using namespace std;

class rectangle
{

private:
	int length;
	int breadth;
public:
	void setLength(int l)
	{
		if (l < 0)
		{
			cout << "Error. You can't set negative values to length" << endl;
		}
		length = l;
	}
	void setBreadth(int b)
	{
		if (b < 0)
		{
			cout << "Error. You can't set negative values to breadth" << endl;
		}
		breadth = b;
	}
	int getLength()
	{
		return length;
	}
	int getBreadth()
	{
		return breadth;
	}
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
	r.setLength(10);		// Initializing length indirectly (Also known as setter)
	r.setBreadth(6);		// Indirectly initializing breadth
	cout << "Area of rectangle is: " << r.area() << endl;
	cout << "Breadth of rectangle is: " << r.getBreadth() << endl;		// Indirectly accessing breadth using getter function
}