// NumReverse.cpp : C++ program to reverse a number

#include <iostream>
using namespace std;

int main()
{
	int num, num1, r, rev = 0;
	cout << "Enter number to reverse: \n";
	cin >> num;
	num1 = num;
	while (num > 0)
	{
		r = num % 10;
		num /= 10;
		rev = rev * 10 + r;
	}
	cout << "Reverse of " << num1 << " is " << rev;
	return 0;
}