#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string nm;
    int cls;
    char s;
    int id;
};
int main()
{
    int sz;
    cin >> sz;
    Student a[sz];
    for (int i = 0; i < sz; i++)
    {
        cin >> a[i].nm >> a[i].cls >> a[i].s >> a[i].id;
    }
    for (int i = 0, j = sz - 1; i < sz; i++, j--)
    {
        cout << a[i].nm << " " << a[i].cls << " " << a[i].s << " " << a[j].id << endl;
    }

    return 0;
}