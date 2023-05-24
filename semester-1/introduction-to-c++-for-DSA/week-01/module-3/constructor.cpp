#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    char name[100];
    int roll;
    int cls;
    char section;

    Student(int r, char s, int c, const char *n)
    {
        roll = r;
        cls = c;
        section = s;
        strcpy(name, n);
    }
};
int main()
{
    Student sayem(185, 'E', 13, "Sheikh Eismile Ahmed Sayem");
    Student tufayel(161, 'E', 13, "Amir Hussain Tufayel");

    cout << sayem.name << endl;
    cout << sayem.roll << endl;
    cout << sayem.section << endl;
    cout << sayem.cls << endl;

    cout << "------------------------------" << endl;

    cout << tufayel.name << endl;
    cout << tufayel.roll << endl;
    cout << tufayel.section << endl;
    cout << tufayel.cls << endl;

    return 0;
}