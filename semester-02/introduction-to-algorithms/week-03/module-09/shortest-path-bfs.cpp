#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 7;
vector<int> adjList[N];
bool visited[N];
int level[N];
int parent[N];
void bfs(int src) // O(n+m)
{
    queue<int> q;
    q.push(src);
    visited[src] = true;
    level[src] = 0;
    parent[src] = -1;
    while (!q.empty())
    {
        int par = q.front();
        q.pop();
        for (auto child : adjList[par])
        {
            if (!visited[child])
            {
                q.push(child);
                visited[child] = true;
                level[child] = level[par] + 1;
                parent[child] = par;
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

    int src, dst;
    cin >> src >> dst;
    bfs(src);
    cout << "Destination Level: " << level[dst] << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << "Parent Of " << i << ": " << parent[i] << endl;
    }
    vector<int> path;
    int cur = dst;
    while (cur != -1)
    {
        path.push_back(cur);
        cur = parent[cur];
    }
    reverse(path.begin(), path.end());
    cout << "Path: ";
    for (int i : path)
    {
        cout << i << " ";
    }

    return 0;
}
/*
input
7 7
1 2
1 3
3 4
4 6
2 5
5 6
5 7
1
7
*/
/*
input
7 8
1 2
1 3
3 4
4 6
2 5
5 6
5 7
3 7
1
7
*/