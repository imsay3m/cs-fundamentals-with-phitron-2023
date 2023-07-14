#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    while (s.find("EGYPT") != -1)
    {
        int start = s.find("EGYPT");
        s.replace(start, 5, " ");
    }
    cout << s << endl;
    return 0;
}