#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    char section;
    int mathMarks;
    int cls;
    Student(string name, int roll, char section, int mathMarks, int cls)
    {
        this->name = name;
        this->roll = roll;
        this->section = section;
        this->mathMarks = mathMarks;
        this->cls = cls;
    }
};
int main()
{
    Student sayem("Sayem", 185, 'E', 49, 13);
    Student tufayel("Tufayel", 161, 'E', 46, 13);
    Student kawsar("Kawsar", 175, 'E', 54, 13);
    if (sayem.mathMarks >= tufayel.mathMarks && sayem.mathMarks >= kawsar.mathMarks)
    {
        cout << sayem.name << " Got the Highest Marks in Math." << endl;
    }
    else if (tufayel.mathMarks >= sayem.mathMarks && tufayel.mathMarks >= kawsar.mathMarks)
    {
        cout << tufayel.name << " Got the Highest Marks in Math." << endl;
    }
    else
    {
        cout << kawsar.name << " Got the Highest Marks in Math." << endl;
    }

    return 0;
}