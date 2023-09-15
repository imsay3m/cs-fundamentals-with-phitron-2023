#include <bits/stdc++.h>
using namespace std;
int parent[1000];
void dsuSet(int n)
{
    for (int i = 1; i < n + 1; i++)
    {
        parent[i] = -1;
    }
}

int dsuFind(int node) // O(N)
{
    while (parent[node] != -1)
    {
        node = parent[node];
    }
    return node;
}

void dsuUnion(int a, int b) // O(N)
{
    int leaderA = dsuFind(a);
    int leaderB = dsuFind(b);
    if (leaderA != leaderB)
    {
        parent[leaderB] = leaderA;
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