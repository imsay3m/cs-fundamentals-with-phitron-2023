#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int s;
        cin >> s;
        s = 1000 - s;
        int w[n];
        for (int i = 0; i < n; i++)
        {
            cin >> w[i];
        }

        int dp[n + 1][s + 1];
        dp[0][0] = 0;
        for (int j = 1; j < s + 1; j++)
        {
            dp[0][j] = INT_MAX - 1;
        }
        for (int i = 1; i < n + 1; i++)
        {
            for (int j = 0; j < s + 1; j++)
            {
                if (w[i - 1] <= j)
                {
                    dp[i][j] = min(1 + dp[i][j - w[i - 1]], dp[i - 1][j]);
                }
                else
                {
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }
        if (dp[n][s] == INT_MAX - 1)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << dp[n][s] << endl;
        }
    }

    return 0;
}