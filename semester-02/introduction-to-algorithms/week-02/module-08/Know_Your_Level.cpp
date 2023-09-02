#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7;
vector<int> adjList[N];
int level[N] = {-1};
bool visited[N];

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    level[src] = 0;
    visited[src] = true;
    while (!q.empty())
    {
        int parent = q.front();
        q.pop();
        for (int child : adjList[parent])
        {
            if (!visited[child])
            {
                q.push(child);
                visited[child] = true;
                level[child] = level[parent] + 1;
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
    int l;
    cin >> l;
    bfs(0);
    bool found = false;
    for (int i = 0; i < n; i++)
    {
        if (level[i] == l)
        {
            cout << i << " ";
            found = true;
        }
    }

    if (!found)
    {
        cout << -1;
    }

    return 0;
}