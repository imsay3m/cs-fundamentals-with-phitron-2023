#include <bits/stdc++.h>
using namespace std;

class Edge
{
public:
    int u;
    int v;
    int w;
    Edge(int u, int v, int w)
    {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, e;
    cin >> n >> e;
    vector<Edge> v;
    while (e--)
    {
        int a, b, w;
        cin >> a >> b >> w;
        Edge ed(a, b, w);
        v.push_back(ed);
    }
    int dis[n + 1];
    for (int i = 1; i < n + 1; i++)
    {
        dis[i] = INT_MAX;
    }
    dis[1] = 0;

    for (int i = 0; i < n - 1; i++) // O(N*E)
    {
        for (int j = 0; j < v.size(); j++)
        {
            Edge ed = v[j];
            int a = ed.u, b = ed.v, w = ed.w;
            if (dis[a] + w < dis[b])
            {
                dis[b] = dis[a] + w;
            }
        }
    }
    for (int i = 1; i < n + 1; i++)
    {
        cout << "Node " << i << ": " << dis[i] << endl;
    }

    return 0;
}

/*
input-1
4 4
1 2 5
2 3 2
3 4 -2
1 4 10
*/