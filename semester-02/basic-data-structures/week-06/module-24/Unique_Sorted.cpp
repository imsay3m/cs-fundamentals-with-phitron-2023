#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        set<int> s;
        int sz;
        cin >> sz;
        for (size_t i = 0; i < sz; i++)
        {
            int x;
            cin >> x;
            s.insert(x);
        }
        vector<int> v;
        for (int i : s)
        {
            v.push_back(i);
        }
        reverse(v.begin(), v.end());
        for (int i : v)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}