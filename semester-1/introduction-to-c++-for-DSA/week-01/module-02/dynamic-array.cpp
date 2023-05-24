#include <bits/stdc++.h>
using namespace std;
int main()
{
    int *arr = new int[5];
    for (size_t i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    for (size_t i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}