#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string n;
        cin >> n;
        int sum1 = 0, sum2 = 0;
        for (size_t i = 0; i < n.size() / 2; i++)
        {
            sum1 = sum1 + n[i];
        }
        for (int i = n.size() - 1; i >= n.size() / 2; i--)
        {
            sum2 = sum2 + n[i];
        }
        if (sum1 == sum2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}