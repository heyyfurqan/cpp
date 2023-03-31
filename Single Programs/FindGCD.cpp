// FindGCD.cpp : Program to find Greatest Common Divisor of a number

#include <iostream>
using namespace std;

int main()
{
	int num1, num2;
	cout << "Enter two numbers: " << endl;
	cin >> num1 >> num2;
	while (num1!=num2)
	{
		if (num1>num2)
		{
			num1 -= num2;
		}
		else if (num1<num2)
		{
			num2 -= num1;
		}
		else
		{
			cout << "GCD is " << num1;
		}
	}
	cout << "GCD is " << num1;
}