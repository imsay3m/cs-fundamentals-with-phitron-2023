#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 7;
vector<int> adjList[N];
bool visited[N];
int sz = 0;

void dfs(int par)
{
    visited[par] = true;
    for (int child : adjList[par])
    {
        if (!visited[child])
        {
            sz++;
            dfs(child);
        }
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adjList[u].push_back(v);
    }
    int k;
    cin >> k;
    dfs(k);
    cout << sz << endl;

    return 0;
}