#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n], s = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        s += a[i];
    }
    bool dp[n + 1][s + 1];
    dp[0][0] = true;
    for (int j = 1; j < s + 1; j++)
    {
        dp[0][j] = false;
    }

    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 0; j < s + 1; j++)
        {
            if (a[i - 1] <= j)
            {
                dp[i][j] = dp[i - 1][j - a[i - 1]] || dp[i - 1][j];
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    vector<int> v;
    for (int j = 0; j < s + 1; j++)
    {
        if (dp[n][j])
        {
            v.push_back(j);
        }
    }
    int ans = INT_MAX;
    for (int val : v)
    {
        int s1 = val;
        int s2 = s - s1;
        ans = min(ans, abs(s1 - s2));
    }
    cout << ans;

    return 0;
}