#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    int n = a.size();
    int m = b.size();
    int dp[n + 1][m + 1];
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < m + 1; j++)
        {
            if (i == 0 || j == 0)
            {
                dp[i][j] = 0;
            }
        }
    }
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < m + 1; j++)
        {
            if (a[i - 1] == b[j - 1])
            {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }
            else
            {
                dp[i][j] = 0;
            }
        }
    }
    int mx = 0;
    int ci, cj;
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < m + 1; j++)
        {
            if (dp[i][j] > mx)
            {
                mx = dp[i][j];
                ci = i;
                cj = j;
            }
        }
    }
    string ans;
    while (ci != 0 && cj != 0)
    {
        if (a[ci - 1] == b[ci - 1])
        {
            ans += a[ci - 1];
            ci--;
            cj--;
        }
        else
        {
            break;
        }
    }
    reverse(ans.begin(), ans.end());
    cout << ans << endl;
    return 0;
}

/*
input
aceghr
acaeghbr
*/