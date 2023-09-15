#include <bits/stdc++.h>
using namespace std;
#define pi pair<int, int>
int n, m;
const int N = 1005;
bool vis[N][N];
char a[N][N];
vector<pi> path = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

bool isValid(int cI, int cJ)
{
    if (cI >= 0 && cI < n && cJ >= 0 && cJ < m && a[cI][cJ] == '.')
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
            cin >> a[i][j];
        }
    }
    int sI, sJ, dI, dJ;
    cin >> sI >> sJ >> dI >> dJ;

    dfs(sI, sJ);

    if (vis[sI][sJ] && vis[dI][dJ])
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}