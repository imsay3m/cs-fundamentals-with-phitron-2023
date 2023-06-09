#include <bits/stdc++.h>
using namespace std;
int main()
{
    int sz, q;
    cin >> sz >> q;
    vector<long long> v(sz);
    for (int i = 0; i < sz; i++)
    {
        cin >> v[i];
    }
    vector<long long> pre(sz);
    pre[0] = v[0];

    for (int i = 1; i < sz; i++)
    {
        pre[i] = v[i] + pre[i - 1];
    }

    while (q--)
    {
        int l, r;
        long long sum;
        cin >> l >> r;
        l--, r--;
        if (l == 0)
            sum = pre[r];
        else
            sum = pre[r] - pre[l - 1];

        cout << sum << endl;
    }

    return 0;
}