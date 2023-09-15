#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7;
int parent[N];
int parentLevel[N];
void dsuSet(int n)
{
    for (int i = 0; i < n + 1; i++)
    {
        parent[i] = -1;
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
        if (parentLevel[leaderA] > parentLevel[leaderB])
        {
            parent[leaderB] = leaderA;
        }
        else if (parentLevel[leaderB] > parentLevel[leaderA])
        {
            parent[leaderA] = leaderB;
        }
        else
        {
            parent[leaderB] = leaderA;
            parentLevel[leaderA]++;
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    dsuSet(n);
    int cnt = 0;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        int leaderA = dsuFind(a);
        int leaderB = dsuFind(b);
        if (leaderA == leaderB)
        {
            cnt++;
        }
        else
        {
            dsuUnion(a, b);
        }
    }
    cout << cnt << endl;

    return 0;
}