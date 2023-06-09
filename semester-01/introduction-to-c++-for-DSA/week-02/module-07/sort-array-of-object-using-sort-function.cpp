#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
};
bool cmp(Student a, Student b)
{
    if (a.marks < b.marks)
        return true;
    // if true then go next
    else
        return false;
    // if false then swap
}
int main()
{
    int sz;
    cin >> sz;
    Student a[sz];
    for (int i = 0; i < sz; i++)
    {
        getchar();
        getline(cin, a[i].name);
        cin >> a[i].roll >> a[i].marks;
    }
    // sort function-make a boolian function to compare
    sort(a, a + sz, cmp);
    for (int i = 0; i < sz; i++)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
    }

    return 0;
}