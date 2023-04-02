// MaxNegativeInArray.cpp : C++ program to find the maximum number (negative) in array

#include <iostream>
#include <climits>
using namespace std;

int main()
{
	int A[10] = { -3,-4,-5,-7,-8,-10,-11,-13,-15,-19 };
	int max = INT_MIN;  // C++ constant for use incase of -ive numbers 
	for (auto x : A)
	{
		if (A[x] > max)
		{
			max = A[x];
		}
	}
	cout << "Max. element in array is: " << max << endl;
	return 0;
}