#include <bits/stdc++.h>
using namespace std;
const long long int INF = 1e18;

int main()
{
    int n, e;
    cin >> n >> e;
    long long int dis[n + 1][n + 1];
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < n + 1; j++)
        {
            if (i == j)
            {
                dis[i][j] = 0;
            }
            else
            {
                dis[i][j] = INF;
            }
        }
    }
    while (e--)
    {
        int a, b;
        long long w;
        cin >> a >> b >> w;
        if (dis[a][b] == 0 || dis[a][b] == INF)
        {
            dis[a][b] = w;
        }
        if (dis[a][b] > w)
        {
            dis[a][b] = w;
        }
    }
    for (int k = 1; k < n + 1; k++)
    {
        for (int i = 1; i < n + 1; i++)
        {
            for (int j = 1; j < n + 1; j++)
            {
                if (dis[i][k] + dis[k][j] < dis[i][j])
                {
                    dis[i][j] = dis[i][k] + dis[k][j];
                }
            }
        }
    }
    int q;
    cin >> q;
    while (q--)
    {
        int i, j;
        cin >> i >> j;
        if (dis[i][j] == INF)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << dis[i][j] << endl;
        }
    }

    return 0;
}