// FindingGCD.cpp : C++ program to find GCD of two numbers

#include <iostream>
using namespace std;

int main()
{
	int num1, num2;
	cout << "Enter two numbers to find GCD of: \n";
	cin >> num1 >> num2;
	while (num1 != num2)
	{
		while (num1 > num2)
		{
			num1 -= num2;
		}
		while (num1 < num2)
		{
			num2 -= num1;
		}
	}
	cout << "GCD of two numbers is: " << num1;
	return 0;
}