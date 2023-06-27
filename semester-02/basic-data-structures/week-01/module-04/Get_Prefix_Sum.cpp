#include <bits/stdc++.h>
using namespace std;
int main()
{
    int sz;
    cin >> sz;
    vector<long long> v;
    for (int i = 0; i < sz; i++)
    {
        long long x;
        cin >> x;
        v.push_back(x);
    }
    vector<long long> pre(sz);
    pre[0] = v[0];
    for (int i = 1; i < sz; i++)
    {
        pre[i] = pre[i - 1] + v[i];
    }
    reverse(pre.begin(), pre.end());
    for (long long y : pre)
    {
        cout << y << " ";
    }

    return 0;
}