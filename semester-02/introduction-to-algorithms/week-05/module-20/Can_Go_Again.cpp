#include <bits/stdc++.h>
using namespace std;

class Edge
{
public:
    int u, v;
    long long int w;
    Edge(int u, int v, long long int w)
    {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};

int main()
{
    int n, e;
    cin >> n >> e;
    vector<Edge> ans;
    while (e--)
    {
        int a, b;
        long long int w;
        cin >> a >> b >> w;
        ans.push_back(Edge(a, b, w));
    }

    long long int dis[n + 1];
    for (int i = 0; i < n + 1; i++)
    {
        dis[i] = LLONG_MAX;
    }

    int src;
    cin >> src;

    dis[src] = 0;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < ans.size(); j++)
        {
            Edge ed = ans[j];
            int a = ed.u;
            int b = ed.v;
            long long int w = ed.w;
            if (dis[a] != LLONG_MAX && dis[a] + w < dis[b])
            {
                dis[b] = dis[a] + w;
            }
        }
    }

    bool hasCycle = false;
    for (int j = 0; j < ans.size(); j++)
    {
        Edge ed = ans[j];
        int a = ed.u;
        int b = ed.v;
        long long int w = ed.w;
        if (dis[a] != LLONG_MAX && dis[a] + w < dis[b])
        {
            hasCycle = true;
            break;
        }
    }
    int q;
    cin >> q;
    while (q--)
    {
        int dst;
        cin >> dst;
        if (hasCycle)
        {
            continue;
        }
        else if (dis[dst] == LLONG_MAX)
        {
            cout << "Not Possible\n";
        }
        else
        {
            cout << dis[dst] << endl;
        }
    }
    if (hasCycle)
    {
        cout << "Negative Cycle Detected\n";
    }

    return 0;
}
