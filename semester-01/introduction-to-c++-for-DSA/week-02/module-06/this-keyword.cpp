#include <bits/stdc++.h>
using namespace std;
class Person
{
public:
    string name;
    int age;
    Person(string name, int age)
    {
        (*this).name = name;
        this->age = age;
    }
    void hello()
    {
        cout << "Hello " << name << endl;
    }
};
int main()
{
    Person sayem("Sayem", 21);
    sayem.hello();
    cout << sayem.age << endl;
    return 0;
}