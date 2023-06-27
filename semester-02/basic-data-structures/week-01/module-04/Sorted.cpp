#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int sz;
        cin >> sz;
        vector<int> v1;
        for (int i = 0; i < sz; i++)
        {
            int x;
            cin >> x;
            v1.push_back(x);
        }
        vector<int> v2 = v1;
        sort(v2.begin(), v2.end());
        int flag = 0;
        for (int i = 0; i < sz; i++)
        {
            if (v1[i] != v2[i])
            {
                flag = 1;
                break;
            }
        }
        flag ? cout << "NO" << endl : cout << "YES" << endl;
    }

    return 0;
}