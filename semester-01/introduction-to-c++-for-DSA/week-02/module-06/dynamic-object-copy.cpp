#include <bits/stdc++.h>
using namespace std;
class Person
{
public:
    string name;
    int age;
    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};
int main()
{
    Person *sayem = new Person("Sayem", 21);
    Person *tufayel = new Person("Tufayel", 23);
    // sayem = tufayel;
    // sayem->name = tufayel->name;
    // sayem->age = tufayel->age;
    *sayem = *tufayel;
    delete tufayel;
    cout << sayem->name << " " << sayem->age << endl;

    return 0;
}