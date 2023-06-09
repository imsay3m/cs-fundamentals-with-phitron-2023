#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    char s;
    cin >> a >> s >> b;
    switch (s)
    {
    case '<':
        (a < b) ? cout << "Right" : cout << "Wrong";
        cout << endl;
        break;
    case '>':
        (a > b) ? cout << "Right" : cout << "Wrong";
        cout << endl;
        break;
    case '=':
        (a == b) ? cout << "Right" : cout << "Wrong";
        cout << endl;
        break;

    default:
        break;
    }
    return 0;
}