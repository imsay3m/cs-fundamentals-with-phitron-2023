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
    int sz;
    cin >> sz;
    Student a[sz];
    for (int i = 0; i < sz; i++)
    {
        getchar();
        getline(cin, a[i].name);
        cin >> a[i].roll >> a[i].marks;
    }
    for (int i = 0; i < sz - 1; i++)
    {
        for (int j = i + 1; j < sz; j++)
        {
            // sorting based on marks
            if (a[i].marks > a[j].marks)
            {
                swap(a[i], a[j]);
            }
            /**
             * // sorting based on roll
            if (a[i].roll > a[j].roll)
            {
                swap(a[i], a[j]);
            }
            **/
        }
    }
    for (int i = 0; i < sz; i++)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
    }

    return 0;
}