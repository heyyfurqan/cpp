// DisplayGrades.cpp : Program to display grade of student from average marks

#include <iostream>
using namespace std;

int main()
{
	float m1, m2, m3, average;
	cout << "Enter your marks in 3 subjects: " << endl;
	cin >> m1 >> m2 >> m3;
	average = (m1 + m2 + m3) / 3;
	if (average >= 60)
	{
		cout << "Congrats! You got A grade." << endl;
	}
	else if (average>=35 && average < 60)
	{
		cout << "You got B grade." << endl;
	}
	else
	{
		cout << "You got C grade." << endl;
	}
	return 0;
}