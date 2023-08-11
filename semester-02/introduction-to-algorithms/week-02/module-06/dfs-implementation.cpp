#include <bits/stdc++.h>
using namespace std;

// using adjacency list

const int N = 1e3 + 7;
vector<int> adjList[N];
bool visited[N];

void dfs(int u)
{
    // section 1:actions just after entering node u
    visited[u] = true;
    cout << "Visiting Node: " << u << endl;
    for (int v : adjList[u])
    {
        // section 2:actions before entering a new neighbour/child
        if (!visited[v])
        {
            dfs(v);
        }
        // section 3:actions after exiting a neighbour/child
    }
    // section 4:actions before exiting node u
}

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        // connection pN->Nn/Cn
        int u, v;
        cin >> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
    /* for (int i = 1; i <= n; i++)
    {
        cout << "Node " << i << ": ";
        for (int j : adjList[i])
        {
            cout << j << " ";
        }
        cout << endl;
    } */
    dfs(1);
    cout << "----Visited Nodes----" << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << "Node " << i << " status: " << visited[i] << endl;
    }

    return 0;
}