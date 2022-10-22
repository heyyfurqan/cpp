// DeepCopyConstructor.cpp : Program to show use of deep copy constructors

#include <iostream>
using namespace std;

class test
{
private:
	int a;
	int* p;
public:
	test(int x)
	{
		x = a;
		p = new int(a);
	}
	test(test& t)
	{
		a = t.a;
		p = new int(a);
	}
};
void main()
{
	test t(5);
	test t2(t);		// This constructor is created using deep copy constructor (each thing is copied)
}