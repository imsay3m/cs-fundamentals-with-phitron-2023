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
        int s = 0;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            s += a[i];
        }
        if (s % 2 == 0)
        {
            int sum = s / 2;
            bool dp[n + 1][sum + 1];
            dp[0][0] = true;
            for (int j = 1; j < sum + 1; j++)
            {
                dp[0][j] = false;
            }
            for (int i = 1; i < n + 1; i++)
            {
                for (int j = 0; j < sum + 1; j++)
                {
                    if (a[i - 1] <= j)
                    {
                        bool op1 = dp[i - 1][j - a[i - 1]];
                        bool op2 = dp[i - 1][j];
                        dp[i][j] = op1 || op2;
                    }
                    else
                    {
                        dp[i][j] = dp[i - 1][j];
                    }
                }
            }
            if (dp[n][sum])
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}