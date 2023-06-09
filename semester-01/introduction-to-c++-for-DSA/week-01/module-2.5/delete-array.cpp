#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int *arr1 = new int[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    int m;
    cin >> m;
    int arr2[m];
    for (size_t i = 0; i < n; i++)
    {
        arr2[i] = arr1[i];
    }
    for (size_t i = n; i < m; i++)
    {
        cin >> arr2[i];
    }
    delete[] arr1;
    for (size_t i = 0; i < m; i++)
    {
        cout << arr2[i] << " ";
    }
    cout << endl;
    for (size_t i = 0; i < n; i++)
    {
        cout << arr1[i] << " ";
    }
    return 0;
}