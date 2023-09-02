#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7;
vector<int> adjList[N];
int level[N];
bool visited[N];

/* void bfs(int src)
{
    queue<int> q;
    q.push(src);
    level[src] = 0;
    visited[src] = true;
    while (!q.empty())
    {
        int par = q.front();
        q.pop();
        for (int child : adjList[par])
        {
            if (!visited[child])
            {
                q.push(child);
                visited[child] = true;
                level[child] = level[par] + 1;
            }
        }
    }
} */
bool dfs(int par, int src = -1)
{
    bool cycleExists = false;
    visited[par] = true;
    for (int child : adjList[par])
    {
        if (child == par)
        {
            continue;
        }
        if (visited[child])
        {
            return true;
        }

        if (!visited[child])
        {
            cycleExists = cycleExists || (child, par);
        }
    }
    return cycleExists;
}

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
    bool flag = dfs(1);
    flag ? cout << "Yes" : cout << "No";

    return 0;
}

/*
input
4 4
1 2
2 3
1 3
3 4
*/