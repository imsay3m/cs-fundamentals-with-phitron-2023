#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 9;
vector<int> adj[N];
bool vis[N];
int dis[N];
int par[N];

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    dis[src] = 0;
    par[src] = -1;
    while (!q.empty())
    {
        int parent = q.front();
        q.pop();
        for (int i = 0; i < adj[parent].size(); i++)
        {
            int child = adj[parent][i];
            if (!vis[child])
            {
                q.push(child);
                vis[child] = true;
                dis[child] = dis[parent] + 1;
                par[child] = parent;
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
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    bfs(1);
    for (int i = 1; i < n + 1; i++)
    {
        cout << "Node " << i << ": " << par[i] << endl;
    }
    int d;
    cin >> d;
    if (vis[d])
    {
        vector<int> path;
        int x = d;
        while (x != -1)
        {
            // cout << x << endl;
            path.push_back(x);
            x = par[x];
        }
        reverse(path.begin(), path.end());
        for (int val : path)
        {
            cout << val << " ";
        }
    }
    else
    {
        cout << "Path Nai\n";
    }

    return 0;
}
/*
input-1
5 7
1 3
1 2
3 4
2 3
2 5
4 5
2 4

*/