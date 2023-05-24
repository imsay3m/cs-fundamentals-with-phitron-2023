#include <bits/stdc++.h>
using namespace std;
int main()
{
    int *a = new int;
    *a = 20;            // dereferencing the heap memory address for assigning value
    cout << a << endl;  // memory address of a
    cout << *a << endl; // de referencing the heap memory address of a for getting value
    float *b = new float;
    *b = 9.81;
    cout << b << endl;  // memory address of b
    cout << *b << endl; // de referencing the heap memory address of b for getting value

    return 0;
}