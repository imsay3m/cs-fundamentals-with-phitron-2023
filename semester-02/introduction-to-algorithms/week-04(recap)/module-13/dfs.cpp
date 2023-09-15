#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 7;
vector<int> adj[N];
bool vis[N];

void dfs(int src)
{
    cout << src << endl;
    vis[src] = true;
    for (int i = 0; i < adj[src].size(); i++)
    {
        int child = adj[src][i];
        if (!vis[child])
        {
            vis[child] = true;
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
    dfs(1);

    return 0;
}
/*
input-1
5 4
1 2
1 3
2 4
4 5

input-2


*/