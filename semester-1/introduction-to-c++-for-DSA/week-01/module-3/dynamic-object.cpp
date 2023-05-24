#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    char name[100];
    int roll;
    char section;
    int cls;
    // counstructor
    Student(char *n, int r, char s, int c)
    {
        strcpy(name, n);
        roll = r;
        section = s;
        cls = c;

        cout << name << endl;
    }
};
int main()
{
    char name[100] = "Sheikh Eismile Ahmed Sayem";
    // Student sayem;
    Student *sayem = new Student(name, 185, 'E', 13);
    // you have to de-reference the dynamic object then you can access the object
    cout << (*sayem).section << endl;
    // shortcut without de-referencing the pointer
    cout << sayem->roll << endl;
    cout << sayem->cls << endl;

    return 0;
}