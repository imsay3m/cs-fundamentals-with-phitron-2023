#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a, b, c;
    cin >> a >> b >> c;
    int mx = 0, mn = 0;
    if (a <= b && b < c)
    {
        mx = c;
        mn = a;
    }
    else if (a >= b && b >= c)
    {
        mx = a;
        mn = c;
    }
    else if (a >= c && c >= b)
    {
        mx = a;
        mn = b;
    }
    else if (a <= c && c <= b)
    {
        mx = b;
        mn = a;
    }
    else if (b >= a && a >= c)
    {
        mx = b;
        mn = c;
    }
    else if (b <= a && a <= c)
    {
        mx = c;
        mn = b;
    }

    cout << mn << " " << mx << endl;

    return 0;
}