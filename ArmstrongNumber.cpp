// ArmstrongNumber.cpp : Program to check if a number is Armstrong number or not

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int num, r, sum = 0, m;
	cout << "Enter number to check: " << endl;
	cin >> num;
	m = num;
	while (num!=0)
	{
		r = num % 10;
		num /= 10;
		sum = sum + pow(r, 3);
	}
	if (sum==m)
	{
		cout << "Number is Armstrong number." << endl;
	}
	else
	{
		cout << "Number isn't armstrong number." << endl;
	}
	return 0;
}