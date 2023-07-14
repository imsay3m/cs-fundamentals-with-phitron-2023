#include <bits/stdc++.h>
using namespace std;
int minOp(int *arr, int n)
{
    int evenCnt = 0, oddCnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
            evenCnt++;
        else
            oddCnt++;
    }

    if (evenCnt == oddCnt)
    {
        return 0;
    }
    if ((evenCnt - oddCnt) % 2 != 0)
    {
        return -1;
    }
    return abs(evenCnt - oddCnt) / 2;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int sz;
        cin >> sz;
        int *a = new int[sz];
        for (int i = 0; i < sz; i++)
        {
            cin >> a[i];
        }
        int res = minOp(a, sz);
        cout << res << endl;
    }

    return 0;
}