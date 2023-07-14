#include <bits/stdc++.h>
using namespace std;
long long power(int x, int n)
{
    long long res = 1;
    for (size_t i = 0; i < n; i++)
    {
        res *= x;
    }
    return res;
}
int main()
{
    int x;
    cin >> x;
    int n;
    cin >> n;
    long long sum = 0;
    for (size_t i = 0; i <= n; i += 2)
    {

        if (i == 0)
        {
            sum = 0;
        }
        else
        {
            long long p = power(x, i);
            sum = sum + p;
        }
    }
    cout << sum << endl;

    return 0;
}