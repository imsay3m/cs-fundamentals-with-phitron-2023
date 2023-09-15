#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int parent[N];
int parentSize[N];
int mx = 0;
void dsuSet(int n)
{
    for (int i = 0; i < n + 1; i++)
    {
        parent[i] = -1;
        parentSize[i] = 1;
    }
}

int dsuFind(int node) // O(4)
{
    while (parent[node] != -1)
    {
        node = parent[node];
    }
    return node;
}

void dsuUnion(int a, int b) // O(4)
{
    int leaderA = dsuFind(a);
    int leaderB = dsuFind(b);
    if (leaderA != leaderB)
    {
        if (parentSize[leaderA] > parentSize[leaderB])
        {
            // Leader is A
            parent[leaderB] = leaderA;
            parentSize[leaderA] = parentSize[leaderA] + parentSize[leaderB];
            mx = max(mx, parentSize[leaderA]);
        }
        else
        {
            parent[leaderA] = leaderB;
            parentSize[leaderB] = parentSize[leaderB] + parentSize[leaderA];
            mx = max(mx, parentSize[leaderB]);
        }
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    dsuSet(n);
    int cmp = n;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        int leaderA = dsuFind(a);
        int leaderB = dsuFind(b);
        if (leaderA != leaderB)
        {
            cmp--;
            dsuUnion(a, b);
        }
        cout << cmp << " " << mx << endl;
    }

    return 0;
}