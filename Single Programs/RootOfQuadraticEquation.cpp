// RootOfQuadraticEquation.cpp : This program calculates root of quadratic equation

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float a, b, c, root1, root2;
    cout << "Enter values of a, b and c: " << endl;
    cin >> a >> b >> c;
    root1 = (-b + sqrt(b * b - 4 * a * c)) / 2*a;
    root2 = (-b - sqrt(b * b - 4 * a * c)) / 2*a;
    cout << "The roots of the equation are: " << root1 << " and " << root2;
    return 0;
}