#include <bits/stdc++.h>
using namespace std;

void merge(int a[], int l, int m, int r)
{
    int leftSz = m - l + 1;
    int rightSz = r - (m + 1) + 1;
    int L[leftSz], R[rightSz];
    for (int i = l, k = 0; i <= m; i++)
    {
        L[k] = a[i];
        k++;
    }
    for (int i = m + 1, k = 0; i <= r; i++)
    {
        R[k] = a[i];
        k++;
    }
    int i = 0, j = 0;
    int cur = l;
    while (i < leftSz && j < rightSz)
    {
        if (L[i] <= R[j])
        {
            a[cur] = L[i];
            i++;
        }
        else
        {
            a[cur] = R[j];
            j++;
        }
        cur++;
    }
    while (i < leftSz)
    {
        a[cur] = L[i];
        i++;
        cur++;
    }
    while (j < rightSz)
    {
        a[cur] = R[j];
        j++;
        cur++;
    }

    /* for (int i = 0; i < rightSz; i++)
    {
        cout << R[i] << " ";
    } */
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    merge(a, 0, 3, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
/*
input
10
2 3 5 10 1 4 6 8 9 15
*/