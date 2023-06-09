#include <bits/stdc++.h>
using namespace std;
int main()
{
    int sz, q;
    cin >> sz >> q;
    vector<int> v(sz);
    for (int i = 0; i < sz; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < q; i++)
    {
        int l, r, sum = 0;
        cin >> l >> r;
        for (int j = l - 1; j < r; j++)
        {
            sum += v[j];
        }
        cout << sum << endl;
    }

    return 0;
}