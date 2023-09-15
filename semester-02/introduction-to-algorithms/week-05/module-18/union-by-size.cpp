#include <bits/stdc++.h>
using namespace std;
int parent[1000];
int parentSize[1000];
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
        }
        else
        {
            parent[leaderA] = leaderB;
            parentSize[leaderB] = parentSize[leaderB] + parentSize[leaderA];
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    dsuSet(n);
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        dsuUnion(a, b);
    }
    for (int i = 1; i < n + 1; i++)
    {
        cout << "Leader of " << i << " -> " << dsuFind(i) << endl;
    }

    return 0;
}
/*
input
7 4
1 2
2 3
4 5
6 5

*/