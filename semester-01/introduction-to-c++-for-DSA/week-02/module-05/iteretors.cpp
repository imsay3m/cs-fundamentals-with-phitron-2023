#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    // string::iterator it;// ==auto
    cin >> s;
    for (auto it = s.begin(); it < s.end(); it++)
    {
        cout << *it << endl;
    }

    /**for (int i = 0; i < s.size(); i++)
    {
        cout << s[i] << endl;
    }
    cout << *s.begin() << endl; // s.begin() is private pointer you have to de reference it to see the value
    cout << *(s.end() - 1) << endl;**/
    return 0;
}