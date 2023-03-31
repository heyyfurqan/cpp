// Palindrome.cpp : Program to check if a given number is palindrome or not

#include <iostream>
using namespace std;

int main()
{
	int num, reverseNum = 0, m, r;
	cout << "Enter number to check: " << endl;
	cin >> num;
	m = num;
	while (num!=0)
	{
		r = num % 10;
		num /= 10;
		reverseNum = reverseNum * 10 + r;
	}
	if (m==reverseNum)
	{
		cout << m << " is a palindrome number." << endl;
	}
	else
	{
		cout << m << " isn't a palindrome number." << endl;
	}
	return 0;
}