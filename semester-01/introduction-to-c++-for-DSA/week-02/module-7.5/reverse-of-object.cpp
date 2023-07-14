#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
};
int main()
{
    int n;
    cin >> n;
    Student *newStudent = new Student[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> newStudent[i].name >> newStudent[i].roll >> newStudent[i].marks;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        cout << newStudent[i].name << " " << newStudent[i].roll << " " << newStudent[i].marks << endl;
    }

    return 0;
}