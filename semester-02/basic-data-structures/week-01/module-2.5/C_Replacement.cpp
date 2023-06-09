#include <bits/stdc++.h>
using namespace std;
int main()
{
    int sz;
    cin >> sz;
    vector<int> v(sz);
    for (int i = 0; i < sz; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < sz; i++)
    {
        if (v[i] > 0)
        {
            v[i] = 1;
        }
        else if (v[i] < 0)
        {
            v[i] = 2;
        }
    }
    for (int x : v)
    {
        cout << x << " ";
    }

    return 0;
}