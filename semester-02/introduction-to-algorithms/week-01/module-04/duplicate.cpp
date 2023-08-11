#include <bits/stdc++.h>
using namespace std;

int main()
{
    int sz;
    cin >> sz;
    vector<int> v;
    for (int i = 0; i < sz; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int data;
    cin >> data;
    int l = 0, r = sz - 1, mid, indx = 0;
    bool flag = false;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (data == v[mid])
        {
            flag = true;
            indx = mid;
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
    if (flag && data == v[indx + 1])
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}