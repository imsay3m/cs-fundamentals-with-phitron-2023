#include <bits/stdc++.h>
using namespace std;
int *fun()
{
    int *arr = new int[5];
    for (size_t i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    return arr;
}
int main()
{
    int *a = fun();
    for (size_t i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}