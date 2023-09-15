#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 7;
vector<pair<int, int>> adj[N];
int dis[N];

void dijkstra(int src) // O(N*E)
{
    queue<int> q;
    q.push(src);
    dis[src] = 0;
    while (!q.empty())
    {
        int parent = q.front();
        q.pop();
        for (int i = 0; i < adj[parent].size(); i++)
        {
            pair<int, int> child = adj[parent][i];
            int childNode = child.first;
            int childCost = child.second;
            if (dis[parent] + childCost < dis[childNode])
            {
                dis[childNode] = dis[parent] + childCost;
                q.push(childNode);
            }
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b, w;
        cin >> a >> b >> w;
        adj[a].push_back({b, w});
        adj[b].push_back({a, w});
    }
    for (int i = 0; i < n + 1; i++)
    {
        dis[i] = INT_MAX;
    }

    dijkstra(1); // O(N*E)
    for (int i = 1; i < n + 1; i++)
    {
        cout << "Node " << i << ": " << dis[i] << endl;
    }

    return 0;
}

/*
input-1
5 7
1 3 2
1 2 10
2 3 1
3 4 2
4 5 7
2 4 3
2 5 2
*/