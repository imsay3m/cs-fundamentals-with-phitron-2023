#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    s = "Hello";
    s.assign("Gello");
    string a = "Hello World";
    cout << a << endl;
    a.erase(8);
    cout << a << endl;
    a.erase(2, 2);
    cout << a << endl;

    a.replace(1, 3, "so"); // erase+replace
    s.insert(2, "hlo");
    cout << a << endl;
    cout << s << endl;

    return 0;
}