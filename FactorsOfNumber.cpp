// FactorsOfNumber.cpp: C++ program to find factors of a number

#include <iostream>
using namespace std;

int main()
{
	int num;
	cout << "Enter number to find factors of: \n";
	cin >> num;
	for (int i = 1; i <= 8; i++)
	{
		if (num % i == 0)
		{
			cout << i << " is a factor of " << num << endl;
		}
	}
	return 0;
}