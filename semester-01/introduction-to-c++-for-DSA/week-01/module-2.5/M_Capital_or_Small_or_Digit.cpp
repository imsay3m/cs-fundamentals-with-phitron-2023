#include <bits/stdc++.h>
using namespace std;
int main()
{
    char a;
    cin >> a;
    if (a >= '0' && a <= '9')
    {
        cout << "IS DIGIT" << endl;
    }
    else
    {
        cout << "ALPHA" << endl;
        (a >= 'A' && a <= 'Z') ? cout << "IS CAPITAL" : cout << "IS SMALL";
    }
    return 0;
}