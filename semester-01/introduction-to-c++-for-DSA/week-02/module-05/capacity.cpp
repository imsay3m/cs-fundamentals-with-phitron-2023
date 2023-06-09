#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str = "Hello world";
    cout << str.size() << endl;     // length of the str without null
    cout << str.max_size() << endl; // online compiler max size: 10^6
    str = "asdfjklljaskdfjsadflkjfa";
    cout << str.capacity() << endl; // dynamically expand its size(not length)
    cout << str.size() << endl;     // length of the str without null
    str = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    cout << str.capacity() << endl; // dynamically expand its size(not length)
    cout << str.size() << endl;     // length of the str without null
    str.clear();
    cout << str.size() << endl; // length of the str without null
    str.empty() ? cout << "Empty" : cout << "Not Empty";
    cout << endl;
    cin >> str;
    cout << str << endl;
    str.resize(5);
    cout << str << endl;
    str.resize(15, 'A');
    cout << str << endl;

    return 0;
}