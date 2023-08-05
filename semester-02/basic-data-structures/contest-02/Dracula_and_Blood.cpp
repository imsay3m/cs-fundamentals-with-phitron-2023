#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        map<char, int> mp;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
            {
                mp['1']++;
            }
        }
        int n = mp[s['1']];
        if (n % 2 == 0)
        {
            cout << n / 2 << endl;
        }
        else
        {
            cout << (n + 1) / 2 << endl;
        }
    }

    return 0;
}