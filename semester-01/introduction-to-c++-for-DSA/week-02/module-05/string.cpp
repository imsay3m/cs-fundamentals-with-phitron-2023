#include <bits/stdc++.h>
using namespace std;
int main()
{
    /**
    char a[10] = "Hello";
    strcpy(a, "Gello");
    cout << a << endl
         << strlen(a) << endl
         << sizeof(a);
    **/
    string s1 = "Hello";
    s1 = "gello";
    cout << s1 << endl;

    string s2 = "gello";
    if (s1 == s2)
    {
        cout << "Same" << endl;
    }
    else
    {
        cout << "Not Same" << endl;
    }

    return 0;
}