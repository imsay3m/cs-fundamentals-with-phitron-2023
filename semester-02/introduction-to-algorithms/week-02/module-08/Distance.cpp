#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7;
vector<int> adjList[N];
int dstnc[N] = {-1};
bool visited[N];

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    visited[src] = true;
    dstnc[src] = 0;
    while (!q.empty())
    {
        int par = q.front();
        q.pop();
        for (int child : adjList[par])
        {
            if (!visited[child])
            {
                q.push(child);
                visited[child] = true;
                dstnc[child] = dstnc[par] + 1;
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
        int u, v;
        cin >> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
    int q;
    cin >> q;
    while (q--)
    {
        int src, dst;
        cin >> src >> dst;
        for (int i = 0; i < N; i++)
        {
            visited[i] = false;
            dstnc[i] = -1;
        }
        bfs(src);

        if (dstnc[dst] == 0 && src != dst)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << dstnc[dst] << endl;
        }
    }

    return 0;
}