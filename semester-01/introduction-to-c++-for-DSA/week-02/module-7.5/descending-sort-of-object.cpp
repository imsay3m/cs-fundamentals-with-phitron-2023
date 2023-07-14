#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
    // array doesn't have any constructor;
    /* Student(string name, int roll, int marks)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    } */
};
bool cmp(Student a, Student b)
{
    if (a.marks != b.marks)
    {
        return a.marks > b.marks;
    }
    else
    {
        return a.roll < b.roll;
    }
}
int main()
{
    int n;
    cin >> n;
    Student *newStudent = new Student[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> newStudent[i].name >> newStudent[i].roll >> newStudent[i].marks;
    }
    sort(newStudent, newStudent + n, cmp);
    for (size_t i = 0; i < n; i++)
    {
        cout << newStudent[i].name << " " << newStudent[i].roll << " " << newStudent[i].marks << endl;
    }

    return 0;
}