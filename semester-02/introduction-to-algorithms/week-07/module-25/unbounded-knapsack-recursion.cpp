#include <bits/stdc++.h>
using namespace std;

int unboundedKnapsack(int n, int s, int v[], int w[])
{
    if (n == 0 || s == 0)
    {
        return 0;
    }
    else if (w[n - 1] <= s)
    {
        int op1 = v[n - 1] + unboundedKnapsack(n, s - w[n - 1], v, w);
        int op2 = unboundedKnapsack(n - 1, s, v, w);
        return max(op1, op2);
    }
    else
    {
        return unboundedKnapsack(n - 1, s, v, w);
    }
}

int main()
{
    int n, s;
    cin >> n >> s;
    int v[n], w[n];
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> w[i];
    }
    cout << unboundedKnapsack(n, s, v, w);

    return 0;
}

/*
input-1
4 6
5 3 2 4
4 1 3 2
*/