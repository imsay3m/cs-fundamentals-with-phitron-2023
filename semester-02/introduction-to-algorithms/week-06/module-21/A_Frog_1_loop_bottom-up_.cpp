#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int cost[n + 1], dp[n + 1];
    for (int i = 1; i < n + 1; i++)
    {
        cin >> cost[i];
    }
    dp[1] = 0;
    dp[2] = abs(cost[2] - cost[1]);
    for (int i = 3; i < n + 1; i++)
    {
        int choice1 = dp[i - 2] + abs(cost[i] - cost[i - 2]);
        int choice2 = dp[i - 1] + abs(cost[i] - cost[i - 1]);
        dp[i] = min(choice1, choice2);
    }
    cout << dp[n] << endl;

    return 0;
}

/* #include <bits/stdc++.h>
using namespace std;

const int MAX_N = 100005;

bool Make_it(int N)
{
    vector<bool> dp(MAX_N, false);

    dp[1] = true; // Base case

    for (int i = 1; i <= N; i++)
    {
        if (dp[i])
        {

            if (i + 3 <= N)
                dp[i + 3] = true;
            if (i * 2 <= N)
                dp[i * 2] = true;
        }
    }

    return dp[N];
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        if (Make_it(N))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
} */