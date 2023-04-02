// DigitsOfNumber.cpp: C++ program to find digits of a number in reverse

#include <iostream>
using namespace std;

int main()
{
	int num, r;
	cout << "Enter number to find digits of: \n";
	cin >> num;
	while (num > 0)
	{
		r = num % 10;
		num /= 10;
		cout << r;
	}
	return 0;
}