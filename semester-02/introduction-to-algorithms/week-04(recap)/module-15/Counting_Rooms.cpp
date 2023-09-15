#include <bits/stdc++.h>
using namespace std;

#define pi pair<int, int>

int n, m;
const int N = 1005;
char adj[N][N];
bool vis[N][N];
vector<pi> path = {{0, -1}, {0, 1}, {-1, 0}, {1, 0}};

bool isValid(int cI, int cJ)
{
    if (cI >= 0 && cI < n && cJ >= 0 && cJ < m && adj[cI][cJ] == '.')
    {
        return true;
    }
    else
    {
        return false;
    }
}

void dfs(int sI, int sJ)
{
    vis[sI][sJ] = true;
    for (int i = 0; i < 4; i++)
    {
        pi p = path[i];
        int cI = sI + p.first;
        int cJ = sJ + p.second;
        if (isValid(cI, cJ) && !vis[cI][cJ])
        {
            dfs(cI, cJ);
        }
    }
}

int main()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> adj[i][j];
        }
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!vis[i][j] && adj[i][j] == '.')
            {
                cnt++;
                dfs(i, j);
            }
        }
    }
    cout << cnt << endl;

    return 0;
}