// PerfectNumber.cpp : Program to check if a number is perfect or not

#include <iostream>
using namespace std;

int main()
{
	int num, sum = 0;
	cout << "Enter number: " << endl;
	cin >> num;
	for (int i = 1; i <= num; i++)
	{
		if (num%i==0)
		{
			sum += i;
		}
	}
	sum -= num;
	if (sum==num)
	{
		cout << num << " is a perfect number." << endl;
	}
	else
	{
		cout << num << " is not a perfect number." << endl;
	}
	return 0;
}