#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 9;
vector<pair<int, int>> adj[N];
int dis[N];
bool vis[N];
// int par[N];
void dijkstra(int srcNode) // O(N+Elog(N))
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq; // pq({cost,node})
    dis[srcNode] = 0;
    // par[srcNode] = -1;
    pq.push({dis[srcNode], srcNode});
    while (!pq.empty())
    {
        pair<int, int> parent = pq.top();
        pq.pop();
        int parentNode = parent.second;
        int parentCost = parent.first;
        vis[parentNode] = true;
        for (int i = 0; i < adj[parentNode].size(); i++) // adj({node,weight})
        {
            pair<int, int> child = adj[parentNode][i];
            int childNode = child.first;
            int childCost = child.second;
            if ((!vis[childNode]) && (parentCost + childCost < dis[childNode]))
            {
                // par[childNode] = parentNode;
                dis[childNode] = parentCost + childCost;
                pq.push({dis[childNode], childNode});
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

    dijkstra(1); // O(N+Elog(N))
    for (int i = 1; i < n + 1; i++)
    {
        cout << "Node " << i << ": " << dis[i] << endl;
    }
    /* int d;
    cin >> d;
    if (vis[d])
    {
        vector<int> path;
        int x = d;
        while (x != -1)
        {
            path.push_back(x);
            x = par[x];
        }
        reverse(path.begin(), path.end());
        for (int i : path)
        {
            cout << i << " ";
        }
    }
    else
    {
        cout << "Path nai\n";
    } */

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