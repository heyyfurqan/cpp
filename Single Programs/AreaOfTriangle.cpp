// AreaOfTriangle.cpp : Program To Find The Area Of A Triangle

#include <iostream>
using namespace std;

int main()
{
    float breadth, height, area;
    cout << "Enter breadth of triangle: " << endl;
    cin >> breadth;
    cout << "Enter height of triangle: " << endl;
    cin >> height;
    area = (breadth * height) / 2;
    cout << "The area of triangle is: " << area;
    return 0;
}