#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9 + 7;
const int N = 1e5 + 7;

vector<pair<int, int>> adjList[N];
// vector<pair<pair<int, int>, int>> edgeList;
int d[N];
int n, m;

void bellmanFord(int src)
{
    for (int i = 1; i <= n; i++)
    {
        d[i] = INF;
    }
    d[src] = 0;
    for (int i = 0; i < n - 1; i++)
    {
        // all edges relaxation
        /* for (auto edge : edgeList)
        {
            int u = edge.first.first;
            int v = edge.first.second;
            int w = edge.second;
            if ((d[u] != INF) && (d[v] > d[u] + w))
            {
                d[v] = d[u] + w;
            }
        } */

        for (int u = 1; u <= n; u++)
        {
            for (auto vpair : adjList[u])
            {
                int v = vpair.first;
                int w = vpair.second;
                if ((d[u] != INF) && (d[v] > d[u] + w))
                {
                    d[v] = d[u] + w;
                }
            }
        }
    }
}

// O(VE)
// sparse graph- O(n*n)
// dense graph- O(n*n*n)

int main()
{
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        adjList[u].push_back({v, w});
        // edgeList.push_back({{u, v}, w});
    }

    bellmanFord(1);

    for (int i = 1; i <= n; i++)
    {
        cout << "Distance of " << i << ": " << d[i] << endl;
    }

    return 0;
}
/*
input-1
7 10
1 2 6
1 3 5
1 4 5
2 5 -1
3 2 -2
3 5 1
4 3 -2
4 6 -1
5 7 3
6 7 3

input-2
4 4
1 2 4
1 3 3
3 4 5
4 2 -10
*/