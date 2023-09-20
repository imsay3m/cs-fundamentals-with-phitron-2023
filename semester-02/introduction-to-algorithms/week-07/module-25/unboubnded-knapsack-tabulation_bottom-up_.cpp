#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, s;
    cin >> n >> s;
    int v[n], w[n];
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> w[i];
    }
    int dp[n + 1][s + 1];
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < s + 1; j++)
        {
            if (i == 0 || j == 0)
            {
                dp[i][j] = 0;
            }
        }
    }
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < s + 1; j++)
        {
            if (w[i - 1] <= j)
            {
                int op1 = dp[i][j - w[i - 1]] + v[i - 1];
                int op2 = dp[i - 1][j];
                dp[i][j] = max(op1, op2);
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    cout << dp[n][s] << endl;

    return 0;
}

/*
input-1
4 6
5 3 2 4
4 1 3 2
*/