#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 7;
// vector of array
vector<int> adjList[N];
bool visited[N];
int depth[N];
int height[N];

void dfs(int par) // O(V+E)
{
    cout << par << " ";
    visited[par] = true;
    for (int child : adjList[par])
    {
        if (!visited[child])
        {
            // tracking from top/parent
            depth[child] = depth[par] + 1;
            dfs(child);
            // bactracking from bottom/leaf
            height[par] = max(height[par], height[child] + 1);
        }
    }
}

int main()
{
    // n->Nodes m->Edges
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        // u->Arr Indx v->List Indx
        // connection
        int u, v;
        cin >> u >> v;
        // undirected
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
    for (int i = 0; i < n; i++)
    {
        cout << i << "->";
        for (int j = 0; j < adjList[i].size(); j++)
        {
            cout << adjList[i][j] << " ";
        }
        cout << endl;
    }
    int src = 0;
    dfs(src);
    cout << "\nDepth of 1:" << depth[1] << endl;
    cout << "Height of 6:" << height[6] << endl;

    return 0;
}
/*
7 6
0 1
0 2
1 3
1 4
2 5
2 6
*/