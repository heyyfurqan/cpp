//SumofnNaturalNumbers.cpp : C++ program to print sum of first n natural numbers

#include <iostream>
using namespace std;

int main()
{
	int n, sum = 0;
	cout << "Enter number to print the sum: \n";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		sum += i;
	}
	cout << "Sum of first " << n << " natural numbers is: " << sum;
	return 0;
}