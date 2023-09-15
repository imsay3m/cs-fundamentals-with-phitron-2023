#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int parent[N];
int parentSize[N];
class Edge
{
public:
    int a, b;
    long long int w;
    Edge(int a, int b, long long int w)
    {
        this->a = a;
        this->b = b;
        this->w = w;
    }
};

void dsuSet(int n)
{
    for (int i = 0; i < n + 1; i++)
    {
        parent[i] = -1;
        parentSize[i] = 1;
    }
}

int dsuFind(int node)
{
    while (parent[node] != -1)
    {
        node = parent[node];
    }
    return node;
}

void dsuUnion(int a, int b)
{
    int leaderA = dsuFind(a);
    int leaderB = dsuFind(b);
    if (leaderA != leaderB)
    {
        if (parentSize[leaderA] > parentSize[leaderB])
        {
            parent[leaderB] = leaderA;
            parentSize[leaderA] = parentSize[leaderA] + parentSize[leaderB];
        }
        else
        {
            parent[leaderA] = leaderB;
            parentSize[leaderB] = parentSize[leaderB] + parentSize[leaderA];
        }
    }
}

bool cmp(Edge a, Edge b)
{
    return a.w < b.w;
}

int main()
{
    int n, e;
    cin >> n >> e;
    vector<Edge> adj;
    vector<Edge> ans;
    dsuSet(n);
    while (e--)
    {
        int a, b;
        long long int w;
        cin >> a >> b >> w;
        adj.push_back(Edge(a, b, w));
    }
    sort(adj.begin(), adj.end(), cmp);
    int cnt = 0;
    for (auto val : adj)
    {
        int a = val.a;
        int b = val.b;
        int leaderA = dsuFind(a);
        int leaderB = dsuFind(b);
        if (leaderA != leaderB)
        {
            cnt++;
            ans.push_back(val);
            dsuUnion(a, b);
        }
    }
    long long int sum = 0;
    for (auto i : ans)
    {
        sum += i.w;
    }
    if (cnt == n - 1)
    {
        cout << sum << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}