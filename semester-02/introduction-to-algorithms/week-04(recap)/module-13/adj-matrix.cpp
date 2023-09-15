#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;
    int adj[n + 1][n + 1];
    for (int i = 0; i <= n + 1; i++)
    {
        for (int j = 0; j < n + 1; j++)
        {
            adj[i][j] = 0;
            if (i == j && i != 0)
            {
                adj[i][j] = 1;
            }
        }
    }

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj[a][b] = 1;
        adj[b][a] = 1;
    }

    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < n + 1; j++)
        {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
/*
input
4 4
1 2
4 1
1 3
3 4

*/