#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7;
vector<int> adjList[N];
int level[N];
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
    int src, d;
    cin >> src >> d;
    bfs(src);
    // cout << "Level of destination:" << level[d] << endl;
    for (int i = 0; i < n; i++)
    {
        // cout << i << "-" << level[i] << endl;
        if (level[i] == 2)
        {
            cout << level[i] << "->" << i << " ";
        }
    }

    return 0;
}

/*
input
6 7
0 1
0 2
1 2
0 3
4 2
3 5
4 3
1 5

*/