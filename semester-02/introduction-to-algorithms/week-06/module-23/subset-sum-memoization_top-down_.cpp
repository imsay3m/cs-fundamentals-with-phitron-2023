#include <bits/stdc++.h>
using namespace std;

int dp[1008][1008];

bool subsetSum(int n, int a[], int s)
{
    if (n == 0)
    {
        if (s == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    if (dp[n][s] != -1)
    {
        return dp[n][s];
    }

    if (a[n - 1] <= s)
    {
        bool op1 = subsetSum(n - 1, a, s - a[n - 1]);

        bool op2 = subsetSum(n - 1, a, s);
        return dp[n][s] = op1 || op2;
    }
    else
    {
        return dp[n][s] = subsetSum(n - 1, a, s);
    }
}

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
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < s + 1; j++)
        {
            dp[i][j] = -1;
        }
    }
    subsetSum(n, a, s) ? cout << "Yes\n" : cout << "No\n";

    return 0;
}
/*
input
4
1 2 4 6
7
*/