// DefaultArgument.cpp : Program to demonstrate use of default arguments 

#include <iostream>
using namespace std;

int mul(int a, int b, int c = 1)
{
    return a * b * c;
}
int max(int a, int b, int c)
{
    return a > b&& b > c ? a : b > c ? b : c;
}
int main()
{
    int c = mul(3, 5);      // Here,a=3, b=5, c=1 (c has default value, hence the name default argument)
    cout << "Product is: " << c << endl;
    int d = mul(4, 6, 9);       // Here, a=3, b=4, c=9
    cout << "Product is: " << d << endl;
    int e = max(4, 12, 16);
    cout << "Max number is: " << e << endl;
}