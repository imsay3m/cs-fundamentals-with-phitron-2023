#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 7;
vector<pair<int, int>> adjList[N];
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        // weighted list
        int u, v, w;
        cin >> u >> v >> w;
        // directed
        adjList[u].push_back({v, w});
        // undirected
        adjList[v].push_back({u, w});
    }
    for (int i = 1; i <= n; i++)
    {
        cout << "List " << i << ": ";
        for (auto j : adjList[i])
        {
            cout << "(" << j.first << " - " << j.second << "), ";
        }
        cout << endl;
    }

    return 0;
}