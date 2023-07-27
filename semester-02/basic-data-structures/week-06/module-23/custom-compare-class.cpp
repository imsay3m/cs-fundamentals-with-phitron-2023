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
        if (a.marks > b.marks)
            return true;
        else if (a.marks < b.marks)
            return false;
        else
        {
            if (a.roll < b.roll)
                return true;
            else
                return false;
        }
        // When true is returned, it means the order is correct and NO swapping of elements takes place.
        // When false is returned, it means the order is NOT correct and swapping of elements takes place.
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
        int roll, marks;
        cin >> name >> roll >> marks;
        Student obj(name, roll, marks);
        pq.push(obj);
    }
    while (!pq.empty())
    {
        cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
        pq.pop();
    }

    return 0;
}