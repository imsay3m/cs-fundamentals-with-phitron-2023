#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    char name[100];
    int roll;
    int cls;
    char section;
};
int main()
{
    Student sayem;
    sayem.roll = 185;
    sayem.cls = 13;
    sayem.section = 'E';
    char nm1[100] = "Sheikh Eismile Ahmed Sayem";
    strcpy(sayem.name, nm1);

    Student tufayel;
    tufayel.roll = 161;
    tufayel.cls = 13;
    tufayel.section = 'E';
    char nm2[100] = "Amir Hussain Tufayel";
    strcpy(tufayel.name, nm2);

    cout << tufayel.name << endl;
    cout << tufayel.roll << endl;
    cout << tufayel.section << endl;
    cout << tufayel.cls << endl;
    cout << "------------------------------" << endl;
    cout << sayem.name << endl;
    cout << sayem.roll << endl;
    cout << sayem.section << endl;
    cout << sayem.cls << endl;

    return 0;
}