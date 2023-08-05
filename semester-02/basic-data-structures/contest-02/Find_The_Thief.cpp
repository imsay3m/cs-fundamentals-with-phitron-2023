#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int sz;
        cin >> sz;
        map<int, int> mp;
        vector<int> v;
        for (int i = 0; i < sz; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
            mp[v[i]]++;
        }
        for (auto it : mp)
        {
            if (it.second % 2 != 0)
            {
                cout << it.first << endl;
            }
        }
    }

    return 0;
}