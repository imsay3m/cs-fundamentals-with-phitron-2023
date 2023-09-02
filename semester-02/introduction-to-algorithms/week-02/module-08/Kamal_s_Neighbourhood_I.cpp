#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7;
vector<int> adjList[N];
bool visited[N];

void bfs(int src)
{
    queue<int> q;
    q.push(src);
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
    int h;
    cin >> h;
    bfs(0);
    cout << adjList[h].size() << endl;

    return 0;
}