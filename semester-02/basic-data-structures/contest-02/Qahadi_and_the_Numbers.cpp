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
        for (int i = 0; i < sz; i++)
        {
            int x;
            cin >> x;
            s.insert(x);
        }
        int mv = sz - s.size();
        cout << mv << endl;
    }

    return 0;
}