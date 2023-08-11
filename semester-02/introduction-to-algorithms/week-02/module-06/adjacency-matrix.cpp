#include <bits/stdc++.h>
using namespace std;
// adjacency matrix
const int N = 1e3 + 7;
int adjMat[N][N] = {0};
int main()
{
    int n, m;
    // n->node,m->edge
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        // directed graph+weighted
        adjMat[u][v] = w;
        // undirected graph+weighted
        adjMat[v][u] = w;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << adjMat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}