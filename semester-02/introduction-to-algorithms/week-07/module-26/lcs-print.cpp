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
                int ans1 = dp[i - 1][j];
                int ans2 = dp[i][j - 1];
                dp[i][j] = max(ans1, ans2);
            }
        }
    }

    int i = n, j = m;
    string ans;
    while (i != 0 && j != 0)
    {
        if (a[i - 1] == b[j - 1])
        {
            ans += a[i - 1];
            i--, j--;
        }
        else if (dp[i][j - 1] > dp[i - 1][j])
        {
            // go left
            j--;
        }
        else if (dp[i][j - 1] <= dp[i - 1][j])
        {
            // go top
            i--;
        }
    }
    reverse(ans.begin(), ans.end());
    cout << ans << endl;

    return 0;
}
/*
input-1
abd
gbad
input-2
adgef
abdef
input-3
abcdfgr
acfdgr
input-4
abccdgceg
azbaccgef
*/