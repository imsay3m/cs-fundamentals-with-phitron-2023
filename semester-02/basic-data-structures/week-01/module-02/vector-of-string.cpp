#include <bits/stdc++.h>
using namespace std;
int main()
{
    // array of string without space
    /* int n;
    cin >> n;
    vector<string> v;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }
    for (string str : v)
    {
        cout << str << " ";
    } */

    // array of string with space
    int n;
    cin >> n;
    cin.ignore();
    vector<string> v(n);
    for (int i = 0; i < n; i++)
    {
        string s;
        getline(cin, v[i]);
    }
    for (string str : v)
    {
        cout << str << endl;
    }

    return 0;
}