// DynamicAllocationInHeap.cpp : Program to show dynamic allocation of an array in heap using pointer

#include <iostream>
using namespace std;

int main()
{
	int* p = new int[20];		// We declared an array inside the heap
	/* Now, suppose, later in the program, we want to change the size of the array. Well, that is 
	 possible through using pointers. */

	delete[]p;		// Delete the previous array to prevent memory leak
	p = new int[30];		// Declare new size of array
}