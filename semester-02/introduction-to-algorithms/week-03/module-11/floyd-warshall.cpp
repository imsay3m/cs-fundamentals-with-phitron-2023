#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 7;
const int INF = 1e9 + 7;
int d[N][N];
int n, m;

void dInit()
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i != j)
            {
                d[i][j] = INF;
            }
        }
    }
}
void printMatrix()
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (d[i][j] == INF)
            {
                cout << "X ";
            }
            else
            {
                cout << d[i][j] << " ";
            }
        }
        cout << "\n";
    }
}
int main()
{
    cin >> n >> m;
    dInit();
    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        d[u][v] = w;
        d[v][u] = w;
    }
    cout << "\nBefore Aplying Floyd Warshall:\n";
    printMatrix();

    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
            }
        }
    }
    cout << "\nAfter Aplying Floyd Warshall:\n";
    printMatrix();

    return 0;
}

/*
input
5 7
1 2 2
1 3 6
2 3 1
3 4 4
4 2 6
2 5 3
5 4 9
*/