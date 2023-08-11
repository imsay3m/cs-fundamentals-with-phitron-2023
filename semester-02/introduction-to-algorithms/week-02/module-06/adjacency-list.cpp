#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 7;
vector<int> adjList[N];
int main()
{
    // n->nodes,  m->edges
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        // unweighted
        int u, v;
        cin >> u >> v;
        // directed graph
        adjList[u].push_back(v);
        // undirected graph
        adjList[v].push_back(u);
    }
    for (int i = 1; i <= n; i++)
    {
        cout << "List " << i << ": ";
        for (int j : adjList[i])
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}