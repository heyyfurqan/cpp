// ArmstrongNumber.cpp : C++ program to check if a number is armstrong number (sum of cube of digits is number itself)

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int num, num1, sum = 0, r;
	cout << "Enter number to check: \n";
	cin >> num;
	num1 = num;
	while (num > 0)
	{
		r = num % 10;
		num /= 10;
		sum += pow(r, 3);
	}
	if (sum == num1)
	{
		cout << num1 << " is an Armstrong number.\n";
	}
	else
		cout << num1 << " is not an Armstrong number.\n";
	return 0;
}