#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 7;
vector<int> adjList[N];
bool visited[N];
int level[N];

void bfs(int p)
{
    // queue te rakha
    queue<int> q;
    q.push(p);
    visited[p] = true;
    level[p] = 0;

    while (!q.empty())
    {
        // pop a node from queue and insert unvisited neighbour of that node
        int f = q.front();
        q.pop();
        cout << "Visiting Node: " << f << endl;
        // section 1: A node is being processed

        for (int v : adjList[f])
        {
            // section 2: child is being process
            if (!visited[v])
            {
                q.push(v);
                visited[v] = true;
                level[v] = level[f] + 1;
                // section 3: child is being processed
            }
            // section 4: child is being process
        }
        // section 5: Node process done
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
    bfs(1);
    for (int i = 1; i <= n; i++)
    {
        cout << "Level of " << i << "->" << level[i] << endl;
    }

    return 0;
}

/* input
12 12
1 2
1 3
1 10
2 4
2 5
3 9
10 11
10 12
5 6
5 7
7 8
8 13
*/