// SumOf1toN.cpp : C++ Program to calculate sum of 1 to N

#include <iostream>
using namespace std;

int main()
{
	int n, sum = 0;
	cout << "Enter number: " << endl;
	cin >> n;
	for (int i = 1;i <= n;)
	{
		sum += i;
		i++;
	}
	cout << "Sum of 1 to " << n << " is: " << sum << endl;
}