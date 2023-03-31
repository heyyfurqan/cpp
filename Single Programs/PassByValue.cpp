// PassByValue.cpp : Program to demonstrate pass by value

#include <iostream>
using namespace std;

void swap(int a, int b)
{
    cout << a << " " << b << endl;
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << a << " " << b << endl;
}
int main()
{
    int x = 10, y = 20;
    swap(x, y);
    cout << x << " " << y;      // Here, by using call by value, we can see that only the formal (function) parameters are swapped, the original parameters stay the same.
}