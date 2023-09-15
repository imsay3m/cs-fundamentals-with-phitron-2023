#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 9;
int dis[N];
bool vis[N];
vector<int> adj[N];
vector<int> cmpList;

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    cmpList.push_back(src);
    vis[src] = true;
    dis[src] = 0;
    while (!q.empty())
    {
        int parent = q.front();
        q.pop();
        for (int i = 0; i < adj[parent].size(); i++)
        {
            int child = adj[parent][i];
            if (!vis[child])
            {
                cmpList.push_back(child);
                q.push(child);
                dis[child] = dis[parent] + 1;
                vis[child] = true;
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
    vector<int> cmp;
    for (int i = 1; i < n + 1; i++)
    {
        if (!vis[i])
        {
            cmp.push_back(i);
            bfs(i);
            for (int j = 0; j < cmpList.size(); j++)
            {
                cout << cmpList[j] << " ";
            }
            cout << endl;
            cmpList.clear();
        }
    }
    /* cout << cmp.size() << endl;
    for (int i = 0; i < cmp.size(); i++)
    {
        cout << cmp[i] << " ";
    }
    cout << "\nComponents List\n";
    for (int i = 0; i < cmpList.size(); i++)
    {
        cout << cmpList[i] << " ";
    } */

    return 0;
}
/*
input-1
5 2
1 2
3 4
*/