// AreaOfCircle.cpp : Program To Calculate Area Of A Circle

#include <iostream>
using namespace std;

int main()
{
	const double pi = 3.1415926535897;
	double area, radius;
	cout << "Enter radius of circle: " << endl;
	cin >> radius;
	area = pi * (radius * radius);
	cout << "Area of circle is: " << area;
	return 0;
}