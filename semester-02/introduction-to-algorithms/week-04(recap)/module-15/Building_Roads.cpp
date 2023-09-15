#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 9;
vector<int> adj[N];
bool vis[N];

void dfs(int src)
{
    vis[src] = true;
    for (int i = 0; i < adj[src].size(); i++)
    {
        int child = adj[src][i];
        if (!vis[child])
        {
            dfs(child);
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
    vector<int> heads;
    for (int i = 1; i < n + 1; i++)
    {
        if (!vis[i])
        {
            dfs(i);
            heads.push_back(i);
        }
    }
    cout << heads.size() - 1 << endl;
    for (int i = 0; i < heads.size() - 1; i++)
    {
        cout << heads[i] << " " << heads[i + 1] << endl;
    }

    return 0;
}