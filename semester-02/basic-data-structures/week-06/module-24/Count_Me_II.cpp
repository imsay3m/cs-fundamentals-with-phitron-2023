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
        map<int, int> mp;
        int maxCnt = INT_MIN;
        int maxNum = INT_MIN;
        for (int i = 0; i < sz; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
            if (mp[x] > maxCnt)
            {
                maxCnt = mp[x];
                maxNum = x;
            }
            else if (mp[x] == maxCnt && x > maxNum)
            {
                maxNum = x;
            }
        }
        cout << maxNum << " " << maxCnt << endl;
    }

    return 0;
}