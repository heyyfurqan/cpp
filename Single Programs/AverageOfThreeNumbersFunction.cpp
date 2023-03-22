// AverageOfThreeNumbersFunction.cpp : Program to find average of three numbers using functions

#include <iostream>
using namespace std;

int avrg(int a, int b, int c)
{
    return (a + b + c) / 3;
}
int main()
{
    int a, b, c;
    cout << "Enter three numbers: " << endl;
    cin >> a >> b >> c;
    cout << "Average of three numbers is: " << avrg(a, b, c);
    return 0;
}