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
    bool dp[n + 1][s + 1];
    dp[0][0] = true;
    for (int i = 1; i < s + 1; i++)
    {
        dp[0][i] = false;
    }
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 0; j < s + 1; j++)
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
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < s + 1; j++)
        {
            if (dp[i][j])
            {
                cout << "T ";
            }
            else
            {
                cout << "F ";
            }
        }
        cout << endl;
    }

    dp[n][s] ? cout << "Yes\n" : cout << "No\n";

    return 0;
}
/*
input
4
1 2 3 6
12
*/