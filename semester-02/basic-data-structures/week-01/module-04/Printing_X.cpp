#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l;
    cin >> l;

    for (int i = 1; i <= l; i++)
    {
        for (int j = 1; j <= l; j++)
        {
            if (i == (l + 1) / 2 && j == (l + 1) / 2)
                cout << "X";
            else if (i == j)
                cout << "\\";
            else if (i + j == l + 1)
                cout << "/";
            else
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}