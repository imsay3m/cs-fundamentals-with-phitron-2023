#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
    // array of object doesn't contain constructor
};
int main()
{
    int sz;
    cin >> sz;
    Student a[sz];
    for (int i = 0; i < sz; i++)
    {
        cin.ignore();
        getline(cin, a[i].name);
        cin >> a[i].roll >> a[i].marks;
    }
    Student mx;
    mx.marks = INT_MIN;
    for (int i = 0; i < sz; i++)
    {
        if (a[i].marks > mx.marks)
        {
            mx = a[i];
        }
    }
    cout << mx.marks << " " << mx.name << " " << mx.roll << endl;

    return 0;
}