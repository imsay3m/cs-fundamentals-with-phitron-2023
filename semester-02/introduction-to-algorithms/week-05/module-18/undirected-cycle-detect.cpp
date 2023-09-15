#include <bits/stdc++.h>
using namespace std;
int parent[1000];
int parentLevel[1000];

void dsuSet(int n)
{
    for (int i = 1; i < n + 1; i++)
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
            // if both are at equal level
            parent[leaderB] = leaderA;
            parentLevel[leaderA]++;
        }
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, e;
    cin >> n >> e;
    dsuSet(n);
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        int leaderA = dsuFind(a);
        int leaderB = dsuFind(b);
        if (leaderA == leaderB)
        {
            cout << "Cycle detected in between: " << a << " " << b << endl;
        }
        else
        {
            dsuUnion(a, b);
        }
    }

    return 0;
}

/*
input
5 5
4 5
1 2
2 5
1 4
2 3
*/