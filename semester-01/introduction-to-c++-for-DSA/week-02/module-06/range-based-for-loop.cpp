#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    // index based
    //  for (int i = 0; i < s.size(); i++)
    //  {
    //      cout << s[i] << endl;
    //  }
    // not index based
    for (char c : s)
    {
        cout << c << endl;
    }
    // range based
    // for (auto &&c : s)
    // {
    //     cout << c << endl;
    // }

    return 0;
}