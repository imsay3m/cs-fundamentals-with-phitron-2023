#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int x = 1;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            if (col == 0)
            {
                cout << x;
                x++;
            }
            else if (row > 0 && row < n - 1 && col > 0 && col < n - 1)
            {
                cout << " ";
            }
            else if (row == n - 1)
            {
                cout << n;
            }
            else
            {
                cout << col + 1;
            }
        }
        printf("\n");
    }
    return 0;
}
