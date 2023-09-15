#include <bits/stdc++.h>
using namespace std;
#define pi pair<int, int>

const int N = 1005;
bool vis[N];
long long int dis[N];
vector<pi> adj[N];
void dijkstra(int srcNode)
{
    priority_queue<pi, vector<pi>, greater<pi>> pq;
    dis[srcNode] = 0;
    pq.push({dis[srcNode], srcNode});
    while (!pq.empty())
    {
        pi parent = pq.top();
        pq.pop();
        int parentNode = parent.second;
        int parentCost = parent.first;
        if (vis[parentNode])
        {
            continue;
        }
        vis[parentNode] = true;
        for (int i = 0; i < adj[parentNode].size(); i++)
        {
            pi child = adj[parentNode][i];
            int childNode = child.first;
            int childCost = child.second;
            if ((!vis[childNode]) && (dis[parentNode] + childCost < dis[childNode]))
            {
                dis[childNode] = dis[parentNode] + childCost;
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
        int a, b;
        long long int w;
        cin >> a >> b >> w;
        adj[a].push_back({b, w});
    }
    for (int i = 1; i < n + 1; i++)
    {
        dis[i] = INT_MAX;
    }
    int s, t, d;
    long long int dW;
    cin >> s >> t;
    dijkstra(s);
    while (t--)
    {
        cin >> d >> dW;
        if (vis[d] && dis[d] <= dW)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}