#include <bits/stdc++.h>
using namespace std;
int dp[1008][1008];
int knapsack(int n, int s, int v[], int w[])
{
    if (n == 0 || s == 0)
    {
        return 0;
    }
    if (dp[n][s] != -1)
    {
        return dp[n][s];
    }
    if (w[n - 1] <= s)
    {
        int op1 = knapsack(n - 1, s - w[n - 1], v, w) + v[n - 1];
        int op2 = knapsack(n - 1, s, v, w);
        return dp[n][s] = max(op1, op2);
    }
    else
    {
        // there is no space left in the bag
        return dp[n][s] = knapsack(n - 1, s, v, w);
    }
}

int main()
{
    int n;
    cin >> n;
    int w[n], v[n];
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> w[i];
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

    cout << knapsack(n, s, v, w) << endl;

    return 0;
}
/*
input
4
1 5 3 2
5 2 4 3
7
*/