// DistanceBetween2Points.cpp : C++ program to find distance between two points

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float ax, ay, bx, by, distance;
	cout << "Enter x and y coordinates of first number: " << endl;
	cin >> ax >> ay;
	cout << "Enter x and y coordinates of second number: " << endl;
	cin >> bx >> by;
	distance = sqrt(pow(ax + bx, 2)+ pow(ay + by, 2));
	cout << "The distance between two points is: " << distance << endl;
}