#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int mx = arr[0];
    for (size_t i = 0; i < n; i++)
    {
        if (mx < arr[i])
            mx = max(arr[i], mx);
    }
    cout << mx << endl;

    return 0;
}