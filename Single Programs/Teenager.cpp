// Teenager.cpp : Program to check if you are a teenager or not

#include <iostream>
using namespace std;

int main()
{
	int age;
	cout << "Enter your age: " << endl;
	cin >> age;
	if (age >= 13 && age <= 19)
	{
		cout << "Nice! You are a teenager." << endl;
	}
	else
	{
		cout << "Hatt lamre!";
	}
}