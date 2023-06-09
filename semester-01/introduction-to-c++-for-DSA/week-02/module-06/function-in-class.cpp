#include <bits/stdc++.h>
using namespace std;
class Person
{
public:
    string name;
    int age;
    int marks1;
    int marks2;
    Person(string nm, int ag, int m1, int m2)
    {
        name = nm;
        age = ag;
        marks1 = m1;
        marks2 = m2;
    }
    int totalMarks()
    {
        return marks1 + marks2;
    }
    void hello()
    {
        cout << "Hello class function" << endl;
        cout << name << " " << age << endl;
    }
};
int main()
{
    Person sayem("Sheikh Eismile Ahmed Sayem", 21, 46, 52);
    sayem.hello();
    cout << sayem.totalMarks() << endl;
    return 0;
}