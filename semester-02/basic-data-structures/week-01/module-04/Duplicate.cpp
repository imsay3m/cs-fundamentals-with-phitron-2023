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
    int flag = 1;
    for (int i = 0; i < sz - 1; i++)
    {
        for (int j = i + 1; j < sz; j++)
        {
            if (v[i] == v[j])
            {
                flag = 0;
                break;
            }
        }
    }
    flag ? cout << "NO" << endl : cout << "YES" << endl;

    return 0;
}