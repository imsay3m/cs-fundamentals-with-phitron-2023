#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
    Student(string name, int roll, int marks)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};
class cmp
{
public:
    bool operator()(Student a, Student b)
    {
        if (a.marks < b.marks || a.marks > b.marks)
        {
            return a.marks < b.marks;
        }
        else
        {
            return a.roll > b.roll;
        }
    }
};
int main()
{
    int sz;
    cin >> sz;
    priority_queue<Student, vector<Student>, cmp> pq;
    for (int i = 0; i < sz; i++)
    {
        string name;
        int r, m;
        cin >> name >> r >> m;
        pq.push(Student(name, r, m));
    }
    int q;
    cin >> q;
    int op;
    while (q--)
    {
        cin >> op;
        if (op == 0)
        {
            string name;
            int r, m;
            cin >> name >> r >> m;
            pq.push(Student(name, r, m));
            cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
        }
        else if (op == 1)
        {
            if (!pq.empty())
            {
                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
        else if (op == 2)
        {

            if (!pq.empty())
            {
                pq.pop();
                if (!pq.empty())
                {
                    cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
                }
                else
                {
                    cout << "Empty" << endl;
                }
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
    }

    return 0;
}