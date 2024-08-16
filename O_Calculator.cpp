#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y;
    char c;
    cin >> x >> c >> y;
    if (c == '+')
        cout << x + y;
    else if (c == '-')
    {
        cout << x - y;
        return 0;
    }
    else if (c == '*')
    {
        cout << x * y;
        return 0;
    }
    else if (c == '/')
    {
        cout << x / y;
        return 0;
    }
    return 0;
}