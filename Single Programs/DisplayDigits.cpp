// DisplayDigits.cpp : Program to print digits of a number in reverse

#include <iostream>
using namespace std;

int main()
{
	int num, r;
	cout << "Enter the number: " << endl;
	cin >> num;
	while (num!=0)
	{
		r = num % 10;
		num /= 10;
		cout << "Digit is: " << r << endl;
	}
}