// SumOf1toN.cpp : C++ Program to calculate sum of 1 to N

#include <iostream>
using namespace std;

int main()
{
	int n, sum;
	cout << "Enter number: " << endl;
	cin >> n;
	sum = n * (n + 1) / 2;
	cout << "Sum of 1 to " << n << " is: " << sum << endl;
}