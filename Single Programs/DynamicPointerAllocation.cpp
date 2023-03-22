// DynamicPointerAllocation.cpp : Program to dynamically allocate memory to pointer to access heap

#include <iostream>
using namespace std;

int main()
{
	int *p;
	p = new int[5];
	p[0] = 11;
	p[1] = 14;
	p[2] = 17;
	cout << p[2] << endl;
	delete[]p;		//Delete the array
	p = nullptr;		// Remove the pointing reference
}