#include <bits/stdc++.h>
using namespace std;
void printC(int *arr, int n)
{
    char c;
    cin >> c;
    for (size_t i = 0; i < n; i++)
    {
        cout << c << " ";
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int sz;
        cin >> sz;
        int *arr = new int[sz];
        printC(arr, sz);
    }

    return 0;
}