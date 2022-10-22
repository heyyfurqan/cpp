// ClassForStudent.cpp : Program for creating a class for student (with some functionalities)

#include <iostream>
using namespace std;

class student
{
private:
    int roll_no;
    string name;
    int marks[2];
    int total_marks;
    char grade;
    int average;
public:
    void set_totalmarks()
    {
        int mark = 0;
        for (int i = 0; i <= 2; i++)
        {
            mark += marks[i];
        }
        total_marks = mark;
    }
    student()
    {
        cout << "Enter roll no: " << endl;
        cin >> roll_no;
        cout << "Enter name: " << endl;
        cin >> name;
        cout << "Enter marks in 3 subjects: " << endl;
        for (int i = 0; i <= 2; i++)
        {
            cin >> marks[i];
        }
    }
    int set_rollno(int roll)
    {
        roll_no = roll;
    }
    int set_name(int name)
    {
        this->name = name;
    }
    int set_marks(int A[])
    {
        for (int i = 0; i < 2; i++)
        {
            marks[i] = A[i];
        }
    }
    void get_rollno()
    {
        cout << roll_no;
    }
    void get_name()
    {
        cout << name;
    }
    void get_marks()
    {
        for (int i = 0; i < 2; i++)
        {
            cout << marks[i];
        }
    }
    void get_tmarks()
    {
        cout << total_marks;
    }
    void set_grades()
    {
        if (average > 80)
        {
            grade = 'A';
        }
        else if (average>60 && average<80)
        {
            grade = 'B';
        }
        else if (average > 40 && average < 60)
        {
            grade = 'C';
        }
        else
        {
            grade = 'D';
        }
    }
    void get_grades()
    {
        cout << grade;
    }
    void set_average()
    {
        average = total_marks / 3;
    }
};

int main()
{
    student s1;
    s1.set_totalmarks();
    s1.set_average();
    s1.set_grades();
    cout << "The grade of "; s1.get_name();cout<< " is "; s1.get_grades();
}