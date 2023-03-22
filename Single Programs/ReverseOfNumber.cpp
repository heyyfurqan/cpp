// ReverseOfNumber.cpp : Program to print reverse of a number

#include <iostream>
using namespace std;

int main()
{
	int num, m, r, reverse = 0;
	cout << "Enter number to reverse: " << endl;
	cin >> num;
	m = num;
	while (num!=0)
	{
		r = num % 10;
		num /= 10;
		reverse = reverse * 10 + r;
	}
	cout << "The reverse of " << m << " is " << reverse << endl;
	return 0;
}