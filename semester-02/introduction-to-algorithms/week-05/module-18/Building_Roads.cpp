#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int parent[N];
int parentSize[N];
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
    map<int, bool> mp;
    for (int i = 1; i < n + 1; i++)
    {
        int leader = dsuFind(i);
        mp[leader] = true;
    }
    vector<int> v;
    for (auto i : mp)
    {
        v.push_back(i.first);
    }
    cout << v.size() - 1 << endl;
    for (int i = 0; i < v.size() - 1; i++)
    {
        cout << v[i] << " " << v[i + 1] << endl;
    }

    return 0;
}