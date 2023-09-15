#include <bits/stdc++.h>
using namespace std;
#define pi pair<int, int>
const int N = 105;
int n, m;
int dis[N][N];
int adj[N][N];
bool vis[N][N];
vector<pi> path = {{-1, 2}, {-2, 1}, {1, 2}, {2, 1}, {-2, -1}, {-1, -2}, {2, -1}, {1, -2}};

bool isValid(int cI, int cJ)
{
    if (cI >= 0 && cI < n && cJ >= 0 && cJ < m)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void bfs(int sI, int sJ)
{
    queue<pi> q;
    q.push({sI, sJ});
    dis[sI][sJ] = 0;
    vis[sI][sJ] = true;
    while (!q.empty())
    {
        pi parent = q.front();
        q.pop();
        int parentI = parent.first;
        int parentJ = parent.second;
        for (int i = 0; i < 8; i++)
        {
            int cI = parentI + path[i].first;
            int cJ = parentJ + path[i].second;
            if (isValid(cI, cJ) && !vis[cI][cJ])
            {
                vis[cI][cJ] = true;
                dis[cI][cJ] = dis[parentI][parentJ] + 1;
                q.push({cI, cJ});
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        int sI, sJ;
        cin >> sI >> sJ;
        int dI, dJ;
        cin >> dI >> dJ;
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                dis[i][j] = -1;
                vis[i][j] = false;
            }
        }
        bfs(sI, sJ);
        cout << dis[dI][dJ] << endl;
    }

    return 0;
}