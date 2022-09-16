// PrimeNumber.cpp : Program to check if a number is prime or not

#include <iostream>
using namespace std;

int main()
{
	int num, sum = 0;
	cout << "Enter number to check: " << endl;
	cin >> num;
	for (int i = 1; i <= num; i++)
	{
		if (num%i==0)
		{
			sum += i;
		}
	}
	if (num+1==sum)
	{
		cout << num << " is a prime number." << endl;
	}
	else
	{
		cout << num << " is not a prime number." << endl;
	}
	return 0;
}