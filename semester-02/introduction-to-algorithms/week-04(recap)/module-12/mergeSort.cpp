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

void mergeSort(int a[], int l, int r)
{
    if (l < r)
    {
        int mid = (l + r) / 2;
        mergeSort(a, l, mid);
        mergeSort(a, mid + 1, r);
        merge(a, l, mid, r);

        cout << "This\n";
        for (int i = l; i <= mid; i++)
        {
            cout << a[i] << " ";
        }
        cout << "\n";
        for (int i = mid + 1; i <= r; i++)
        {
            cout << a[i] << " ";
        }
        cout << "\n";
    }
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

    mergeSort(a, 0, n - 1);
    /* for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    } */

    return 0;
}
/*
input-1
10
15 4 3 9 2 8 10 12 6 1

input-2
8
5 20 45 30 25 10 28 40
*/