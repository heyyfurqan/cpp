// CreateClass.cpp : Program to demonstrate creation of class in OOP

#include <iostream>
using namespace std;

class Rectangle		// Create class
{
public:		// Allows us to access objects in main and other functions. By default, it is private
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
	Rectangle r1, r2;		// Declare objects of the class
	r1.length = 10;
	r1.breadth = 6;
	r2.length = 15;
	r2.breadth = 5;
	cout << "Area of r1 is: " << r1.area() << endl;
	cout << "Perimeter of r1 is: " << r1.perimeter() << endl;
	cout << "Area of r2 is: " << r2.area() << endl;
	cout << "Perimeter of r2 is: " << r2.perimeter();
}