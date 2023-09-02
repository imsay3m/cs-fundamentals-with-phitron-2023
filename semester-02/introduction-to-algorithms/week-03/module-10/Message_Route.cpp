#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 7;
vector<int> adjList[N];
vector<bool> visited(N, false);
int level[N];
int parent[N];

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    visited[src] = true;
    parent[src] = -1;
    level[src] = 1;
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
                parent[child] = par;
                level[child] = level[par] + 1;
            }
        }
    }
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
    bfs(1);
    if (level[n] == 0)
    {
        cout << "IMPOSSIBLE";
        return 0;
    }
    cout << level[n] << endl;
    int cur = n;
    vector<int> path;
    while (cur != -1)
    {
        path.push_back(cur);
        cur = parent[cur];
    }
    reverse(path.begin(), path.end());
    for (auto i : path)
    {
        cout << i << " ";
    }

    return 0;
}