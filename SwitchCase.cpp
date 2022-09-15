// SwitchCase.cpp : Using switch case to display number

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter number between one and five: " << endl;
    cin >> num;
	switch (num)
	{
	case 1:
		cout << "One" << endl;
		break;
	case 2:
		cout << "Two" << endl;
		break;
	case 3:
		cout << "Three" << endl;
		break;
	case 4:
		cout << "Four" << endl;
		break;
	case 5:
		cout << "Five" << endl;
		break;
	default:
		cout << "Number not in range!" << endl;
		break;
	}
}