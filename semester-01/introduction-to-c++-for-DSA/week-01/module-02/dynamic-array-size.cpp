#include <bits/stdc++.h>
using namespace std;
int main()
{
    int *arr = new int[5];
    for (size_t i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    int *b = new int[7];
    for (size_t i = 0; i < 5; i++)
    {
        b[i] = arr[i];
    }
    b[5] = 50;
    b[6] = 60;

    for (size_t i = 0; i < 7; i++)
    {
        cout << b[i] << " ";
    }
    cout << endl;
    delete[] arr;
    for (size_t i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}