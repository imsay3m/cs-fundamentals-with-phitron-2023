#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 7;
vector<int> adjList[N];
bool visited[N];

void dfs(int par)
{
    visited[par] = true;
    for (int v : adjList[par])
    {
        if (!visited[v])
        {
            dfs(v);
        }
    }
}

void bfs(int par)
{
    queue<int> q;
    q.push(par);
    visited[par] = true;
    while (!q.empty())
    {
        int f = q.front();
        q.pop();
        for (int v : adjList[f])
        {
            if (!visited[v])
            {
                q.push(v);
                visited[v] = true;
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

    // connected component
    int ccCnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            // dfs(i);
            bfs(i);
            ccCnt++;
        }
    }
    cout << "Number Of Connected Components: " << ccCnt << endl;

    return 0;
}
/* cout << "Component " << ccCnt << ": ";
for (int j : adjList[i])
{
    cout << j << " ";
}
cout << endl; */
/* input
7 5
1 2
1 3
2 3
2 4
5 6

*/