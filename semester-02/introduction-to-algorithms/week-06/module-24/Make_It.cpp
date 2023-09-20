#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 8;
int dp[N];
bool solve(int i, int n)
{
    if (i == n)
    {
        return true;
    }
    if (i > n)
    {
        return false;
    }
    if (dp[i] != -1)
    {
        return dp[i];
    }

    bool op1 = solve(i + 3, n);
    bool op2 = solve(i * 2, n);
    return dp[i] = op1 || op2;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 0; i <= n; i++)
        {
            dp[i] = -1;
        }

        if (solve(1, n))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}