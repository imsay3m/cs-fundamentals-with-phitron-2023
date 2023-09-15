#include <bits/stdc++.h>
using namespace std;

const int INF = 1e7;
void fast()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
}
int main()
{
    fast();
    int n, e;
    cin >> n >> e;
    int dis[n + 1][n + 1];
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
        int a, b, w;
        cin >> a >> b >> w;
        dis[a][b] = w;
    }
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < n + 1; j++)
        {
            if (dis[i][j] == INF)
            {
                cout << "INF"
                     << " ";
            }
            else
            {
                cout << dis[i][j] << " ";
            }
        }
        cout << endl;
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
    cout << "Updated" << endl;
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < n + 1; j++)
        {
            cout << dis[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

/*
input-1
4 6
1 2 3
2 1 2
1 4 5
4 3 2
3 2 1
2 4 4

input-2
3 3
1 2 -1
2 3 2
3 1 -5

*/