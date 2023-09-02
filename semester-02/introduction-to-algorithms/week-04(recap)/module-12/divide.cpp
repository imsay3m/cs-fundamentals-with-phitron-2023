#include <bits/stdc++.h>
using namespace std;

void divide(int a[], int l, int r)
{
    for (int i = l; i <= r; i++)
    {
        cout << a[i] << " ";
    }
    cout << "\n";
    if (l < r)
    {
        int mid = (l + r) / 2;
        divide(a, l, mid);
        divide(a, mid + 1, r);
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
    divide(a, 0, n - 1);

    return 0;
}

/*
input-1
10
2 3 5 10 1 4 6 8 9 15

input-2
6
10 20 30 40 50 60
*/