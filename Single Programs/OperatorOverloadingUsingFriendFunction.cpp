// OperatorOverloadingUsingFriendFunction.cpp : Program to demonstrate another method of operator overloading using friend function

#include <iostream>
using namespace std;

class complex
{
private:
	int real;
	int imaginary;
public:
	complex(int r = 0, int i = 0)
	{
		real = r;
		imaginary = i;
	}
	void getnum()
	{
		cout << "The value is: " << real << " + " << imaginary << "i" << endl;
	}
	friend complex operator+(complex x, complex b);		// Friend function can access all the public, private data members of the class, It has to be declared outside the class
};
complex operator+(complex x, complex b)		// We write the body of friend function outside the class, It is independent function not member of any class but is a friend of a class so we dont use scope resolution operator
{
	complex temp;
	temp.real = x.real + b.real;
	temp.imaginary = x.imaginary + b.imaginary;
	return temp;
}

int main()
{
	complex c1(4, 5);
	complex c2(7, 3);
	complex c3;
	c3 = c1 + c2;		// Can also be written as c3 = operator+ (c1, c2);
	c3.getnum();
}