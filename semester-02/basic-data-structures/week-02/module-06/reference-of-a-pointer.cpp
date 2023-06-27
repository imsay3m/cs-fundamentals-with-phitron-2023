#include <bits/stdc++.h>
using namespace std;
int fun(int *&p)
{
    cout << p << endl;  // val address
    cout << &p << endl; // p address
    // p = NULL; // if we dereference it will change in main function

    // p = NULL; // if we change the value of p it will not change in main function
}
int main()
{
    int val = 5;
    int *ptr = &val;
    fun(ptr);
    cout << ptr << endl;  // val adress
    cout << &ptr << endl; // ptr address
    return 0;
}