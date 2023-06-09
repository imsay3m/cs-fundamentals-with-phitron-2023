#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    char s;
    int cls;
    int mathMarks;
    int engMarks;
};
int main()
{
    int sz;
    cin >> sz;
    Student a[sz];
    for (int i = 0; i < sz; i++)
    {
        cin >> a[i].name >> a[i].cls >> a[i].s >> a[i].mathMarks >> a[i].engMarks;
    }

    for (int i = sz - 1; i >= 0; i--)
    {
        cout << a[i].name << " " << a[i].cls << " " << a[i].s << " " << a[i].mathMarks << " " << a[i].engMarks << endl;
    }
    return 0;
}