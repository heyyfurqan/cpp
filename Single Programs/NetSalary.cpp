// NetSalary.cpp : Program to calculate net salary from basic salary

#include <iostream>
using namespace std;

int main()
{
	float basicSalary, allowances, deductions, netSalary;
	cout << "Enter basic salary: " << endl;
	cin >> basicSalary;
	cout << "Enter percentage of allowances: " << endl;
	cin >> allowances;
	allowances /= 100;
	cout << "Enter perentage of deductions: " << endl;
	cin >> deductions;
	deductions /= 100;
	netSalary = basicSalary + (basicSalary * allowances) - (basicSalary * deductions);
	cout << "Your net salary is: " <<netSalary << endl;
}