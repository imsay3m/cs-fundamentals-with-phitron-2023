#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    char s, q;
    cin >> a >> s >> b >> q >> c;
    switch (s)
    {
    case '+':
        ((a + b) == c) ? cout << "Yes" : cout << (a + b);
        cout << endl;
        break;
    case '-':
        ((a - b) == c) ? cout << "Yes" : cout << (a - b);
        cout << endl;
        break;
    case '*':
        ((a * b) == c) ? cout << "Yes" : cout << (a * b);
        cout << endl;
        break;

    default:
        break;
    }
    return 0;
}