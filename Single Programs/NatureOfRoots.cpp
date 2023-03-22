// NatureOfRoots.cpp : Program to check nature of roots of a quadratic equation

#include <iostream>
using namespace std;

int main()
{
	float a, b, c, determinant;
	cout << "Enter values of a, b and c: " << endl;
	cin >> a >> b >> c;
	determinant = b * b - 4 * a * c;
	if (determinant == 0)
	{
		cout << "Roots are real and equal." << endl;
	}
	else if (determinant > 0)
	{
		cout << "Roots are real and unequal." << endl;
	}
	else
	{
		cout << "Roots are imaginary." << endl;
	}
	return 0;
}