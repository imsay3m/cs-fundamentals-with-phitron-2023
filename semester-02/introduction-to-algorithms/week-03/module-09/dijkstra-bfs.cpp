#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;

const int N = 1e3 + 7;
const int INF = 1e9 + 10;
vector<pii> adjList[N];
vector<int> dist(N, INF);
vector<bool> visited(N);

void dijkstra(int src)
{
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    dist[src] = 0;
    pq.push({dist[src], src});

    while (!pq.empty())
    {
        int par = pq.top().second;
        pq.pop();
        visited[par] = true;

        for (pii child : adjList[par])
        {
            int v = child.first;
            int w = child.second;
            if ((!visited[v]) && (dist[v] > dist[par] + w))
            {
                dist[v] = dist[par] + w;
                pq.push({dist[v], v});
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
        int u, v, w;
        cin >> u >> v >> w;
        adjList[u].push_back({v, w});
        adjList[v].push_back({u, w});
    }
    dijkstra(1);
    for (int i = 1; i <= n; i++)
    {
        cout << "Distance of Node " << i << ": " << dist[i] << endl;
    }

    return 0;
}
/*
input
7 8
1 2 3
1 3 5
3 4 1
4 6 1
2 5 6
5 6 1
5 7 2
3 7 12
*/