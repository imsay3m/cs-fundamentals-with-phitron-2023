#include <bits/stdc++.h>
using namespace std;
#define pi pair<int, int>
int n, m;
const int N = 1005;
char adj[N][N];
bool vis[N][N];
vector<pi> path = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
int cnt;

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
    cnt++;
    for (int i = 0; i < 4; i++)
    {
        pi p = path[i];
        int cI = p.first + sI;
        int cJ = p.second + sJ;
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
    int mn = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!vis[i][j] && adj[i][j] == '.')
            {
                cnt = 0;
                dfs(i, j);
                mn = min(mn, cnt);
            }
        }
    }
    if (mn == INT_MAX)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << mn << endl;
    }

    return 0;
}