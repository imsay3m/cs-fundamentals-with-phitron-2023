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
    int l = 0, r = sz - 1, mid;
    bool flag = true;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (data == v[mid])
        {
            cout << mid << endl;
            flag = false;
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
    {
        cout << "Not Found" << endl;
    }

    return 0;
}