#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    char s;
    int cls;
    int id;
    int mathMarks;
    int engMarks;
    int totalMarks(int m, int e)
    {
        return m + e;
    }
};
bool cmp(Student a, Student b)
{
    if (a.totalMarks(a.mathMarks, a.engMarks) != b.totalMarks(b.mathMarks, b.engMarks))
    {
        if (a.totalMarks(a.mathMarks, a.engMarks) > b.totalMarks(b.mathMarks, b.engMarks))
            return true;

        else
            return false;
    }
    else
    {
        if (a.id < b.id)
            return true;
        else
            return false;
    }
}
int main()
{
    int sz;
    cin >> sz;
    Student a[sz];
    for (int i = 0; i < sz; i++)
    {
        cin >> a[i].name >> a[i].cls >> a[i].s >> a[i].id >> a[i].mathMarks >> a[i].engMarks;
    }
    sort(a, a + sz, cmp);

    for (int i = 0; i < sz; i++)
    {
        cout << a[i].name << " " << a[i].cls << " " << a[i].s << " " << a[i].id << " " << a[i].mathMarks << " " << a[i].engMarks << endl;
    }
    return 0;
}