// IsPrime.cpp : C++ program to find if a number is prime or not

#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int n)
{
	if (1 >= n)
		return false;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
			return false;
	}
	return true;
}
int main()
{
	int n;
	cout << "Enter number to check: " << endl;
	cin >> n;
	isPrime(n) ? cout << n << " is prime." << endl : cout << n << " is not prime." << endl;
 }