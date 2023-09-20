#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int s;
    cin >> s;
    int dp[n + 1][s + 1];
    dp[0][0] = 1;
    for (int i = 1; i < s + 1; i++)
    {
        // [row 0, column i]=0
        dp[0][i] = 0;
    }
    for (int i = 1; i < n + 1; i++)
    {
        // row-1
        for (int j = 0; j < s + 1; j++)
        {
            // column -0
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
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < s + 1; j++)
        {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }

    cout << dp[n][s] << endl;

    return 0;
}
/*
input-1
4
1 2 3 6
12
input-2
6
1 2 3 4 5 6
7
input-3
5
0 0 0 0 7
7
*/