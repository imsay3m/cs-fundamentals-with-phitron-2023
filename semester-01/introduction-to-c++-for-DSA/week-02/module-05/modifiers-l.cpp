#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a = "Hello";
    string b = "World";
    b.append(a);
    a += b; // a=a+b;
    a.pop_back();
    // a[5] = 'A';//doesn't work
    a.push_back('A');
    cout << a << endl;
    cout << b << endl;
    return 0;
}