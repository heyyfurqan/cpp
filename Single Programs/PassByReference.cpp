// PassByReference.cpp : Program to demonstrate pass by refernce

#include <iostream>
using namespace std;

void swap(int &a, int &b)       // Don't write any complex logic(loops etc) here because this
{                               // function gets written inside main function while execution
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int main()
{
    int x = 10, y = 20;
    swap(x, y);     // The swap function gets replaced here, at place of function call (swap is called in line function)
    cout << x << " " << y << endl;
}