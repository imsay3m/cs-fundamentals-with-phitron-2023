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
    sort(v.begin(), v.end());

    for (int i = 0; i < q; i++)
    {
        int l = 0, r = sz, mid, data;
        cin >> data;
        int flag = 1;
        while (l <= r)
        {
            mid = ((l + r) / 2);
            if (data == v[mid])
            {
                cout << "found" << endl;
                flag = 0;
                break;
            }
            else if (data < v[mid])
            {
                r = mid - 1;
            }
            else if (data > v[mid])
            {
                l = mid + 1;
            }
        }
        if (flag)
            cout << "not found" << endl;
    }
    return 0;
}