#include <bits/stdc++.h>
using namespace std;
int main()
{
    int sz, q;
    cin >> sz >> q;
    vector<int> v(sz);
    // time limit will exceed
    for (int i = 0; i < sz; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < q; i++)
    {
        int x;
        cin >> x;
        vector<int>::iterator it = find(v.begin(), v.end(), x);
        it == v.end() ? cout << "not found" : cout << "found";
        cout << endl;
    }

    return 0;
}