// FunctionTemplate.cpp : Program to demonstrate function templates in C++

#include <iostream>
using namespace std;

template<class T>      // This means T is a template class function
T add(T num1, T num2)
{
    return (num1 + num2);
}

int main()
{
    int a = add(4, 8);      // Automatically changes return type of function add to int
    float b = add(3.6, 4.9);        // Changes return type to float
    cout << a << endl;
    cout << b << endl;
    return 0;
}       // So, in this way, function template saves our time by declaring function only once and using it for multiple data types