#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    int dif;
    cin >> dif;
    int s = (sum + dif) / 2;
    int dp[n + 1][s + 1];
    dp[0][0] = 1;
    for (int j = 1; j < s + 1; j++)
    {
        dp[0][j] = 0;
    }
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 0; j < s + 1; j++)
        {
            if (a[i - 1] <= j)
            {
                int op1 = dp[i - 1][j - a[i - 1]];
                int op2 = dp[i - 1][j];
                dp[i][j] = op1 + op2;
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
4
1 1 2 3
1
*/