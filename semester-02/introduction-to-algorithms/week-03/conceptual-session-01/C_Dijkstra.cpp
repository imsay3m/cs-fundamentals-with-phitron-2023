#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 7;
const long long int INF = 1e18;
vector<pair<int, int>> adjList[N];
long long int d[N];
bool visited[N];
int selectedNode[N];

void dijkstra(int src)
{

    d[src] = 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({d[src], src});
    while (!pq.empty())
    {
        pair<int, int> par = pq.top();
        pq.pop();

        int parNode = par.second;
        if (!visited[parNode])
        {
            visited[parNode] = true;
            for (auto child : adjList[parNode])
            {
                int edgeCost = child.first;
                int childNode = child.second;
                if (d[parNode] + edgeCost < d[childNode])
                {
                    selectedNode[childNode] = parNode;
                    d[childNode] = d[parNode] + edgeCost;
                    pq.push({d[childNode], childNode});
                }
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
        adjList[u].push_back({w, v});
        adjList[v].push_back({w, u});
    }
    int src = 1;
    for (int i = 1; i <= n; i++)
    {
        d[i] = INF;
    }
    dijkstra(src);
    if (!visited[n])
    {
        cout << -1 << endl;
        return 0;
    }
    int cur = n;
    vector<int> path;

    while (1)
    {
        path.push_back(cur);
        if (cur == src)
        {
            break;
        }
        cur = selectedNode[cur];
    }
    reverse(path.begin(), path.end());
    for (int i : path)
    {
        cout << i << " ";
    }
    cout << "\n";

    return 0;
}

/*
input
5 6
1 2 2
2 5 5
2 3 4
1 4 1
4 3 3
3 5 1
*/