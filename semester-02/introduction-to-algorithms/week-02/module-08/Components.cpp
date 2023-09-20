#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 7;
vector<int> adj[N];
bool vis[N];
int cnt = 0;
void dfs(int par)
{
    vis[par] = true;
    cnt++;
    for (int child : adj[par])
    {
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

    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    vector<int> cmpSz;
    for (int i = 0; i < N; i++)
    {
        if (!vis[i])
        {
            cnt = 0;
            dfs(i);
            if (cnt > 1)
            {
                cmpSz.push_back(cnt);
            }
        }
    }

    sort(cmpSz.begin(), cmpSz.end());

    for (int val : cmpSz)
    {
        cout << val << " ";
    }

    return 0;
}

/*
input-1
6 7
0 1
0 2
1 2
0 3
4 2
3 5
4 3
1 5
input-2
9 7
0 1
1 2
0 2
2 3
4 5
5 7
8 9

input-3
5 3
999 1000
100 500
500 600
*/