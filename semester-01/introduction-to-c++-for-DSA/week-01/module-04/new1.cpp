#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    float height;
    int age;

    Person(string n, float h, int a)
    {
        name = n;
        height = h;
        age = a;
    }
};

int main()
{
    // Create a dynamic object of the Person class and pass values using the constructor
    Person *sayem = new Person("Sheikh Eismile Ahmed Sayem", 1.63, 21);
    Person *tufayel = new Person("Amir Hussain Tufayel", 1.69, 23);

    if (sayem->age != tufayel->age)
    {
        (sayem->age > tufayel->age) ? cout << sayem->name << endl : cout << tufayel->name << endl;
    }
    else
    {
        cout << "Their Age is same" << endl;
    }
    // Free the dynamically allocated memory
    delete sayem;
    delete tufayel;
    return 0;
}
