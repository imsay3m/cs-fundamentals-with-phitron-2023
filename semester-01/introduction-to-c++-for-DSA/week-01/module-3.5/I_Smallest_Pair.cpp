#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int k = 0; k < t; k++)
    {
        int n;
        cin >> n;
        int arr[n];
        int mn = INT_MAX;
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = i + 1; j <= n; j++)
            {
                int sm = arr[i] + arr[j] + j - i;
                if (sm < mn)
                {
                    mn = sm;
                }
            }
        }
        cout << mn << endl;
    }

    return 0;
}