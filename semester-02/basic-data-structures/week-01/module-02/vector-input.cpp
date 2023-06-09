#include <bits/stdc++.h>
using namespace std;
int main()
{
    // type-1
    /* vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        // cin >> v[i];
        int x;
        cin >> x;
        v.push_back(x);
    }
    for (int val : v)
    {
        cout << val << " ";
    } */

    // type-2
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int x : v)
    {
        cout << x << " ";
    }

    return 0;
}