#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    char name[100];
    int cls;
    int roll;
    char section;
    Student(int r, int c, char s, char *n)
    {
        roll = r;
        cls = c;
        section = s;
        strcpy(name, n);
    }
};
Student fun()
{
    char name[100] = "Sayem";
    Student s(185, 13, 'E', name);
    return s; // RVO-return value optimization
}
int main()
{
    Student sayem = fun();

    cout << sayem.name << endl;
    cout << sayem.roll << endl;
    cout << sayem.section << endl;
    cout << sayem.cls << endl;

    return 0;
}