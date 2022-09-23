// ReturnByReference.cpp : Program to demonstrate return by reference

#include <iostream>
using namespace std;

int &fun(int &a)        // This function returns reference of x, that is x itself
{
    cout << a << endl;
    return a;
}
int main()
{
    int x = 10;
    fun(x) = 15;        // Here, by using L value of a function, we can assign any value to x by reference
    cout << x;
}