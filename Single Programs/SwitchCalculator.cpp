// SwitchCalculator.cpp : Program to perform calculations using switch case statements

#include <iostream>
using namespace std;

int main()
{
    int option;
    cout << "Welcome To Calculator! Please select an option: " << endl;
    cout << "1- Addition\n" << "2- Subtraction\n" << "3- Multiplication\n" << "4- Division\n";
    cin >> option;
    int a, b;
    float result;
    switch (option)
    {
    case 1:
        cout << "Enter two numbers for addition: " << endl;
        cin >> a >> b;
        result = a + b;
        cout << "Sum of two numbers is: " << result << endl;
        break;
    case 2:
        cout << "Enter two numbers for subtraction: " << endl;
        cin >> a >> b;
        result = a - b;
        cout << "Difference of two numbers is: " << result << endl;
        break;
    case 3:
        cout << "Enter two numbers for multiplication: " << endl;
        cin >> a >> b;
        result = a * b;
        cout << "Product of two numbers is: " << result << endl;
        break;
    case 4:
        cout << "Enter two numbers for division: " << endl;
        cin >> a >> b;
        result = (float)a / b;
        cout << "Quotient of two numbers is: " << result << endl;
        break;
    default:
        cout << "Select from 1-4 again." << endl;
        break;
    }

}